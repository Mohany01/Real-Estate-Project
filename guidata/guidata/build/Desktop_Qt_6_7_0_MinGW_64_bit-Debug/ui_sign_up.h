/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sign_Up
{
public:
    QLabel *label;
    QLineEdit *firstname;
    QLineEdit *lastname;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *phone;
    QPushButton *SignUp;

    void setupUi(QDialog *Sign_Up)
    {
        if (Sign_Up->objectName().isEmpty())
            Sign_Up->setObjectName("Sign_Up");
        Sign_Up->resize(998, 619);
        label = new QLabel(Sign_Up);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 998, 619));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/sign.jpg")));
        firstname = new QLineEdit(Sign_Up);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(380, 210, 201, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        firstname->setFont(font);
        firstname->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        lastname = new QLineEdit(Sign_Up);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(380, 270, 201, 31));
        lastname->setFont(font);
        lastname->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        username = new QLineEdit(Sign_Up);
        username->setObjectName("username");
        username->setGeometry(QRect(380, 330, 201, 31));
        username->setFont(font);
        username->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        password = new QLineEdit(Sign_Up);
        password->setObjectName("password");
        password->setGeometry(QRect(380, 390, 201, 31));
        password->setFont(font);
        password->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        phone = new QLineEdit(Sign_Up);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(380, 450, 201, 31));
        phone->setFont(font);
        phone->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        phone->setMaxLength(11);
        SignUp = new QPushButton(Sign_Up);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(440, 530, 81, 31));
        SignUp->setBaseSize(QSize(30, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(15);
        font1.setBold(true);
        SignUp->setFont(font1);
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
        SignUp->setText(QString::fromUtf8("Submit"));

        retranslateUi(Sign_Up);

        QMetaObject::connectSlotsByName(Sign_Up);
    } // setupUi

    void retranslateUi(QDialog *Sign_Up)
    {
        Sign_Up->setWindowTitle(QCoreApplication::translate("Sign_Up", "Dialog", nullptr));
        label->setText(QString());
        firstname->setText(QString());
        firstname->setPlaceholderText(QCoreApplication::translate("Sign_Up", "First Name", nullptr));
        lastname->setText(QString());
        lastname->setPlaceholderText(QCoreApplication::translate("Sign_Up", "Last Name", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("Sign_Up", "Username", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("Sign_Up", "Password", nullptr));
        phone->setText(QString());
        phone->setPlaceholderText(QCoreApplication::translate("Sign_Up", "Phone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_Up: public Ui_Sign_Up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
