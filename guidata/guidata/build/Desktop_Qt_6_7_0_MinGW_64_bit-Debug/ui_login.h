/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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
    QLabel *back;
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
        MainWindow->resize(998, 662);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        back = new QLabel(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(-8, -1, 1051, 661));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/path/to/background_image.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}"));
        back->setPixmap(QPixmap(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/hoome.jpg")));
        log = new QPushButton(centralwidget);
        log->setObjectName("log");
        log->setGeometry(QRect(530, 470, 61, 31));
        log->setBaseSize(QSize(30, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(15);
        font.setBold(true);
        log->setFont(font);
        log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 10px;\n"
"\n"
"\n"
"                         }\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"\n"
"      background-color : rgb(51, 149, 255);\n"
"      \n"
"\n"
" }"));
        log->setText(QString::fromUtf8("LogIn"));
        SignUp = new QPushButton(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(360, 470, 81, 31));
        SignUp->setBaseSize(QSize(30, 30));
        SignUp->setFont(font);
        SignUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 10px;\n"
"\n"
"\n"
"                         }\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"\n"
"      background-color : rgb(51, 149, 255);\n"
"      \n"
"\n"
" }"));
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
        usertext->setGeometry(QRect(370, 265, 201, 31));
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
        passtext->setGeometry(QRect(370, 350, 201, 31));
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
        menubar->setGeometry(QRect(0, 0, 998, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Real Estate", nullptr));
        back->setText(QString());
        textEdit_2->setDocumentTitle(QString());
        usertext->setText(QString());
        usertext->setPlaceholderText(QCoreApplication::translate("MainWindow", "username", nullptr));
        passtext->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
