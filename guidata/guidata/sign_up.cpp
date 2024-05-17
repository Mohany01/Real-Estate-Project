#include "sign_up.h"
#include "qevent.h"
#include "ui_sign_up.h"
#include <QValidator>
#include <QApplication>
#include <QMessageBox>
#include "login.h"
#include "user.h"
#include "propertylist.h"
#include "userslist.h"
#include <QRegularExpressionValidator>
#include <QPropertyAnimation>


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

Sign_Up::Sign_Up(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sign_Up)
{
    ui->setupUi(this);
    CustomValidator *validator = new CustomValidator(this);
    LetterValidator *validator2 = new LetterValidator(this);
    ui->firstname->setValidator(validator2);
    ui->lastname->setValidator(validator2);
    ui->phone->setValidator(validator);
    ui->phone->setMaxLength(11);
}

Sign_Up::~Sign_Up()
{
    delete ui;
}

void Sign_Up::on_SignUp_clicked()
{
    if((ui->firstname->text().isEmpty() || ui->password->text().isEmpty()) ||ui->lastname->text().isEmpty()  || ui->username->text().isEmpty()|| ui->phone->text().isEmpty()||ui->phone->text().length()<11){
        QMessageBox::critical(this,"Fail Login","Missing data",QMessageBox::Ok);
    }
    else
    {
        if(ui->username->text()=="1")
        {
            QMessageBox::critical(this,"Fail Login","Refused Access",QMessageBox::Ok);
        }
        else if(UsersList::CheckUsername(ui->username->text().toStdString()))
        {

            QMessageBox::critical(this,"Fail Login","username already exist",QMessageBox::Ok);

        }
        else
        {
            //void user::_register(string firstname,string lastname ,string username , string password )
            qDebug()<<"we ended here \n";
            UsersList::_register(ui->firstname->text().toStdString(),ui->lastname->text().toStdString(),ui->username->text().toStdString(),ui->password->text().toStdString() ,ui->phone->text().toStdString());
            qDebug()<<ui->firstname->text()<<"\n";
            qDebug()<<ui->lastname->text()<<"\n";
            qDebug()<<ui->username->text()<<"\n";
            qDebug()<<ui->password->text()<<"\n";
            qDebug()<<ui->phone->text()<<"\n";

            string username=ui->username->text().toStdString();
            hide();
            mainwindow=new class MainWindow(this);
            mainwindow->show();
        }
    }
}


// void Sign_Up::on_back_clicked()
// {

//     hide();
//     mainwindow=new class MainWindow(this);
//     mainwindow->show();
// }
void Sign_Up::on_back_clicked() {
    // Create animation to fade out the current window
    QPropertyAnimation *fadeOutAnimation = new QPropertyAnimation(this, "windowOpacity");
    fadeOutAnimation->setDuration(500); // Set animation duration in milliseconds
    fadeOutAnimation->setStartValue(1.0);
    fadeOutAnimation->setEndValue(0.0);
    connect(fadeOutAnimation, &QPropertyAnimation::finished, this, &Sign_Up::fadeOutFinished);

    // Start the fade out animation
    fadeOutAnimation->start(QAbstractAnimation::DeleteWhenStopped);
}

void Sign_Up::fadeOutFinished() {
    // Hide the current window after the fade out animation is finished
    hide();

    // Create and show the next window
    MainWindow *mainwindow = new MainWindow;
    mainwindow->setAttribute(Qt::WA_DeleteOnClose); // Delete the next window when closed
    mainwindow->setWindowOpacity(0.0); // Set initial opacity to 0
    mainwindow->show();

    // Create animation to fade in the next window
    QPropertyAnimation *fadeInAnimation = new QPropertyAnimation(mainwindow, "windowOpacity");
    fadeInAnimation->setDuration(500); // Set animation duration in milliseconds
    fadeInAnimation->setStartValue(0.0);
    fadeInAnimation->setEndValue(1.0);
    fadeInAnimation->start(QAbstractAnimation::DeleteWhenStopped);
}

void Sign_Up::closeEvent(QCloseEvent *event)
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
