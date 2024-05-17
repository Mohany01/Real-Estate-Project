#include "qevent.h"
#include "qmessagebox.h"
#include "ui_users.h"
#include "users.h"
#include "adminpage.h"
#include <QHBoxLayout>
#include "userpage.h"
#include "userslist.h"
#include "propertylist.h"
string user="";
users::users(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::users)
{
    ui->setupUi(this);
}

users::~users()
{
    delete ui;
}
void users::closeEvent(QCloseEvent *event)

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
void users::on_back_clicked()
{

    this->hide();
    adminpage *admin = new class adminpage(this);
    admin->show();
}
void users::ShowUsers()
{
    int labelIndex = 1;
    int filledLabelCount = 0;

    for (const auto& pair : UsersList::users) {
        const string& username = pair.first;

        QString labelText = QString::fromStdString(username);
        QString labelName = "user" + QString::number(labelIndex);
        QLabel* label = findChild<QLabel*>(labelName);
        if (label) {
            if (username == "1")
                continue;
            label->setText(labelText);
            labelIndex++;
            filledLabelCount++;

        } else {
            qDebug() << "Label" << labelName << "not found!";
        }

        ui->nOfUser->setText(QString::number(filledLabelCount));

    }
}
void users::refreshUsers()
{
    for (int i = 1; i <= 8; ++i) {
        QString labelName = "user" + QString::number(i);
        QLabel* label = findChild<QLabel*>(labelName);
        if (label) {
            label->clear(); // Clear the text of the label
        }
    }

}
string users::ReturnUserName()
{
    return user;
}

void users::on_add_clicked()
{
    user=ui->user1->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
    hide();
    userpage=new class userPage(this);
    userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }

}


void users::on_add2_clicked()
{
    user=ui->user2->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }


}


void users::on_add_3_clicked()
{
    user=ui->user3->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }

}




void users::on_add4_clicked()
{
    user=ui->user4->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }
}


void users::on_add5_clicked()
{
    user=ui->user5->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }
}


void users::on_add6_clicked()
{
    user=ui->user6->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }

}


void users::on_add7_clicked()
{
    user=ui->user7->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }

}


void users::on_add8_clicked()
{
    user=ui->user7->text().toStdString();
    // UsersList::ReturnFirstName(user);
    // UsersList::ReturnLastName(user);
    // propertylist::NumberOfPropertiesForUser(user);
    // UsersList::ReturnPhoneNumber(user);
    if(UsersList::CheckUsername(user)){
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO SHOW",QMessageBox::Ok);
    }

}





void users::on_del1_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);

    user=ui->user1->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
             UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }


    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }

}

void users::on_del2_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user2->text().toStdString();
    if(UsersList::CheckUsername(user)){

        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }

}


void users::on_del3_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user3->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }
}


void users::on_del4_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user4->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }
}


void users::on_del5_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user5->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }
}


void users::on_del6_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user6->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }
}


void users::on_del7_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user7->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }
    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }
}


void users::on_del8_clicked()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Delete user", tr("Are you sure to delete this user?"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    user=ui->user8->text().toStdString();
    if(UsersList::CheckUsername(user)){
        if (resBtn == QMessageBox::Yes) {
            UsersList::deleteuser(user);
            refreshUsers();
            ShowUsers();
            if(UsersList::users.size()==1){
                ui->nOfUser->setText("0");

            }

        } else {


        }

    }
    else{
        QMessageBox::critical(this,"ERROR","NO MEMBER TO Delete",QMessageBox::Ok);
    }

}






