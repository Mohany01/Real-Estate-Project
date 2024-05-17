#include "userpage.h"
#include "allapartments.h"
#include "editapartment.h"
#include "edituser.h"
#include "qevent.h"
#include "qpropertyanimation.h"
#include "ui_userpage.h"
#include "information.h"
#include "login.h"
#include "userslist.h"
#include <QString>
#include "QMessageBox"
#include "login.h"
#include "propertylist.h"
#include"adpartment.h"
using namespace std;
string name="";
string username="";
userPage::userPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userPage)

{
    ui->setupUi(this);
    if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())) {
        ui->returnusername->setText(MainWindow::ReturnUserName()+" ,");
        ui->username->setText(QString::fromStdString(users::ReturnUserName()));
        ui->fitrst->setText(QString::fromStdString(UsersList::ReturnFirstName(users::ReturnUserName())));
        ui->secon->setText(QString::fromStdString(UsersList::ReturnLastName(users::ReturnUserName())));
        ui->phone->setText(QString::fromStdString(UsersList::ReturnPhoneNumber(users::ReturnUserName())));
        ui->nofapp->setText(QString::fromStdString(to_string(propertylist::NumberOfPropertiesForUser(users::ReturnUserName()))));
        ui->back->setText(">Back");
        ui->back->setIcon(QIcon());
        ui->back->setFixedSize(101, 41);
        QString styleSheet = "QPushButton {"
                             "    color: white;"
                             "    background-color: transparent;"
                             "}"
                             "QPushButton:hover {"
                             "    background-color: gray;"
                             "    border-radius: 20px;"
                             "}"
                             "QPushButton:pressed {"
                             "    background-color: rgb(51, 149, 255);"
                             "}";
        ui->back->setStyleSheet(styleSheet);
        ui->edit1->setVisible(false);
        ui->edi2->setVisible(false);
        ui->edit3->setVisible(false);
        ui->edit4->setVisible(false);

        ShowApartments();

    }
    else{
    //qDebug()<<mainwindow.ReturnUserName()<<"\n";
    ui->returnusername->setText(MainWindow::ReturnUserName()+" ,");
    ui->username->setText(QString::fromStdString(MainWindow::ReturnUserName().toStdString()));
    ui->fitrst->setText(QString::fromStdString(UsersList::ReturnFirstName(MainWindow::ReturnUserName().toStdString())));
    ui->secon->setText(QString::fromStdString(UsersList::ReturnLastName(MainWindow::ReturnUserName().toStdString())));
    ui->phone->setText(QString::fromStdString(UsersList::ReturnPhoneNumber(MainWindow::ReturnUserName().toStdString())));
    ui->nofapp->setText(QString::fromStdString(to_string(propertylist::NumberOfPropertiesForUser(MainWindow::ReturnUserName().toStdString()))));
    ShowApartments();

    }
}
string userPage::ReturnNameOfApart()
{
    return name;
}
void userPage::ShowApartments()
{
    int labelIndex = 1;


    for (const auto& pair : propertylist::properties) {
        const string& username = pair.second;
        const class property& userProperty = pair.first;

        // Assuming propertylist::properties is an unordered_map<string, property>
        QString labelprice = QString::number(userProperty.getPrice());
        QString labelname = QString::fromStdString(userProperty.getName());

        QString labelpric = "prop" + QString::number(labelIndex);
        QString labelnam = "name" + QString::number(labelIndex);

        QLabel* labelp = findChild<QLabel*>(labelpric);
        QLabel* labeln = findChild<QLabel*>(labelnam);

        if (labelp && username==ui->username->text().toStdString()&&labeln) {
            labelp->setText(labelprice+" $");
            labeln->setText(labelname);
            // if (labeln->fontMetrics().boundingRect(labeln->text()).width() > labeln->width()) {
            //     animateText(labeln);
            // }

            labelIndex++;

        } else {
           // qDebug() << "Label" << labelName << "not found!";
        }
    }

}

void userPage::refreshApart()
{
    for (int i = 1; i <= 4; ++i) {
        QString labelprice = "prop" + QString::number(i);
        QString labelname = "name" + QString::number(i);

        QLabel* labelp = findChild<QLabel*>(labelprice);
        QLabel* labelnam = findChild<QLabel*>(labelname);

        if (labelp && labelnam) {
            labelp->clear();
            labelnam->clear();

        }
    }

}
void userPage::closeEvent(QCloseEvent *event)

