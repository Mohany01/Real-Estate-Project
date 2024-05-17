/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *lab;
    QPushButton *log;
    QPushButton *SignUp;
    QTextEdit *textEdit_2;
    QLineEdit *usertext;
    QLineEdit *passtext;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(998, 710);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-8, -1, 1051, 661));
        label->setPixmap(QPixmap(QString::fromUtf8("D:/project/Frame 1.jpg")));
        lab = new QLabel(centralwidget);
        lab->setObjectName("lab");
        lab->setGeometry(QRect(400, 540, 161, 81));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        lab->setFont(font);
        log = new QPushButton(centralwidget);
        log->setObjectName("log");
        log->setGeometry(QRect(530, 460, 71, 41));
        log->setBaseSize(QSize(30, 30));
        log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                         background-color : transparent;\n"
"  						 background-color : white;\n"
"background-color: cadetblue a0.5;\n"
"    					background-radius : 30 30 30 30 ;\n"
"						font: 600 11pt \"Segoe UI Semibold\";\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                            background-color :#376ea6;\n"
"background-color : rgb(23, 96, 175);\n"
"  background-radius : 30 30 30 30 ;\n"
"\n"
"                         }\n"
"  QPushButton:pressed{\n"
"\n"
"background-color : rgb(51, 149, 255);\n"
" background-radius : 30 30 30 30 ;\n"
"}"));
        log->setText(QString::fromUtf8("LogIn"));
        SignUp = new QPushButton(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(360, 460, 81, 41));
        SignUp->setBaseSize(QSize(30, 30));
        SignUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                         background-color : transparent;\n"
"  						 background-color : white;\n"
"    					background-radius : 30 30 30 30 ;\n"
"						font: 600 11pt \"Segoe UI Semibold\";\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                            background-color :#376ea6;\n"
"background-color : rgb(23, 96, 175);\n"
"  background-radius : 30 30 30 30 ;\n"
"\n"
"                         }\n"
"  QPushButton:pressed{\n"
"\n"
"background-color : rgb(51, 149, 255);\n"
" background-radius : 30 30 30 30 ;\n"
"}"));
        SignUp->setText(QString::fromUtf8("SignUp"));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(780, 620, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(false);
        textEdit_2->setFont(font1);
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background-color:transparent;\n"
"border: none;\n"
"\n"
"}"));
        usertext = new QLineEdit(centralwidget);
        usertext->setObjectName("usertext");
        usertext->setGeometry(QRect(390, 260, 201, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        usertext->setFont(font2);
        usertext->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        passtext = new QLineEdit(centralwidget);
        passtext->setObjectName("passtext");
        passtext->setGeometry(QRect(390, 345, 201, 31));
        passtext->setFont(font2);
        passtext->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 998, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        lab->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        textEdit_2->setDocumentTitle(QString());
        usertext->setPlaceholderText(QCoreApplication::translate("MainWindow", "username", nullptr));
        passtext->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
