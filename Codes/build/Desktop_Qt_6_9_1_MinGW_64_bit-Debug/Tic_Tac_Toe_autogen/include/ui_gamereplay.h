/********************************************************************************
** Form generated from reading UI file 'gamereplay.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEREPLAY_H
#define UI_GAMEREPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamereplay
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *c_9;
    QPushButton *c_5;
    QLabel *upper;
    QLabel *Lower;
    QPushButton *c_3;
    QPushButton *c_1;
    QPushButton *c_2;
    QPushButton *c_7;
    QPushButton *c_6;
    QLabel *Right;
    QPushButton *c_8;
    QPushButton *c_4;
    QLabel *left;
    QLabel *X_label;
    QLabel *O_label;
    QLabel *winner_label;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QPushButton *back_button;
    QLabel *comment_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gamereplay)
    {
        if (Gamereplay->objectName().isEmpty())
            Gamereplay->setObjectName("Gamereplay");
        Gamereplay->resize(800, 600);
        Gamereplay->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(0, 34, 133, 180),\n"
"        stop: 1 rgba(255, 255, 255, 80)\n"
"    );\n"
"}\n"
""));
        centralwidget = new QWidget(Gamereplay);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, 0, 841, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(30, 60, 114, 150),   /* Dark Blue with transparency */\n"
"        stop: 1 rgba(42, 82, 152, 150)    /* Medium Blue with transparency */\n"
"    );\n"
"    color: white;\n"
"    font: bold 20pt \"Segoe UI\";\n"
"    padding: 14px;\n"
"    border-radius: 20px;\n"
"    border: 2px solid rgba(255, 255, 255, 180); /* Semi-transparent white border */\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: qlineargradient(\n"
"        x1: 1, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 rgba(58, 28, 113, 180),   /* Dark purple */\n"
"        stop: 1 rgba(215, 109, 119, 180)  /* Pink with transparency */\n"
"    );\n"
"    color: #FFEB3B;\n"
"    border: 2px solid #FFEB3B;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        c_9 = new QPushButton(centralwidget);
        c_9->setObjectName("c_9");
        c_9->setGeometry(QRect(319, 370, 141, 141));
        c_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        c_9->setIcon(icon);
        c_9->setIconSize(QSize(150, 125));
        c_5 = new QPushButton(centralwidget);
        c_5->setObjectName("c_5");
        c_5->setGeometry(QRect(159, 220, 161, 151));
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
        upper = new QLabel(centralwidget);
        upper->setObjectName("upper");
        upper->setGeometry(QRect(19, 220, 441, 16));
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
        Lower->setGeometry(QRect(19, 370, 441, 20));
        Lower->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        c_3 = new QPushButton(centralwidget);
        c_3->setObjectName("c_3");
        c_3->setGeometry(QRect(319, 70, 141, 151));
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
        c_1 = new QPushButton(centralwidget);
        c_1->setObjectName("c_1");
        c_1->setGeometry(QRect(19, 70, 141, 151));
        QFont font2;
        font2.setPointSize(36);
        c_1->setFont(font2);
        c_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: none;\n"
"}"));
        c_1->setIcon(icon);
        c_1->setIconSize(QSize(150, 125));
        c_2 = new QPushButton(centralwidget);
        c_2->setObjectName("c_2");
        c_2->setGeometry(QRect(159, 70, 161, 151));
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
        c_7 = new QPushButton(centralwidget);
        c_7->setObjectName("c_7");
        c_7->setGeometry(QRect(19, 370, 141, 141));
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
        c_6 = new QPushButton(centralwidget);
        c_6->setObjectName("c_6");
        c_6->setGeometry(QRect(319, 220, 141, 151));
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
        Right = new QLabel(centralwidget);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(150, 80, 16, 441));
        Right->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        c_8 = new QPushButton(centralwidget);
        c_8->setObjectName("c_8");
        c_8->setGeometry(QRect(159, 370, 161, 141));
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
        c_4 = new QPushButton(centralwidget);
        c_4->setObjectName("c_4");
        c_4->setGeometry(QRect(19, 220, 141, 151));
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
        left = new QLabel(centralwidget);
        left->setObjectName("left");
        left->setGeometry(QRect(310, 80, 16, 441));
        left->setStyleSheet(QString::fromUtf8("QLabel#left {\n"
"    background-color: rgba(255, 255, 255, 1); /* Neon white with 30% opacity */\n"
"    border: none;\n"
"    min-width: 0px;\n"
"    min-height: 0px;\n"
"    border-radius: 7px;\n"
"    box-shadow: 0 0 4px rgba(255, 255, 255, 1); /* Lighter neon glow */\n"
"}"));
        left->setLineWidth(0);
        X_label = new QLabel(centralwidget);
        X_label->setObjectName("X_label");
        X_label->setGeometry(QRect(510, 70, 271, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        X_label->setFont(font3);
        X_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 700 14pt \"Arial\";\n"
""));
        O_label = new QLabel(centralwidget);
        O_label->setObjectName("O_label");
        O_label->setGeometry(QRect(510, 120, 271, 51));
        O_label->setFont(font3);
        O_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 700 14pt \"Arial\";\n"