{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Confirmation", tr("Are you sure you want to exit?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {

        event->ignore();
    } else {

        UsersList::SaveUsers("helal.txt");
        propertylist::saveUserProperties("user_properties.txt");
        event->accept();
    }
}



userPage::~userPage()
{
    delete ui;
}
string userPage::ReturnUserName()
{
    return username;
}



void userPage::on_back_clicked()
{

    if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString()))
    {

        hide();
        users = new class users(this);
        users->show();
        users->ShowUsers();
    }
    else {

        hide();
        mainwindow = new class MainWindow(this);
        mainwindow->show();
    }

}


void userPage::on_edit_5_clicked()
{
    username=ui->username->text().toStdString();
    hide();
    edituser = new editUser(this);
    edituser ->show ();
}


void userPage::on_add_2_clicked()
{
    if(!UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())){
    hide();
    info = new information(this);
    info ->show ();
    }
}

void userPage::on_viewApartments_clicked()
{
    hide();
    allapartments = new allApartments(this);
    allapartments ->show ();
}


void userPage::on_view_1_clicked()
{
    name=ui->name1->text().toStdString();

    if(!ui->name1->text().isEmpty()){
        string apartmentName = ReturnNameOfApart();
        int price = propertylist::ReturnPropertyPrice(apartmentName);
        string location = propertylist::ReturnPropertylocation(apartmentName);
        string username = propertylist::ReturnOwner(apartmentName);
        string description = propertylist::ReturnPropertyDescription(apartmentName);
        string type = propertylist::ReturnPropertytype(apartmentName);
        int numBathrooms = propertylist::ReturnPropertyBathroomsNumber(apartmentName);
        int numBed = propertylist::ReturnPropertyBedroomsNumber(apartmentName);
        double area = propertylist::ReturnPropertyArea(apartmentName);
        hide();
        adpartment=new class adpartment(apartmentName, price, location, username, description, type, numBathrooms, numBed, area, this);
        adpartment->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO SHOW",QMessageBox::Ok);
    }
}


void userPage::on_view_2_clicked()
{
    name=ui->name2->text().toStdString();

    if(!ui->name2->text().isEmpty()){
        string apartmentName = ReturnNameOfApart();
        int price = propertylist::ReturnPropertyPrice(apartmentName);
        string location = propertylist::ReturnPropertylocation(apartmentName);
        string username = propertylist::ReturnOwner(apartmentName);
        string description = propertylist::ReturnPropertyDescription(apartmentName);
        string type = propertylist::ReturnPropertytype(apartmentName);
        int numBathrooms = propertylist::ReturnPropertyBathroomsNumber(apartmentName);
        int numBed = propertylist::ReturnPropertyBedroomsNumber(apartmentName);
        double area = propertylist::ReturnPropertyArea(apartmentName);
        hide();
        adpartment=new class adpartment(apartmentName, price, location, username, description, type, numBathrooms, numBed, area, this);
        adpartment->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO SHOW",QMessageBox::Ok);
    }
}


void userPage::on_view_3_clicked()
{
    name=ui->name3->text().toStdString();

    if(!ui->name3->text().isEmpty()){
        string apartmentName = ReturnNameOfApart();
        int price = propertylist::ReturnPropertyPrice(apartmentName);
        string location = propertylist::ReturnPropertylocation(apartmentName);
        string username = propertylist::ReturnOwner(apartmentName);
        string description = propertylist::ReturnPropertyDescription(apartmentName);
        string type = propertylist::ReturnPropertytype(apartmentName);
        int numBathrooms = propertylist::ReturnPropertyBathroomsNumber(apartmentName);
        int numBed = propertylist::ReturnPropertyBedroomsNumber(apartmentName);
        double area = propertylist::ReturnPropertyArea(apartmentName);
        hide();
        adpartment=new class adpartment(apartmentName, price, location, username, description, type, numBathrooms, numBed, area, this);
        adpartment->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO SHOW",QMessageBox::Ok);
    }
}


