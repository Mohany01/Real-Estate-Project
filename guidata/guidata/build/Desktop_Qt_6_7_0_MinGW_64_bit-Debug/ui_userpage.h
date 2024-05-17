/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userPage
{
public:
    QLabel *label;
    QLabel *fitrst;
    QLabel *secon;
    QLabel *username;
    QLabel *phone;
    QLabel *nofapp;
    QPushButton *view_1;
    QPushButton *view_2;
    QPushButton *view_3;
    QPushButton *view_4;
    QPushButton *add_2;
    QPushButton *add_3;
    QPushButton *edit;
    QPushButton *edit_2;
    QPushButton *edit_3;
    QPushButton *edit_4;
    QLabel *returnusername;
    QLabel *label_2;
    QPushButton *back;
    QPushButton *back_2;

    void setupUi(QDialog *userPage)
    {
        if (userPage->objectName().isEmpty())
            userPage->setObjectName("userPage");
        userPage->resize(1001, 667);
        userPage->setBaseSize(QSize(998, 619));
        label = new QLabel(userPage);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1001, 667));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/profile.jpg")));
        fitrst = new QLabel(userPage);
        fitrst->setObjectName("fitrst");
        fitrst->setGeometry(QRect(160, 160, 91, 31));
        fitrst->setFont(font);
        secon = new QLabel(userPage);
        secon->setObjectName("secon");
        secon->setGeometry(QRect(160, 210, 91, 31));
        secon->setFont(font);
        username = new QLabel(userPage);
        username->setObjectName("username");
        username->setGeometry(QRect(170, 260, 91, 31));
        username->setFont(font);
        phone = new QLabel(userPage);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(200, 310, 141, 31));
        phone->setFont(font);
        nofapp = new QLabel(userPage);
        nofapp->setObjectName("nofapp");
        nofapp->setGeometry(QRect(310, 350, 91, 31));
        nofapp->setFont(font);
        view_1 = new QPushButton(userPage);
        view_1->setObjectName("view_1");
        view_1->setGeometry(QRect(100, 610, 61, 41));
        view_1->setSizeIncrement(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(15);
        font1.setWeight(QFont::ExtraLight);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        view_1->setFont(font1);
        view_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 20px;\n"
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
" }\n"
""));
        view_1->setAutoDefault(true);
        view_1->setFlat(false);
        view_2 = new QPushButton(userPage);
        view_2->setObjectName("view_2");
        view_2->setGeometry(QRect(340, 610, 61, 41));
        view_2->setSizeIncrement(QSize(0, 0));
        view_2->setFont(font1);
        view_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 20px;\n"
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
" }\n"
""));
        view_2->setAutoDefault(true);
        view_2->setFlat(false);
        view_3 = new QPushButton(userPage);
        view_3->setObjectName("view_3");
        view_3->setGeometry(QRect(590, 610, 61, 41));
        view_3->setSizeIncrement(QSize(0, 0));
        view_3->setFont(font1);
        view_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 20px;\n"
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
" }\n"
""));
        view_3->setAutoDefault(true);
        view_3->setFlat(false);
        view_4 = new QPushButton(userPage);
        view_4->setObjectName("view_4");
        view_4->setGeometry(QRect(830, 610, 61, 41));
        view_4->setSizeIncrement(QSize(0, 0));
        view_4->setFont(font1);
        view_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 20px;\n"
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
" }\n"
""));
        view_4->setAutoDefault(true);
        view_4->setFlat(false);
        add_2 = new QPushButton(userPage);
        add_2->setObjectName("add_2");
        add_2->setGeometry(QRect(730, 230, 171, 161));
        add_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                 \n"
"     background-color: transparent;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" border-radius: 20px;\n"
"background-color : gray;\n"
" icon-size: 16px,16px;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_2->setIcon(icon);
        add_2->setIconSize(QSize(120, 120));
        add_3 = new QPushButton(userPage);
        add_3->setObjectName("add_3");
        add_3->setGeometry(QRect(560, 10, 71, 61));
        add_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                 \n"
