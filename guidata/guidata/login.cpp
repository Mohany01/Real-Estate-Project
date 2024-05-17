#include "login.h"
#include "ui_login.h"
#include "user.h"
#include "userslist.h"
#include <QApplication>
#include <QMessageBox>
#include <QCloseEvent>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include "propertylist.h"
using namespace std;
QString username="";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
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

void MainWindow::on_log_clicked()
{
    //ui->lab->setText("login done");
    if(ui->passtext->text().isEmpty()  || ui->usertext->text().isEmpty()){
        QMessageBox::critical(this,"Fail Login","Missing data",QMessageBox::Ok);
    }
    else
    {
    if(ui->usertext->text() == "1" && ui->passtext->text() == "1")
    {
         username=ui->usertext->text();
         hide();
         adminpage=new class adminpage(this);
         adminpage->show();
    }
    else
    {
        if(UsersList::login(ui->usertext->text().toStdString(),ui->passtext->text().toStdString()))
        {
            username=ui->usertext->text();
             hide();
             userpage=new class userPage(this);
             userpage->show();

        }
        else
        {
            QMessageBox::critical(this,"Fail Login","This username not Existing"
                                                      " Please Sign Up First",QMessageBox::Ok);
        }
    }
    }

}



void MainWindow::on_SignUp_clicked()
{
    hide();
    sign_up=new class Sign_Up(this);
    sign_up->show();
}

QString MainWindow::ReturnUserName()
{
    return username;
}