""));
        winner_label = new QLabel(centralwidget);
        winner_label->setObjectName("winner_label");
        winner_label->setGeometry(QRect(510, 180, 271, 51));
        winner_label->setFont(font3);
        winner_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 700 14pt \"Arial\";\n"
""));
        prevButton = new QPushButton(centralwidget);
        prevButton->setObjectName("prevButton");
        prevButton->setGeometry(QRect(520, 240, 101, 91));
        prevButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    color: white;\n"
"    background-color: rgba(0, 120, 255, 180); /* \330\243\330\262\330\261\331\202 \330\264\331\201\330\247\331\201 */\n"
"    font: bold 14pt \"Arial\";\n"
"    border-radius: 20px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(30, 144, 255, 220); /* \330\243\330\262\330\261\331\202 \330\243\331\201\330\252\330\255 \330\271\331\206\330\257 \330\247\331\204\331\205\330\261\331\210\330\261 */\n"
"    font: bold 15pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 80, 180, 255); /* \330\243\330\262\330\261\331\202 \330\257\330\247\331\203\331\206 \330\271\331\206\330\257 \330\247\331\204\330\266\330\272\330\267 */\n"
"    font: bold 15pt \"Arial\";\n"
"}\n"
""));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(670, 240, 101, 91));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    color: white;\n"
"    background-color: rgba(0, 120, 255, 180); /* \330\243\330\262\330\261\331\202 \330\264\331\201\330\247\331\201 */\n"
"    font: bold 14pt \"Arial\";\n"
"    border-radius: 20px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(30, 144, 255, 220); /* \330\243\330\262\330\261\331\202 \330\243\331\201\330\252\330\255 \330\271\331\206\330\257 \330\247\331\204\331\205\330\261\331\210\330\261 */\n"
"    font: bold 15pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 80, 180, 255); /* \330\243\330\262\330\261\331\202 \330\257\330\247\331\203\331\206 \330\271\331\206\330\257 \330\247\331\204\330\266\330\272\330\267 */\n"
"    font: bold 15pt \"Arial\";\n"
"}\n"
""));
        back_button = new QPushButton(centralwidget);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(520, 510, 251, 61));
        back_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        comment_label = new QLabel(centralwidget);
        comment_label->setObjectName("comment_label");
        comment_label->setGeometry(QRect(480, 340, 301, 161));
        comment_label->setFont(font3);
        comment_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 700 14pt \"Arial\";\n"
""));
        comment_label->setWordWrap(true);
        Gamereplay->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gamereplay);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Gamereplay->setMenuBar(menubar);
        statusbar = new QStatusBar(Gamereplay);
        statusbar->setObjectName("statusbar");
        Gamereplay->setStatusBar(statusbar);

        retranslateUi(Gamereplay);

        QMetaObject::connectSlotsByName(Gamereplay);
    } // setupUi

    void retranslateUi(QMainWindow *Gamereplay)
    {
        Gamereplay->setWindowTitle(QCoreApplication::translate("Gamereplay", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Gamereplay", "Game History \360\237\217\206\360\237\223\226", nullptr));
        c_9->setText(QString());
        c_5->setText(QString());
        upper->setText(QString());
        Lower->setText(QString());
        c_3->setText(QString());
        c_1->setText(QString());
        c_2->setText(QString());
        c_7->setText(QString());
        c_6->setText(QString());
        Right->setText(QString());
        c_8->setText(QString());
        c_4->setText(QString());
        left->setText(QString());
        X_label->setText(QString());
        O_label->setText(QString());
        winner_label->setText(QString());
        prevButton->setText(QCoreApplication::translate("Gamereplay", "Prev\n"
"\342\217\256\357\270\217", nullptr));
        nextButton->setText(QCoreApplication::translate("Gamereplay", "Next\n"
"\342\217\255\357\270\217", nullptr));
        back_button->setText(QCoreApplication::translate("Gamereplay", "Game History", nullptr));
        comment_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gamereplay: public Ui_Gamereplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEREPLAY_H
