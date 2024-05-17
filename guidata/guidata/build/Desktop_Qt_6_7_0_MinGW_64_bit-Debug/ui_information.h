/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QLabel *label;
    QLineEdit *price;
    QLineEdit *location;
    QLineEdit *area;
    QLineEdit *bedrooms;
    QLineEdit *bath;
    QLineEdit *descrip;
    QLineEdit *name;
    QPushButton *add;
    QPushButton *submit;
    QPushButton *back;

    void setupUi(QDialog *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName("information");
        information->resize(997, 659);
        label = new QLabel(information);
        label->setObjectName("label");
        label->setGeometry(QRect(-1, -12, 1061, 691));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/information.jpg")));
        price = new QLineEdit(information);
        price->setObjectName("price");
        price->setGeometry(QRect(170, 325, 171, 41));
        QFont font;
        font.setPointSize(14);
        price->setFont(font);
        price->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        location = new QLineEdit(information);
        location->setObjectName("location");
        location->setGeometry(QRect(170, 418, 171, 41));
        location->setFont(font);
        location->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        area = new QLineEdit(information);
        area->setObjectName("area");
        area->setGeometry(QRect(710, 225, 171, 41));
        area->setFont(font);
        area->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        bedrooms = new QLineEdit(information);
        bedrooms->setObjectName("bedrooms");
        bedrooms->setGeometry(QRect(710, 325, 171, 41));
        bedrooms->setFont(font);
        bedrooms->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        bath = new QLineEdit(information);
        bath->setObjectName("bath");
        bath->setGeometry(QRect(710, 415, 171, 41));
        bath->setFont(font);
        bath->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        descrip = new QLineEdit(information);
        descrip->setObjectName("descrip");
        descrip->setGeometry(QRect(300, 570, 371, 31));
        descrip->setFont(font);
        descrip->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        name = new QLineEdit(information);
        name->setObjectName("name");
        name->setGeometry(QRect(170, 225, 171, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8(" QLineEdit{\n"
"background-color:transparent;\n"
"border:none;\n"
"\n"
"\n"
"\n"
"}"));
        add = new QPushButton(information);
        add->setObjectName("add");
        add->setGeometry(QRect(440, 150, 111, 111));
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
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../project/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon);
        add->setIconSize(QSize(90, 90));
        submit = new QPushButton(information);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(770, 570, 93, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(14);
        font2.setBold(true);
        submit->setFont(font2);
        submit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        back = new QPushButton(information);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 20, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Black")});
        font3.setPointSize(17);
        font3.setBold(true);
        back->setFont(font3);
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

        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QDialog *information)
    {
        information->setWindowTitle(QCoreApplication::translate("information", "Real Estae", nullptr));
        label->setText(QString());
        price->setPlaceholderText(QCoreApplication::translate("information", "price", nullptr));
        location->setPlaceholderText(QCoreApplication::translate("information", "location", nullptr));
        area->setPlaceholderText(QCoreApplication::translate("information", "area", nullptr));
        bedrooms->setPlaceholderText(QCoreApplication::translate("information", "number", nullptr));
        bath->setPlaceholderText(QCoreApplication::translate("information", "number", nullptr));
        descrip->setPlaceholderText(QCoreApplication::translate("information", "description", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("information", "name", nullptr));
        add->setText(QString());
        submit->setText(QCoreApplication::translate("information", "Submit", nullptr));
        back->setText(QCoreApplication::translate("information", ">Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
