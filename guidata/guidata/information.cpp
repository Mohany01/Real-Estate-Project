#include "information.h"
#include "qevent.h"
#include "qmessagebox.h"
#include "ui_information.h"
#include "adminpage.h"
#include "QIntValidator"
#include "login.h"
#include "userpage.h"
#include "userslist.h"
#include "login.h"
#include "propertylist.h"
information::information(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::information)
{
    ui->setupUi(this);
    string username;
   // Create a QIntValidator instance
    QIntValidator *priceValidator = new QIntValidator(100000, 9999999, this);
    QIntValidator *areaValidator = new QIntValidator(65,300, this);
    QIntValidator *bedValidator = new QIntValidator(1, 8, this);
    QIntValidator *bathValidator = new QIntValidator(1, 4, this);
    // Set the validator for the price line edit
    ui->price->setValidator(priceValidator);
    ui->area->setValidator(areaValidator);
    ui->bath->setValidator(bathValidator);
    ui->bedrooms->setValidator(bedValidator);
}

information::~information()
{
    delete ui;
}

void information::on_back_clicked()
{
    string username = MainWindow::ReturnUserName().toStdString();

    if(UsersList::isAdmin(username)) {
    hide();
    adminpage = new class adminpage(this);
    adminpage->show();
    }
    else {
        hide();
        userpage=new class userPage(this);
        userpage->show();

    }
}


// void information::on_add_clicked()
// {

// }

void information::on_submit_clicked()
{
    if(ui->type->text().isEmpty() || ui->name->text().isEmpty()  || ui->area->text().isEmpty() || ui->price->text().isEmpty()  || ui->bedrooms->text().isEmpty() || ui->bath->text().isEmpty() || ui->location->text().isEmpty()|| ui->descrip->text().isEmpty())
    {
             QMessageBox::critical(this,"Fail Login","Missing data",QMessageBox::Ok);
        return;
    }
    else
    {
        if(propertylist::IsPropertyNameFound(ui->name->text().toStdString()) ){
            QMessageBox::critical(this,"Wrong name"," Please enter different name ",QMessageBox::Ok);
            return;

        }
        if(ui->price->text().toInt() > 9000000 || ui->price->text().toInt() < 100000 )
        {
            QMessageBox::critical(this,"Wrong Price"," price should be between 100k and 9 Milions ",QMessageBox::Ok);
            return;

        }
        if(ui->area->text().toInt() < 50 || ui->area->text().toInt() > 500 )
        {
            QMessageBox::critical(this,"Wrong Area"," area should be between 50 and 500 ",QMessageBox::Ok);
            return;

        }
        if(ui->bedrooms->text().toInt() < 1 || ui->bedrooms->text().toInt() > 8 )
        {
            QMessageBox::critical(this,"Wrong Number of Bedrooms"," Number of Bedrooms should be between 1 and 8 ",QMessageBox::Ok);
            return;

        }
        if(ui->bath->text().toInt() < 1 || ui->bath->text().toInt() > 4)
        {
            QMessageBox::critical(this,"Wrong Number"," Number of bathrooms should be between 1 and 4 ",QMessageBox::Ok);
            return;

        }

        propertylist::InsertUserProperty(ui->name->text().toStdString(),ui->type->text().toStdString(),ui->area->text().toInt(),ui->bedrooms->text().toInt(),ui->bath->text().toInt(),ui->price->text().toInt(),ui->descrip->text().toStdString(),ui->location->text().toStdString(),MainWindow::ReturnUserName().toStdString());
        if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())) {
            hide();
            adminpage = new class adminpage(this);
            adminpage->show();
        }
        else {
            hide();
            userpage=new class userPage(this);
            userpage->show();

        }

    }
}

void information::closeEvent(QCloseEvent *event)
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
