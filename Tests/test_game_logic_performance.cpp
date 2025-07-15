#include <gtest/gtest.h>
#include <chrono>
#include <vector>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <functional>
#include <sys/resource.h>
#include "game_logic.h"

class GameLogicPerformanceTest : public ::testing::Test {
protected:
    void SetUp() override {
        game_engine_ = std::make_unique<GameEngine>();
        test_start_ = std::chrono::high_resolution_clock::now();
    }

    void TearDown() override {
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::high_resolution_clock::now() - test_start_);
        std::cout << "[TOTAL TEST TIME] " << duration.count() << " ms ("
                  << std::fixed << std::setprecision(2) << (duration.count() / 1000.0) << " s)\n";
    }

    struct ProfileData {
        double real_ms, user_ms, sys_ms, memory_kb;
    };

    ProfileData profile(std::function<void()> op) {
        struct rusage start, end;
        getrusage(RUSAGE_SELF, &start);
        auto t1 = std::chrono::high_resolution_clock::now();
        op();
        auto t2 = std::chrono::high_resolution_clock::now();
        getrusage(RUSAGE_SELF, &end);
        
        return {
            std::chrono::duration<double, std::milli>(t2 - t1).count(),
            (end.ru_utime.tv_sec - start.ru_utime.tv_sec) * 1000.0 +
            (end.ru_utime.tv_usec - start.ru_utime.tv_usec) / 1000.0,
            (end.ru_stime.tv_sec - start.ru_stime.tv_sec) * 1000.0 +
            (end.ru_stime.tv_usec - start.ru_stime.tv_usec) / 1000.0,
            (double)end.ru_maxrss
        };
    }

    void printProfile(const ProfileData& p, const std::string& name) {
        double cpu_percent = (p.real_ms > 0) ? ((p.user_ms + p.sys_ms) / p.real_ms * 100.0) : 0.0;
        std::cout << "[" << name << "] Real: " << std::fixed << std::setprecision(3)
                  << p.real_ms << "ms | CPU: " << (p.user_ms + p.sys_ms)
                  << "ms | Memory: " << (p.memory_kb/1024.0) << "MB | CPU%: "
                  << std::setprecision(1) << cpu_percent << "%\n";
    }

    std::unique_ptr<GameEngine> game_engine_;
    std::chrono::high_resolution_clock::time_point test_start_;
};

TEST_F(GameLogicPerformanceTest, CoreOperationsProfile) {
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "\n=== Core Operations Performance ===\n";
    
    std::vector<double> init_times, move_times, validation_times;
    const int iterations = 100;
    
    for (int i = 0; i < iterations; ++i) {
        // Test initialization
        auto p1 = profile([&]() { game_engine_->Game_init(); });
        init_times.push_back(p1.real_ms);
        
        // Test move validation and making
        std::vector<int> moves = {1, 2, 3, 4, 5};
        for (int move : moves) {
            auto p2 = profile([&]() { game_engine_->isValidMove(move); });
            validation_times.push_back(p2.real_ms);
            
            if (game_engine_->isValidMove(move)) {
                auto p3 = profile([&]() { game_engine_->makeMove(move, "Test move"); });
                move_times.push_back(p3.real_ms);
            }
            
            if (game_engine_->isGameOver()) break;
        }
        
        if ((i + 1) % 20 == 0) {
            std::cout << "Completed " << (i + 1) << "/" << iterations << " cycles\n";
        }
    }
    
    double avg_init = std::accumulate(init_times.begin(), init_times.end(), 0.0) / init_times.size();
    double avg_move = std::accumulate(move_times.begin(), move_times.end(), 0.0) / move_times.size();
    double avg_validation = std::accumulate(validation_times.begin(), validation_times.end(), 0.0) / validation_times.size();
    
    std::cout << "Average Init: " << std::setprecision(4) << avg_init << "ms | "
              << "Move: " << avg_move << "ms | Validation: " << avg_validation << "ms\n";
    
    EXPECT_LT(avg_init, 1.0) << "Game initialization too slow: " << avg_init << "ms";
    EXPECT_LT(avg_move, 0.5) << "Move making too slow: " << avg_move << "ms";
    EXPECT_LT(avg_validation, 0.1) << "Move validation too slow: " << avg_validation << "ms";
    
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::high_resolution_clock::now() - start);
    std::cout << "[TEST TIME] CoreOperationsProfile: " << duration.count() << "ms\n";
}

