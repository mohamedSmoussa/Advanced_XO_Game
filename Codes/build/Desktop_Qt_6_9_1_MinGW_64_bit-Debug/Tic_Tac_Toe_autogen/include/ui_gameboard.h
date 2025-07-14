/********************************************************************************
** Form generated from reading UI file 'gameboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gameboard
{
public:
    QWidget *centralwidget;
    QPushButton *Reset_button;
    QPushButton *Back_gboard;
    QWidget *gridLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *p1_label;
    QLabel *another_label;
    QPushButton *c_1;
    QPushButton *c_3;
    QPushButton *c_2;
    QPushButton *c_6;
    QPushButton *c_5;
    QPushButton *c_4;
    QPushButton *c_9;
    QPushButton *c_8;
    QPushButton *c_7;
    QLabel *upper;
    QLabel *Lower;
    QLabel *Right;
    QLabel *left;
    QPushButton *undo;
    QProgressBar *progressBar_1;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QProgressBar *progressBar_5;
    QProgressBar *progressBar_6;
    QProgressBar *progressBar_7;
    QProgressBar *progressBar_8;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *p1_wins_label;
    QLabel *ties_label;
    QLabel *p2_wins_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gameboard)
    {
        if (Gameboard->objectName().isEmpty())
            Gameboard->setObjectName("Gameboard");
        Gameboard->resize(524, 664);
        Gameboard->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(0, 34, 133, 180),\n"
"        stop: 1 rgba(255, 255, 255, 80)\n"
"    );\n"
"}\n"
""));
        centralwidget = new QWidget(Gameboard);
        centralwidget->setObjectName("centralwidget");
        Reset_button = new QPushButton(centralwidget);
        Reset_button->setObjectName("Reset_button");
        Reset_button->setGeometry(QRect(10, 590, 151, 51));
        Reset_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    color: white;\n"
"    background-color: rgba(0, 120, 255, 180); /* \330\243\330\262\330\261\331\202 \330\264\331\201\330\247\331\201 */\n"
"    font: bold 11pt \"Arial\";\n"
"    border-radius: 20px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(30, 144, 255, 220); /* \330\243\330\262\330\261\331\202 \330\243\331\201\330\252\330\255 \330\271\331\206\330\257 \330\247\331\204\331\205\330\261\331\210\330\261 */\n"
"    font: bold 12pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 80, 180, 255); /* \330\243\330\262\330\261\331\202 \330\257\330\247\331\203\331\206 \330\271\331\206\330\257 \330\247\331\204\330\266\330\272\330\267 */\n"
"    font: bold 12pt \"Arial\";\n"
"}\n"
""));
        Back_gboard = new QPushButton(centralwidget);
        Back_gboard->setObjectName("Back_gboard");
        Back_gboard->setGeometry(QRect(360, 590, 151, 51));
        Back_gboard->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    color: white;\n"
"    background-color: rgba(0, 120, 255, 180); /* \330\243\330\262\330\261\331\202 \330\264\331\201\330\247\331\201 */\n"
"    font: bold 11pt \"Arial\";\n"
"    border-radius: 20px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(30, 144, 255, 220); /* \330\243\330\262\330\261\331\202 \330\243\331\201\330\252\330\255 \330\271\331\206\330\257 \330\247\331\204\331\205\330\261\331\210\330\261 */\n"
"    font: bold 12pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 80, 180, 255); /* \330\243\330\262\330\261\331\202 \330\257\330\247\331\203\331\206 \330\271\331\206\330\257 \330\247\331\204\330\266\330\272\330\267 */\n"
"    font: bold 12pt \"Arial\";\n"
"}\n"
""));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(-20, 0, 561, 65));
        horizontalLayout = new QHBoxLayout(gridLayoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        p1_label = new QLabel(gridLayoutWidget_2);
        p1_label->setObjectName("p1_label");
        p1_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(30, 60, 114, 150),\n"
"        stop: 1 rgba(42, 82, 152, 150)\n"
"    );\n"
"    color: white;\n"
"    font: bold 14pt \"Segoe UI\";\n"
"    padding: 14px;\n"
"    border-radius: 20px;\n"
"    border: 2px solid rgba(255, 255, 255, 180); \n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"QLabel[active=\"true\"] {\n"
"    background-color: qlineargradient(\n"
"        x1: 1, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 rgba(58, 28, 113, 180),\n"
"        stop: 1 rgba(215, 109, 119, 180)\n"
"    );\n"
"    color: #FFEB3B;\n"
"    border: 2px solid #FFEB3B;\n"
"}"));

        horizontalLayout->addWidget(p1_label);

        another_label = new QLabel(gridLayoutWidget_2);
        another_label->setObjectName("another_label");
        another_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(30, 60, 114, 150),\n"
