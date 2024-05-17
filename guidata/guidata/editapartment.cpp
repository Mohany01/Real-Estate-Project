#include "editapartment.h"
#include "adpartment.h"
#include "allapartments.h"
#include "login.h"
#include "qevent.h"
#include "qmessagebox.h"
#include "ui_editapartment.h"
#include "propertylist.h"
#include "userslist.h"
#include "QIntValidator"
editApartment::editApartment(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editApartment)
{
    ui->setupUi(this);
    QIntValidator *priceValidator = new QIntValidator(100000, 9999999, this);
    QIntValidator *areaValidator = new QIntValidator(65,300, this);
    QIntValidator *bedValidator = new QIntValidator(1, 8, this);
    QIntValidator *bathValidator = new QIntValidator(1, 4, this);
    // Set the validator for the price line edit
    ui->price->setValidator(priceValidator);
    ui->area->setValidator(areaValidator);
    ui->numofbath->setValidator(bathValidator);
    ui->numofbed->setValidator(bedValidator);
}

editApartment::~editApartment()
{
    delete ui;
}

void editApartment::on_back_clicked()
{
    if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())) {
        hide();
        allapartments = new class allApartments(this);
        allapartments->show();
    }
    else {
        hide();
        userpage=new class userPage(this);
        userpage->show();

    }

}


void editApartment::on_submit_clicked()
{
    if(ui->type->text().isEmpty() && ui->price->text().isEmpty() && ui->numofbath->text().isEmpty() && ui->numofbed->text().isEmpty()&& ui->location->text().isEmpty() && ui->area->text().isEmpty() && ui->desc->text().isEmpty() && ui->name->text().isEmpty()){
        QMessageBox::critical(this,"Edit Faild","No data to edit",QMessageBox::Ok);
    }
    else {
        if(!ui->name->text().isEmpty()){
            if(propertylist::IsPropertyNameFound(ui->name->text().toStdString()) ){
                QMessageBox::critical(this,"Wrong name"," Please enter different name ",QMessageBox::Ok);
                return;

            }
        }
        if(!ui->price->text().isEmpty()){
            if(ui->price->text().toInt() > 9000000 || ui->price->text().toInt() < 100000 )
            {
                QMessageBox::critical(this,"Wrong Price"," price should be between 100k and 9 Milions ",QMessageBox::Ok);
                return;

            }
        }
            if(!ui->area->text().isEmpty()){
            if(ui->area->text().toInt() < 50 || ui->area->text().toInt() > 500 )
            {
                QMessageBox::critical(this,"Wrong Area"," area should be between 50 and 500 ",QMessageBox::Ok);
                return;

            }
            }
            if(!ui->numofbed->text().isEmpty()){
            if(ui->numofbed->text().toInt() < 1 || ui->numofbed->text().toInt() > 8 )
            {
                QMessageBox::critical(this,"Wrong Number of Bedrooms"," Number of Bedrooms should be between 1 and 8 ",QMessageBox::Ok);
                return;

            }
            }
            if(!ui->numofbath->text().isEmpty()){
            if(ui->numofbath->text().toInt() < 1 || ui->numofbath->text().toInt() > 4)
            {
                QMessageBox::critical(this,"Wrong Number"," Number of bathrooms should be between 1 and 4 ",QMessageBox::Ok);
                return;

            }
            }


            if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())) {
                propertylist::EditProperty(adpartment::ReturnApartName(),ui->name->text().toStdString(),ui->type->text().toStdString(),ui->area->text().toInt(),ui->numofbed->text().toInt(),ui->numofbath->text().toInt(),ui->price->text().toInt(),ui->desc->text().toStdString(),ui->location->text().toStdString());
                hide();
                allapartments = new class allApartments(this);
                allapartments->show();

            }
            else {
                propertylist::EditProperty(userPage::ReturnNameOfApart(),ui->name->text().toStdString(),ui->type->text().toStdString(),ui->area->text().toInt(),ui->numofbed->text().toInt(),ui->numofbath->text().toInt(),ui->price->text().toInt(),ui->desc->text().toStdString(),ui->location->text().toStdString());
                hide();
                userpage=new class userPage(this);
                userpage->show();

            }

        }


}

void editApartment::closeEvent(QCloseEvent *event)
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