void userPage::on_view_4_clicked()
{
    name=ui->name4->text().toStdString();

    if(!ui->name4->text().isEmpty()){
        string apartmentName = ReturnNameOfApart();
        int price = propertylist::ReturnPropertyPrice(apartmentName);
        string location = propertylist::ReturnPropertylocation(apartmentName);
        string username = propertylist::ReturnOwner(apartmentName);
        string description = propertylist::ReturnPropertyDescription(apartmentName);
        string type = propertylist::ReturnPropertytype(apartmentName);
        int numBathrooms = propertylist::ReturnPropertyBathroomsNumber(apartmentName);
        int numBed = propertylist::ReturnPropertyBedroomsNumber(apartmentName);
        double area = propertylist::ReturnPropertyArea(apartmentName);
        hide();
        adpartment=new class adpartment(apartmentName, price, location, username, description, type, numBathrooms, numBed, area, this);
        adpartment->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO SHOW",QMessageBox::Ok);
    }
}




void userPage::on_del2_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete apartment", tr("Are you sure to delete this apartment?"),
                                                               QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if(!ui->name2->text().isEmpty()){
        if (resBtn == QMessageBox::Yes) {
            propertylist::DeleteProperty(ui->name2->text().toStdString());
            refreshApart();
            ShowApartments();
            ui->nofapp->setText(QString::fromStdString(to_string(propertylist::NumberOfPropertiesForUser(ui->username->text().toStdString()))));


        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO Delete",QMessageBox::Ok);
    }
}


void userPage::on_del3_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete apartment", tr("Are you sure to delete this apartment?"),
                                                               QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if(!ui->name3->text().isEmpty()){
        if (resBtn == QMessageBox::Yes) {
            propertylist::DeleteProperty(ui->name3->text().toStdString());
            refreshApart();
            ShowApartments();
            ui->nofapp->setText(QString::fromStdString(to_string(propertylist::NumberOfPropertiesForUser(ui->username->text().toStdString()))));


        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO Delete",QMessageBox::Ok);
    }
}


void userPage::on_del4_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete apartment", tr("Are you sure to delete this apartment?"),
                                                               QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if(!ui->name4->text().isEmpty()){
        if (resBtn == QMessageBox::Yes) {
            propertylist::DeleteProperty(ui->name4->text().toStdString());
            refreshApart();
            ShowApartments();
            ui->nofapp->setText(QString::fromStdString(to_string(propertylist::NumberOfPropertiesForUser(ui->username->text().toStdString()))));


        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO Delete",QMessageBox::Ok);
    }
}


void userPage::on_edit1_clicked()
{
    name=ui->name1->text().toStdString();
    if(!ui->name1->text().isEmpty()){
        hide();
        editapartment=new class editApartment(this);
        editapartment->show();

        } else {
            QMessageBox::critical(this,"ERROR","NO Apartment TO Edit",QMessageBox::Ok);

        }

}


void userPage::on_edi2_clicked()
{    name=ui->name2->text().toStdString();

    if(!ui->name2->text().isEmpty()){
        hide();
        editapartment=new class editApartment(this);
        editapartment->show();

    } else {
        QMessageBox::critical(this,"ERROR","NO Apartment TO Edit",QMessageBox::Ok);

    }

}


void userPage::on_del2_2_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete apartment", tr("Are you sure to delete this apartment?"),
                                                               QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if(!ui->name1->text().isEmpty()){
        if (resBtn == QMessageBox::Yes) {
            propertylist::DeleteProperty(ui->name1->text().toStdString());
            refreshApart();
            ShowApartments();
            ui->nofapp->setText(QString::fromStdString(to_string(propertylist::NumberOfPropertiesForUser(ui->username->text().toStdString()))));


        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO apartment TO Delete",QMessageBox::Ok);
    }
}


void userPage::on_edit3_clicked()
{    name=ui->name3->text().toStdString();

    if(!ui->name3->text().isEmpty()){
        hide();
        editapartment=new class editApartment(this);
        editapartment->show();

    } else {
        QMessageBox::critical(this,"ERROR","NO Apartment TO Edit",QMessageBox::Ok);

    }

}


void userPage::on_edit4_clicked()
{
    name=ui->name4->text().toStdString();

    if(!ui->name4->text().isEmpty()){
        hide();
        editapartment=new class editApartment(this);
        editapartment->show();

    } else {
        QMessageBox::critical(this,"ERROR","NO Apartment TO Edit",QMessageBox::Ok);

    }


}