TEST_F(GameLogicPerformanceTest, GameSimulation) {
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "\n=== Game Simulation ===\n";
    
    const int num_games = 50;
    std::vector<double> game_times;
    
    std::vector<std::vector<int>> patterns = {
        {1, 2, 4, 5, 7},                    // Quick win
        {1, 2, 3, 4, 6, 5, 8, 9, 7},       // Draw
        {5, 1, 9, 3, 2, 7}                  // Diagonal win
    };
    
    for (int game = 0; game < num_games; ++game) {
        const auto& pattern = patterns[game % patterns.size()];
        
        auto p = profile([&]() {
            game_engine_->Game_init();
            
            for (int move : pattern) {
                if (game_engine_->isValidMove(move)) {
                    game_engine_->makeMove(move, "Simulation move");
                    game_engine_->checkWin("X");
                    game_engine_->checkWin("O");
                    game_engine_->checkDraw();
                    if (game_engine_->isGameOver()) break;
                }
            }
        });
        
        game_times.push_back(p.real_ms);
        
        if ((game + 1) % 10 == 0) {
            std::cout << "Completed " << (game + 1) << "/" << num_games << " games\n";
        }
    }
    
    double avg_game = std::accumulate(game_times.begin(), game_times.end(), 0.0) / game_times.size();
    double games_per_sec = num_games / (std::accumulate(game_times.begin(), game_times.end(), 0.0) / 1000.0);
    
    std::cout << "Average Game: " << std::setprecision(4) << avg_game << "ms | "
              << "Games/sec: " << std::setprecision(2) << games_per_sec << "\n";
    
    EXPECT_LT(avg_game, 5.0) << "Game simulation too slow: " << avg_game << "ms";
    
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::high_resolution_clock::now() - start);
    std::cout << "[TEST TIME] GameSimulation: " << duration.count() << "ms\n";
}

TEST_F(GameLogicPerformanceTest, StressTest) {
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "\n=== Stress Test ===\n";
    
    const int iterations = 100;
    
    auto p = profile([&]() {
        for (int i = 0; i < iterations; ++i) {
            game_engine_->Game_init();
            
            for (int pos = 1; pos <= 9; ++pos) {
                if (game_engine_->isValidMove(pos)) {
                    game_engine_->makeMove(pos, "Stress test");
                    if (game_engine_->isGameOver()) break;
                }
            }
            
            while (!game_engine_->get_moveHistory().empty()) {
                game_engine_->undoMove();
            }
            
            if ((i + 1) % 20 == 0) {
                std::cout << "Completed " << (i + 1) << "/" << iterations << " cycles\n";
            }
        }
    });
    
    printProfile(p, "Stress Test");
    
    double avg_per_cycle = p.real_ms / iterations;
    double cycles_per_sec = iterations / (p.real_ms / 1000.0);
    
    std::cout << "Cycles: " << iterations << " | Cycles/sec: " << std::setprecision(1)
              << cycles_per_sec << " | Avg/cycle: " << std::setprecision(3) << avg_per_cycle << "ms\n";
    
    EXPECT_LT(avg_per_cycle, 10.0) << "Stress test degraded: " << avg_per_cycle << "ms/cycle";
    
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::high_resolution_clock::now() - start);
    std::cout << "[TEST TIME] StressTest: " << duration.count() << "ms\n";
}

int main(int argc, char **argv) {
    auto suite_start = std::chrono::high_resolution_clock::now();
    ::testing::InitGoogleTest(&argc, argv);
    
    std::cout << "=== Game Logic Performance Test Suite ===\n";
    std::cout << "Testing core GameEngine operations\n\n";
    
    int result = RUN_ALL_TESTS();
    
    auto suite_duration = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::high_resolution_clock::now() - suite_start);
    std::cout << "\n[SUITE TOTAL TIME] " << suite_duration.count() << " ms ("
              << std::fixed << std::setprecision(2) << (suite_duration.count() / 1000.0) << " s)\n";
    
    return result;
}
