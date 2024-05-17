/********************************************************************************
** Form generated from reading UI file 'adpartment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADPARTMENT_H
#define UI_ADPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adpartment
{
public:
    QLabel *label;
    QPushButton *back;
    QLabel *name;
    QLabel *price;
    QLabel *location;
    QLabel *area;
    QLabel *numBed;
    QLabel *numBathrooms;
    QLabel *descrip;
    QLabel *image;

    void setupUi(QDialog *adpartment)
    {
        if (adpartment->objectName().isEmpty())
            adpartment->setObjectName("adpartment");
        adpartment->resize(997, 657);
        label = new QLabel(adpartment);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 997, 657));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Photos/C:/Users/UsifE/Pictures/Screenshots/Images For GUI/adpartment 2.jpg")));
        back = new QPushButton(adpartment);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 10, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(17);
        font.setBold(true);
        back->setFont(font);
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
        name = new QLabel(adpartment);
        name->setObjectName("name");
        name->setGeometry(QRect(230, 140, 151, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(15);
        font1.setBold(true);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        price = new QLabel(adpartment);
        price->setObjectName("price");
        price->setGeometry(QRect(230, 180, 141, 31));
        price->setFont(font1);
        price->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        location = new QLabel(adpartment);
        location->setObjectName("location");
        location->setGeometry(QRect(230, 240, 211, 20));
        location->setFont(font1);
        location->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        area = new QLabel(adpartment);
        area->setObjectName("area");
        area->setGeometry(QRect(640, 140, 91, 20));
        area->setFont(font1);
        area->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        numBed = new QLabel(adpartment);
        numBed->setObjectName("numBed");
        numBed->setGeometry(QRect(670, 180, 71, 21));
        numBed->setFont(font1);
        numBed->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        numBathrooms = new QLabel(adpartment);
        numBathrooms->setObjectName("numBathrooms");
        numBathrooms->setGeometry(QRect(680, 240, 71, 21));
        numBathrooms->setFont(font1);
        numBathrooms->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        descrip = new QLabel(adpartment);
        descrip->setObjectName("descrip");
        descrip->setGeometry(QRect(130, 430, 581, 71));
        descrip->setFont(font1);
        descrip->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QLabel\" name=\"name_2\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>300</x>\n"
"     <y>210</y>\n"
"     <width>63</width>\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <family>Segoe UI Black</family>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>TextLabel</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        image = new QLabel(adpartment);
        image->setObjectName("image");
        image->setGeometry(QRect(802, 99, 161, 161));

        retranslateUi(adpartment);

        QMetaObject::connectSlotsByName(adpartment);
    } // setupUi

    void retranslateUi(QDialog *adpartment)
    {
        adpartment->setWindowTitle(QCoreApplication::translate("adpartment", "Dialog", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("adpartment", ">Back", nullptr));
        name->setText(QString());
        price->setText(QString());
        location->setText(QString());
        area->setText(QString());
        numBed->setText(QString());
        numBathrooms->setText(QString());
        descrip->setText(QString());
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adpartment: public Ui_adpartment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADPARTMENT_H
