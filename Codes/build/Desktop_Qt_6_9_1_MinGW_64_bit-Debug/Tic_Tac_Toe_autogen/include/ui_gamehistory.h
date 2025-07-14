/********************************************************************************
** Form generated from reading UI file 'gamehistory.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEHISTORY_H
#define UI_GAMEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamehistory
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *listWidget;
    QLineEdit *searchbox;
    QPushButton *back_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gamehistory)
    {
        if (Gamehistory->objectName().isEmpty())
            Gamehistory->setObjectName("Gamehistory");
        Gamehistory->resize(800, 557);
        Gamehistory->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 rgba(0, 34, 133, 180),\n"
"        stop: 1 rgba(255, 255, 255, 80)\n"
"    );\n"
"}\n"
""));
        centralwidget = new QWidget(Gamehistory);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, -10, 841, 71));
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
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 110, 781, 351));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    font-size: 16px;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    background-color: #1e1e1e;\n"
"    border: none;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 10px;\n"
"    margin: 5px;\n"
"    border-radius: 8px;\n"
"	outline: none;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #3a7bd5;\n"
"    color: #ffffff;\n"
"	outline: none;\n"
"}\n"
""));
        listWidget->setFrameShape(QFrame::Shape::StyledPanel);
        listWidget->setAlternatingRowColors(true);
        listWidget->setItemAlignment(Qt::AlignmentFlag::AlignLeading);
        listWidget->setSortingEnabled(true);
        searchbox = new QLineEdit(centralwidget);
        searchbox->setObjectName("searchbox");
        searchbox->setGeometry(QRect(560, 70, 221, 28));
        searchbox->setClearButtonEnabled(true);
        back_button = new QPushButton(centralwidget);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(300, 470, 181, 61));
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
        Gamehistory->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gamehistory);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Gamehistory->setMenuBar(menubar);
        statusbar = new QStatusBar(Gamehistory);
        statusbar->setObjectName("statusbar");
        Gamehistory->setStatusBar(statusbar);

        retranslateUi(Gamehistory);

        QMetaObject::connectSlotsByName(Gamehistory);
    } // setupUi

    void retranslateUi(QMainWindow *Gamehistory)
    {
        Gamehistory->setWindowTitle(QCoreApplication::translate("Gamehistory", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Gamehistory", "Game History \360\237\217\206\360\237\223\226", nullptr));
        searchbox->setText(QString());
        searchbox->setPlaceholderText(QCoreApplication::translate("Gamehistory", "Search by ID or Opponent name", nullptr));
        back_button->setText(QCoreApplication::translate("Gamehistory", "Main Menu ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamehistory: public Ui_Gamehistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEHISTORY_H
