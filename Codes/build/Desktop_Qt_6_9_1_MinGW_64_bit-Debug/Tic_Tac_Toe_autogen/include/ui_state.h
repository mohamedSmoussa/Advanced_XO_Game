/********************************************************************************
** Form generated from reading UI file 'state.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATE_H
#define UI_STATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_State
{
public:
    QWidget *centralwidget;
    QLabel *p1_label;
    QPushButton *playagain;
    QPushButton *MainMenust;
    QLabel *winnerlabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *State)
    {
        if (State->objectName().isEmpty())
            State->setObjectName("State");
        State->resize(479, 248);
        State->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(0, 34, 133, 180),\n"
"        stop: 1 rgba(255, 255, 255, 80)\n"
"    );\n"
"}"));
        centralwidget = new QWidget(State);
        centralwidget->setObjectName("centralwidget");
        p1_label = new QLabel(centralwidget);
        p1_label->setObjectName("p1_label");
        p1_label->setGeometry(QRect(-20, -10, 541, 63));
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
        playagain = new QPushButton(centralwidget);
        playagain->setObjectName("playagain");
        playagain->setGeometry(QRect(40, 170, 141, 41));
        playagain->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"\n"
"QPushButton:disabled {\n"
"    background-color: rgba(150, 150, 150, 100); /* \330\261\331\205\330\247\330\257\331\212 \331\201\330\247\330\252\330\255 \330\264\331\201\330\247\331\201 */\n"
"    color: rgba(255, 255, "
                        "255, 180); /* \330\243\330\250\331\212\330\266 \330\250\330\247\331\207\330\252 */\n"
"    font: bold 11pt \"Arial\";\n"
"}\n"
""));
        MainMenust = new QPushButton(centralwidget);
        MainMenust->setObjectName("MainMenust");
        MainMenust->setGeometry(QRect(310, 170, 141, 41));
        MainMenust->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"\n"
"QPushButton:disabled {\n"
"    background-color: rgba(150, 150, 150, 100); /* \330\261\331\205\330\247\330\257\331\212 \331\201\330\247\330\252\330\255 \330\264\331\201\330\247\331\201 */\n"
"    color: rgba(255, 255, "
                        "255, 180); /* \330\243\330\250\331\212\330\266 \330\250\330\247\331\207\330\252 */\n"
"    font: bold 11pt \"Arial\";\n"
"}\n"
""));
        winnerlabel = new QLabel(centralwidget);
        winnerlabel->setObjectName("winnerlabel");
        winnerlabel->setGeometry(QRect(10, 80, 461, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        winnerlabel->setFont(font);
        winnerlabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(0, 0, 0, 0);  /* Fully transparent */\n"
"    border: none;                       /* No borders */\n"
"    color: white;                       /* Text color (you can change) */\n"
"    qproperty-alignment: AlignCenter;   /* Center text */\n"
"    font-weight: bold;                  /* Optional: make text bolder */\n"
"}"));
        State->setCentralWidget(centralwidget);
        menubar = new QMenuBar(State);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 479, 25));
        State->setMenuBar(menubar);
        statusbar = new QStatusBar(State);
        statusbar->setObjectName("statusbar");
        State->setStatusBar(statusbar);

        retranslateUi(State);

        QMetaObject::connectSlotsByName(State);
    } // setupUi

    void retranslateUi(QMainWindow *State)
    {
        State->setWindowTitle(QCoreApplication::translate("State", "MainWindow", nullptr));
        p1_label->setText(QCoreApplication::translate("State", "Game Over! \360\237\233\221\360\237\216\256", nullptr));
        playagain->setText(QCoreApplication::translate("State", "Play again", nullptr));
        MainMenust->setText(QCoreApplication::translate("State", "Main Menu", nullptr));
        winnerlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class State: public Ui_State {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATE_H