"        stop: 1 rgba(42, 82, 152, 150)\n"
"    );\n"
"    color: white;\n"
"    font: bold 14pt \"Segoe UI\";\n"
"    padding: 14px;\n"
"    border-radius: 20px;\n"
"    border: 2px solid rgba(255, 255, 255, 180); \n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"QLabel[active=\"true\"] {\n"
"    background-color: qlineargradient(\n"
"        x1: 1, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 rgba(58, 28, 113, 180),\n"
"        stop: 1 rgba(215, 109, 119, 180)\n"
"    );\n"
"    color: #FFEB3B;\n"
"    border: 2px solid #FFEB3B;\n"
"}"));

        horizontalLayout->addWidget(another_label);

        c_1 = new QPushButton(centralwidget);
        c_1->setObjectName("c_1");
        c_1->setGeometry(QRect(40, 140, 141, 151));
        QFont font;
        font.setPointSize(36);
        c_1->setFont(font);
        c_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Downloads/Adobe Express - file.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        c_1->setIcon(icon);
        c_1->setIconSize(QSize(150, 125));
        c_3 = new QPushButton(centralwidget);
        c_3->setObjectName("c_3");
        c_3->setGeometry(QRect(340, 140, 141, 151));
        c_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_3->setIcon(icon);
        c_3->setIconSize(QSize(150, 125));
        c_2 = new QPushButton(centralwidget);
        c_2->setObjectName("c_2");
        c_2->setGeometry(QRect(180, 140, 161, 151));
        c_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Downloads/Adobe Express - file (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        c_2->setIcon(icon1);
        c_2->setIconSize(QSize(150, 120));
        c_6 = new QPushButton(centralwidget);
        c_6->setObjectName("c_6");
        c_6->setGeometry(QRect(340, 290, 141, 151));
        c_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_6->setIcon(icon1);
        c_6->setIconSize(QSize(150, 125));
        c_5 = new QPushButton(centralwidget);
        c_5->setObjectName("c_5");
        c_5->setGeometry(QRect(180, 290, 161, 151));
        c_5->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        c_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_5->setIcon(icon);
        c_5->setIconSize(QSize(150, 120));
        c_4 = new QPushButton(centralwidget);
        c_4->setObjectName("c_4");
        c_4->setGeometry(QRect(40, 290, 141, 151));
        c_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_4->setIcon(icon1);
        c_4->setIconSize(QSize(150, 125));
        c_9 = new QPushButton(centralwidget);
        c_9->setObjectName("c_9");
        c_9->setGeometry(QRect(340, 440, 141, 141));
        c_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_9->setIcon(icon);
        c_9->setIconSize(QSize(150, 125));
        c_8 = new QPushButton(centralwidget);
        c_8->setObjectName("c_8");
        c_8->setGeometry(QRect(180, 440, 161, 141));
        c_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_8->setIcon(icon);
        c_8->setIconSize(QSize(150, 120));
        c_7 = new QPushButton(centralwidget);
        c_7->setObjectName("c_7");
        c_7->setGeometry(QRect(40, 440, 141, 141));
        c_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_7->setIcon(icon1);
        c_7->setIconSize(QSize(150, 125));
        upper = new QLabel(centralwidget);
        upper->setObjectName("upper");
        upper->setGeometry(QRect(40, 280, 441, 16));
        QFont font1;
        font1.setWeight(QFont::Thin);
        upper->setFont(font1);
        upper->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        Lower = new QLabel(centralwidget);
        Lower->setObjectName("Lower");
        Lower->setGeometry(QRect(40, 430, 441, 20));
        Lower->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        Right = new QLabel(centralwidget);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(171, 139, 16, 441));
        Right->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        left = new QLabel(centralwidget);
        left->setObjectName("left");
        left->setGeometry(QRect(331, 140, 16, 441));
        left->setStyleSheet(QString::fromUtf8("QLabel#left {\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        left->setLineWidth(0);
        undo = new QPushButton(centralwidget);
        undo->setObjectName("undo");
        undo->setGeometry(QRect(190, 590, 141, 51));
        undo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    color: white;\n"
"    background-color: rgba(0, 120, 255, 180); /* \330\243\330\262\330\261\331\202 \330\264\331\201\330\247\331\201 */\n"
"    font: bold 11pt \"Arial\";\n"
"    border-radius: 20px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(30, 144, 255, 220); /* \330\243\330\262\330\261\331\202 \330\243\331\201\330\252\330\255 \330\271\331\206\330\257 \330\247\331\204\331\205\330\261\331\210\330\261 */\n"
"    font: bold 12pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 80, 180, 255); /* \330\243\330\262\330\261\331\202 \330\257\330\247\331\203\331\206 \330\271\331\206\330\257 \330\247\331\204\330\266\330\272\330\267 */\n"
"    font: bold 12pt \"Arial\";\n"
"}\n"
""));
        progressBar_1 = new QProgressBar(centralwidget);
        progressBar_1->setObjectName("progressBar_1");
        progressBar_1->setGeometry(QRect(60, 210, 401, 16));
        progressBar_1->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: rgba(0, 0, 0, 0); \n"
