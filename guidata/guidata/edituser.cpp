#include "edituser.h"
#include "qmessagebox.h"
#include "qvalidator.h"
#include "ui_edituser.h"
#include "login.h"
#include "userslist.h"
#include <iostream>
#include "sign_up.h"
#include "user.h"
#include "propertylist.h"
#include "userpage.h"
#include <QCloseEvent>
using namespace std;
class CustomValidator : public QValidator
{
public:
    CustomValidator(QObject *parent = nullptr) : QValidator(parent) {}

    State validate(QString &input, int &pos) const override
    {
        if (input.isEmpty() || (input[0] == '0' && input.length() <= 11)) {
            return Acceptable;
        } else {
            return Invalid;
        }
    }
};

class LetterValidator : public QValidator {
public:
    LetterValidator(QObject *parent = nullptr) : QValidator(parent) {}
    State validate(QString &input, int &pos) const override {
        Q_UNUSED(pos)
        QRegularExpression rx("^[A-Za-z]*$");
        return rx.match(input).hasMatch() ? Acceptable : Invalid;
    }
};
editUser::editUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editUser)
{
    ui->setupUi(this);
    CustomValidator *validator = new CustomValidator(this);
    LetterValidator *validator2 = new LetterValidator(this);
    ui->firstname->setValidator(validator2);
    ui->lastname->setValidator(validator2);
    ui->phone->setValidator(validator);
    ui->phone->setMaxLength(11);
}

editUser::~editUser()
{
    delete ui;
}

void editUser::on_back_clicked()
{
        hide();
        userpage=new class userPage(this);
        userpage->show();

}


void editUser::on_submit_clicked()
{
    if(ui->firstname->text().isEmpty() && ui->lastname->text().isEmpty() && ui->password->text().isEmpty() && ui->phone->text().isEmpty()){
        QMessageBox::critical(this,"Edit Faild","No data to edit",QMessageBox::Ok);
    }
    else {
    if(!ui->firstname->text().isEmpty())
    {
        UsersList::EditFirstName(userPage::ReturnUserName(),ui->firstname->text().toStdString());

    }
    else
    {

    }
    if(!ui->lastname->text().isEmpty())
    {
        UsersList::EditLastName(userPage::ReturnUserName(),ui->lastname->text().toStdString());
    }
    else
    {

    }
    if(!ui->password->text().isEmpty())
    {
        UsersList::EditPassword(userPage::ReturnUserName(),ui->password->text().toStdString());
    }
    else
    {

    }
    if(!ui->phone->text().isEmpty())
    {
         UsersList::EditPhone(userPage::ReturnUserName(),ui->phone->text().toStdString());
    }
    else
    {

    }
    QMessageBox::information(this,"Edit Data","Edit complete",QMessageBox::Ok);
    }

    //hide();
    //userpage = new class userPage(this);
    //userpage->show();
}

void editUser::closeEvent(QCloseEvent *event)
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