"     background-color: transparent;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" border-radius: 20px;\n"
"background-color : gray;\n"
" icon-size: 16px,16px;\n"
"\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/office_6619424.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_3->setIcon(icon1);
        add_3->setIconSize(QSize(50, 50));
        edit = new QPushButton(userPage);
        edit->setObjectName("edit");
        edit->setGeometry(QRect(170, 470, 41, 61));
        edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                 \n"
"     background-color: transparent;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" border-radius: 20px;\n"
"background-color : gray;\n"
" icon-size: 16px,16px;\n"
"\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/more.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setIcon(icon2);
        edit->setIconSize(QSize(50, 50));
        edit_2 = new QPushButton(userPage);
        edit_2->setObjectName("edit_2");
        edit_2->setGeometry(QRect(420, 470, 41, 61));
        edit_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                 \n"
"     background-color: transparent;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" border-radius: 20px;\n"
"background-color : gray;\n"
" icon-size: 16px,16px;\n"
"\n"
"}\n"
""));
        edit_2->setIcon(icon2);
        edit_2->setIconSize(QSize(50, 50));
        edit_3 = new QPushButton(userPage);
        edit_3->setObjectName("edit_3");
        edit_3->setGeometry(QRect(660, 470, 41, 61));
        edit_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                 \n"
"     background-color: transparent;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" border-radius: 20px;\n"
"background-color : gray;\n"
" icon-size: 16px,16px;\n"
"\n"
"}\n"
""));
        edit_3->setIcon(icon2);
        edit_3->setIconSize(QSize(50, 50));
        edit_4 = new QPushButton(userPage);
        edit_4->setObjectName("edit_4");
        edit_4->setGeometry(QRect(900, 470, 41, 61));
        edit_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                 \n"
"     background-color: transparent;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
" border-radius: 20px;\n"
"background-color : gray;\n"
" icon-size: 16px,16px;\n"
"\n"
"}\n"
""));
        edit_4->setIcon(icon2);
        edit_4->setIconSize(QSize(50, 50));
        returnusername = new QLabel(userPage);
        returnusername->setObjectName("returnusername");
        returnusername->setGeometry(QRect(410, 20, 171, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        returnusername->setFont(font2);
        label_2 = new QLabel(userPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 30, 81, 31));
        QFont font3;
        font3.setPointSize(25);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:(255, 255, 255);"));
        back = new QPushButton(userPage);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 101, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Black")});
        font4.setPointSize(17);
        font4.setBold(true);
        back->setFont(font4);
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 20px;\n"
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
        back_2 = new QPushButton(userPage);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(110, 400, 101, 41));
        back_2->setFont(font4);
        back_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                       color:white;\n"
"     background-color: transparent;\n"
"                       }\n"
"                         QPushButton:hover {\n"
"                             background-color: gray;\n"
"                     		 border-radius: 20px;\n"
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

        retranslateUi(userPage);

        view_1->setDefault(true);
        view_2->setDefault(true);
        view_3->setDefault(true);
        view_4->setDefault(true);


        QMetaObject::connectSlotsByName(userPage);
    } // setupUi

    void retranslateUi(QDialog *userPage)
    {
        userPage->setWindowTitle(QCoreApplication::translate("userPage", "Dialog", nullptr));
        label->setText(QString());
        fitrst->setText(QString());
        secon->setText(QString());
        username->setText(QString());
        phone->setText(QString());
        nofapp->setText(QString());
        view_1->setText(QCoreApplication::translate("userPage", "View", nullptr));
        view_2->setText(QCoreApplication::translate("userPage", "View", nullptr));
        view_3->setText(QCoreApplication::translate("userPage", "View", nullptr));
        view_4->setText(QCoreApplication::translate("userPage", "View", nullptr));
        add_2->setText(QString());
        add_3->setText(QString());
        edit->setText(QString());
        edit_2->setText(QString());
        edit_3->setText(QString());
        edit_4->setText(QString());
        returnusername->setText(QCoreApplication::translate("userPage", "asdasdasda", nullptr));
        label_2->setText(QCoreApplication::translate("userPage", "Hello", nullptr));
        back->setText(QCoreApplication::translate("userPage", ">Back", nullptr));
        back_2->setText(QCoreApplication::translate("userPage", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userPage: public Ui_userPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
