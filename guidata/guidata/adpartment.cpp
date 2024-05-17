#include "adpartment.h"
#include "allapartments.h"
#include "editapartment.h"
#include "login.h"
#include "propertylist.h"
#include "qevent.h"
#include "qmessagebox.h"
#include "ui_adpartment.h"
#include "adminpage.h"
#include "userpage.h"
#include "userslist.h"
using namespace std;
string Apartname="";

adpartment::adpartment(const string& apartmentName, int price, const string& location, const string& username, const string& description, const string& type, int numBathrooms, int numBed, double area, QWidget *parent)

    : QDialog(parent)
    , ui(new Ui::adpartment)
{
    ui->setupUi(this);
    if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())){
        ui->delete_2->setVisible(true);
        ui->edit->setVisible(true);
        ui->name->setText(QString::fromStdString(apartmentName));
        ui->price->setText(QString::number(price)+"$");
        ui->location->setText(QString::fromStdString(location));
        ui->username->setText(QString::fromStdString(username));
        ui->descrip->setText(QString::fromStdString(description));
        ui->type->setText(QString::fromStdString(type));
        ui->numBathrooms->setText(QString::number(numBathrooms));
        ui->numBed->setText(QString::number(numBed));
        ui->area->setText(QString::number(area)+"㎡");
    }
    else {
        ui->delete_2->setVisible(false);
        ui->edit->setVisible(false);
        ui->name->setText(QString::fromStdString(apartmentName));
        ui->price->setText(QString::number(price)+"$");
        ui->location->setText(QString::fromStdString(location));
        ui->username->setText(QString::fromStdString(username));
        ui->descrip->setText(QString::fromStdString(description));
        ui->type->setText(QString::fromStdString(type));
        ui->numBathrooms->setText(QString::number(numBathrooms));
        ui->numBed->setText(QString::number(numBed));
        ui->area->setText(QString::number(area)+"㎡");
    }



}
adpartment::adpartment(QWidget *parent)
    : QDialog(parent) // Initialize base class QWidget with parent
{
}string adpartment::ReturnApartName(){
    return Apartname;
}
adpartment::~adpartment()
{
    delete ui;

}

void adpartment::on_back_clicked()
{


    hide();
    allaprtments=new class allApartments(this);
    allaprtments->show();

}

void adpartment::closeEvent(QCloseEvent *event)
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
void adpartment::on_delete_2_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete apartment", tr("Are you sure to delete this apartment?"),
                                                                QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
        if (resBtn == QMessageBox::Yes) {
        propertylist::DeleteProperty(ui->name->text().toStdString());
        if(!UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())){
            hide();
        userpage=new class userPage(this);
        userpage->show();
        }
        else{
            hide();
            allaprtments=new class allApartments(this);
            allaprtments->show();
        }

    }
        else {


        }

}




void adpartment::on_add_2_clicked()
{

    if(!UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else
    {
        hide();
        adminpage=new class adminpage(this);
        adminpage->show();
    }
}


void adpartment::on_edit_clicked()
{
    Apartname=ui->name->text().toStdString();
    hide();
    editApart=new class editApartment(this);
    editApart->show();
}



\