"    color: white;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QProgressBar[active=\"x\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(255, 60, 172, 180),   \n"
"        stop: 0.5 rgba(120, 75, 160, 180), \n"
"        stop: 1 rgba(43, 134, 197, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QProgressBar[active=\"o\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(0, 240, 255, 180),   \n"
"        stop: 0.5 rgba(0, 85, 255, 180), \n"
"        stop: 1 rgba(58, 0, 255, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}"));
        progressBar_1->setMaximum(2000);
        progressBar_1->setValue(0);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(60, 350, 401, 16));
        progressBar_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: rgba(0, 0, 0, 0); \n"
"    color: white;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QProgressBar[active=\"x\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(255, 60, 172, 180),   \n"
"        stop: 0.5 rgba(120, 75, 160, 180), \n"
"        stop: 1 rgba(43, 134, 197, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QProgressBar[active=\"o\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(0, 240, 255, 180),   \n"
"        stop: 0.5 rgba(0, 85, 255, 180), \n"
"        stop: 1 rgba(58, 0, 255, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}"));
        progressBar_2->setMaximum(2000);
        progressBar_2->setValue(0);
        progressBar_3 = new QProgressBar(centralwidget);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setGeometry(QRect(60, 510, 401, 16));
        progressBar_3->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: rgba(0, 0, 0, 0); \n"
"    color: white;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QProgressBar[active=\"x\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(255, 60, 172, 180),   \n"
"        stop: 0.5 rgba(120, 75, 160, 180), \n"
"        stop: 1 rgba(43, 134, 197, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QProgressBar[active=\"o\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(0, 240, 255, 180),   \n"
"        stop: 0.5 rgba(0, 85, 255, 180), \n"
"        stop: 1 rgba(58, 0, 255, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}"));
        progressBar_3->setMaximum(2000);
        progressBar_3->setValue(0);
        progressBar_4 = new QProgressBar(centralwidget);
        progressBar_4->setObjectName("progressBar_4");
        progressBar_4->setGeometry(QRect(100, 160, 16, 401));
        progressBar_4->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: rgba(0, 0, 0, 0); \n"
"    color: white;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QProgressBar[active=\"x\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(255, 60, 172, 180),   \n"
"        stop: 0.5 rgba(120, 75, 160, 180), \n"
"        stop: 1 rgba(43, 134, 197, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QProgressBar[active=\"o\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(0, 240, 255, 180),   \n"
"        stop: 0.5 rgba(0, 85, 255, 180), \n"
"        stop: 1 rgba(58, 0, 255, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}"));
        progressBar_4->setMaximum(2000);
        progressBar_4->setValue(0);
        progressBar_4->setOrientation(Qt::Orientation::Vertical);
        progressBar_5 = new QProgressBar(centralwidget);
        progressBar_5->setObjectName("progressBar_5");
        progressBar_5->setGeometry(QRect(250, 160, 16, 401));
        progressBar_5->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: rgba(0, 0, 0, 0); \n"
