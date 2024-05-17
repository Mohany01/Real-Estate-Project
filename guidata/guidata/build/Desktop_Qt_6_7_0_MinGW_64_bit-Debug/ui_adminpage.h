/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminpage
{
public:
    QLabel *lab;
    QPushButton *view_3;
    QPushButton *back;
    QPushButton *edit_2;
    QPushButton *add;
    QLabel *label;
    QPushButton *add_2;
    QLabel *label_2;

    void setupUi(QDialog *adminpage)
    {
        if (adminpage->objectName().isEmpty())
            adminpage->setObjectName("adminpage");
        adminpage->resize(997, 659);
        lab = new QLabel(adminpage);
        lab->setObjectName("lab");
        lab->setGeometry(QRect(0, -30, 998, 711));
        lab->setMinimumSize(QSize(998, 711));
        lab->setLayoutDirection(Qt::LeftToRight);
        lab->setAutoFillBackground(false);
        lab->setPixmap(QPixmap(QString::fromUtf8("C:/Users/UsifE/Pictures/Screenshots/Images For GUI/admin.jpg")));
        view_3 = new QPushButton(adminpage);
        view_3->setObjectName("view_3");
        view_3->setGeometry(QRect(880, 540, 61, 41));
        view_3->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(15);
        font.setWeight(QFont::ExtraLight);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        view_3->setFont(font);
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
" }"));
        view_3->setAutoDefault(true);
        view_3->setFlat(false);
        back = new QPushButton(adminpage);
        back->setObjectName("back");
        back->setGeometry(QRect(30, 20, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(17);
        font1.setBold(true);
        back->setFont(font1);
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
        edit_2 = new QPushButton(adminpage);
        edit_2->setObjectName("edit_2");
        edit_2->setGeometry(QRect(820, 520, 41, 61));
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
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../project/more.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_2->setIcon(icon);
        edit_2->setIconSize(QSize(50, 50));
        add = new QPushButton(adminpage);
        add->setObjectName("add");
        add->setGeometry(QRect(220, 240, 141, 131));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon1.addFile(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon1);
        add->setIconSize(QSize(90, 90));
        label = new QLabel(adminpage);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 380, 131, 41));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color:(255, 255, 255);"));
        add_2 = new QPushButton(adminpage);
        add_2->setObjectName("add_2");
        add_2->setGeometry(QRect(710, 240, 141, 131));
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/office_6619424.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_2->setIcon(icon2);
        add_2->setIconSize(QSize(90, 90));
        label_2 = new QLabel(adminpage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(690, 380, 191, 41));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:(255, 255, 255);"));

        retranslateUi(adminpage);

        view_3->setDefault(true);


        QMetaObject::connectSlotsByName(adminpage);
    } // setupUi

    void retranslateUi(QDialog *adminpage)
    {
        adminpage->setWindowTitle(QCoreApplication::translate("adminpage", "Real Estae", nullptr));
        lab->setText(QString());
        view_3->setText(QCoreApplication::translate("adminpage", "View", nullptr));
        back->setText(QCoreApplication::translate("adminpage", ">Back", nullptr));
        edit_2->setText(QString());
        add->setText(QString());
        label->setText(QCoreApplication::translate("adminpage", "users", nullptr));
        add_2->setText(QString());
        label_2->setText(QCoreApplication::translate("adminpage", "Apartments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpage: public Ui_adminpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
