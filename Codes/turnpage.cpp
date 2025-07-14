#include "turnpage.h"
#include "ui_turnpage.h"
#include"mainscreen.h"
#include "GameData.h"
# include <QDebug>
#include <QSettings>
#include"gameboard.h"
Turnpage::Turnpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Turnpage)
{
    ui->setupUi(this);
    ui->start_game->setEnabled(false);
    ui->turn_box->addItem("❌");
    ui->turn_box->addItem("⭕");
}
Turnpage::~Turnpage()
{
    delete ui;
}
void Turnpage::on_back_tomain_p_clicked()
{
    this->hide();
    MainScreen*mainscreen=new MainScreen();
    mainscreen->show();
}
void Turnpage::on_turn_box_currentTextChanged(const QString &arg1)
{
    GameData::instance().P1turn = arg1;
    if(arg1=="❌"){
        GameData::instance().Anotherturn ="⭕" ;
        GameData::instance().p1_move = "X";
        GameData::instance().is_p1_starts = true;
        GameData::instance().current_player = "X";
        GameData::instance().is_ai_turn = false;
    }
    else {
        GameData::instance().Anotherturn ="❌" ;
        GameData::instance().p1_move = "O";
        GameData::instance().is_p1_starts = false;
        GameData::instance().current_player = "X";
        GameData::instance().is_ai_turn = false;
    }
   ui->start_game->setEnabled(true);
}

void Turnpage::on_start_game_clicked()
{
    this->hide();
    GameData::instance().controller.StartNewGame(GameData::instance().firstPlayer.toStdString(), GameData::instance().secondPlayer.toStdString(),
                                                 false, "", GameData::instance().p1_move.toStdString());
    Gameboard*gameboard= new Gameboard();
    gameboard->show();
}


void Turnpage::on_turn_box_activated(int index)
{

}