"    color: white;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QProgressBar[active=\"x\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(255, 60, 172, 180),   \n"
"        stop: 0.5 rgba(120, 75, 160, 180), \n"
"        stop: 1 rgba(43, 134, 197, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QProgressBar[active=\"o\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(0, 240, 255, 180),   \n"
"        stop: 0.5 rgba(0, 85, 255, 180), \n"
"        stop: 1 rgba(58, 0, 255, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}"));
        progressBar_5->setMaximum(2000);
        progressBar_5->setValue(0);
        progressBar_5->setOrientation(Qt::Orientation::Vertical);
        progressBar_6 = new QProgressBar(centralwidget);
        progressBar_6->setObjectName("progressBar_6");
        progressBar_6->setGeometry(QRect(410, 160, 16, 401));
        progressBar_6->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    background-color: rgba(0, 0, 0, 0); \n"
"    color: white;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"}\n"
"\n"
"QProgressBar[active=\"x\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(255, 60, 172, 180),   \n"
"        stop: 0.5 rgba(120, 75, 160, 180), \n"
"        stop: 1 rgba(43, 134, 197, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QProgressBar[active=\"o\"]::chunk {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 0,\n"
"        stop: 0 rgba(0, 240, 255, 180),   \n"
"        stop: 0.5 rgba(0, 85, 255, 180), \n"
"        stop: 1 rgba(58, 0, 255, 180)    \n"
"    );\n"
"    border-radius: 10px;\n"
"    margin: 0px;\n"
"}"));
        progressBar_6->setMaximum(2000);
        progressBar_6->setValue(0);
        progressBar_6->setOrientation(Qt::Orientation::Vertical);
        progressBar_7 = new QProgressBar(centralwidget);
        progressBar_7->setObjectName("progressBar_7");
        progressBar_7->setGeometry(QRect(100, 140, 16, 401));
        progressBar_7->setStyleSheet(QString::fromUtf8(""));
        progressBar_7->setMaximum(2000);
        progressBar_7->setValue(0);
        progressBar_7->setOrientation(Qt::Orientation::Vertical);
        progressBar_8 = new QProgressBar(centralwidget);
        progressBar_8->setObjectName("progressBar_8");
        progressBar_8->setGeometry(QRect(400, 140, 16, 401));
        progressBar_8->setStyleSheet(QString::fromUtf8(""));
        progressBar_8->setMaximum(2000);
        progressBar_8->setValue(0);
        progressBar_8->setOrientation(Qt::Orientation::Vertical);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-10, 70, 541, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        p1_wins_label = new QLabel(gridLayoutWidget);
        p1_wins_label->setObjectName("p1_wins_label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        p1_wins_label->setFont(font2);
        p1_wins_label->setStyleSheet(QString::fromUtf8("/* Shared style for all 3 states */\n"
"QLabel#p1_wins_label[status=\"win\"],\n"
"QLabel#p1_wins_label[status=\"lose\"],\n"
"QLabel#p1_wins_label[status=\"draw\"] {\n"
"    border-radius: 10px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"    qproperty-alignment: AlignCenter;  /* Center the text */\n"
"    min-width: 100px; /* Optional: helps keep shape */\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* \360\237\237\242 Win = Neon Green */\n"
"QLabel#p1_wins_label[status=\"win\"] {\n"
"    background-color: rgba(0, 255, 0, 50);\n"
"    border: 2px solid rgba(0, 255, 0, 180);\n"
"    color: white;\n"
"}\n"
"\n"
"/* \360\237\224\264 Lose = Neon Red */\n"
"QLabel#p1_wins_label[status=\"lose\"] {\n"
"    background-color: rgba(255, 0, 0, 50);\n"
"    border: 2px solid rgba(255, 0, 0, 180);\n"
"    color: white;\n"
"}\n"
"\n"
"/* \360\237\237\241 Draw = Neon Yellow */\n"
"QLabel#p1_wins_label[status=\"draw\"] {\n"
"    background-color: rgba(255, 255, 0, 50);\n"
"    border: 2px solid rgba(255, 255, 0, 180);\n"
""
                        "    color: white;\n"
"}"));

        gridLayout->addWidget(p1_wins_label, 0, 0, 1, 1);

        ties_label = new QLabel(gridLayoutWidget);
        ties_label->setObjectName("ties_label");
        ties_label->setFont(font2);
        ties_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(255, 255, 0, 50);  /* Neon yellow with transparency */\n"
"    color: white;                             /* Text color */\n"
"    border: 2px solid rgba(255, 255, 0, 180); /* Neon border */\n"
"	qproperty-alignment: AlignCenter;  /* Center the text */\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    font-weight: bold;\n"
"}"));

        gridLayout->addWidget(ties_label, 0, 1, 1, 1);

        p2_wins_label = new QLabel(gridLayoutWidget);
        p2_wins_label->setObjectName("p2_wins_label");
        p2_wins_label->setFont(font2);
        p2_wins_label->setStyleSheet(QString::fromUtf8("/* Shared style for all 3 states */\n"
"QLabel#p2_wins_label[status=\"win\"],\n"
"QLabel#p2_wins_label[status=\"lose\"],\n"
"QLabel#p2_wins_label[status=\"draw\"] {\n"
"    border-radius: 10px;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"    qproperty-alignment: AlignCenter;  /* Center the text */\n"
"    min-width: 100px; /* Optional: helps keep shape */\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* \360\237\237\242 Win = Neon Green */\n"
"QLabel#p2_wins_label[status=\"win\"] {\n"
"    background-color: rgba(0, 255, 0, 50);\n"
"    border: 2px solid rgba(0, 255, 0, 180);\n"
"    color: white;\n"
"}\n"
"\n"
"/* \360\237\224\264 Lose = Neon Red */\n"
"QLabel#p2_wins_label[status=\"lose\"] {\n"
"    background-color: rgba(255, 0, 0, 50);\n"
"    border: 2px solid rgba(255, 0, 0, 180);\n"
"    color: white;\n"
"}\n"
"\n"
"/* \360\237\237\241 Draw = Neon Yellow */\n"
"QLabel#p2_wins_label[status=\"draw\"] {\n"
"    background-color: rgba(255, 255, 0, 50);\n"
"    border: 2px solid rgba(255, 255, 0, 180);\n"
""
                        "    color: white;\n"
"}"));

        gridLayout->addWidget(p2_wins_label, 0, 2, 1, 1);

        Gameboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gameboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 524, 25));
        Gameboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Gameboard);
        statusbar->setObjectName("statusbar");
        Gameboard->setStatusBar(statusbar);

        retranslateUi(Gameboard);

        QMetaObject::connectSlotsByName(Gameboard);
    } // setupUi

    void retranslateUi(QMainWindow *Gameboard)
    {
        Gameboard->setWindowTitle(QCoreApplication::translate("Gameboard", "MainWindow", nullptr));
        Reset_button->setText(QCoreApplication::translate("Gameboard", "Reset", nullptr));
        Back_gboard->setText(QCoreApplication::translate("Gameboard", "Main Menu", nullptr));
        p1_label->setText(QCoreApplication::translate("Gameboard", "TextLabel", nullptr));
        another_label->setText(QCoreApplication::translate("Gameboard", "TextLabel", nullptr));
        c_1->setText(QString());
        c_3->setText(QString());
        c_2->setText(QString());
        c_6->setText(QString());
        c_5->setText(QString());
        c_4->setText(QString());
        c_9->setText(QString());
        c_8->setText(QString());
        c_7->setText(QString());
        upper->setText(QString());
        Lower->setText(QString());
        Right->setText(QString());
        left->setText(QString());
        undo->setText(QCoreApplication::translate("Gameboard", "Undo", nullptr));
        progressBar_1->setFormat(QString());
        progressBar_2->setFormat(QString());
        progressBar_3->setFormat(QString());
        progressBar_4->setFormat(QString());
        progressBar_5->setFormat(QString());
        progressBar_6->setFormat(QString());
        progressBar_7->setFormat(QString());
        progressBar_8->setFormat(QString());
        p1_wins_label->setText(QString());
        ties_label->setText(QString());
        p2_wins_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gameboard: public Ui_Gameboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H
