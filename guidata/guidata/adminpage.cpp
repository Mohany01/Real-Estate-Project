#include "adminpage.h"
#include "allapartments.h"
#include "login.h"
#include "qevent.h"
#include "qmessagebox.h"
#include "ui_adminpage.h"
#include "users.h"
#include "userslist.h"
#include "propertylist.h"
#include <QHBoxLayout>
#include <QTimer>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>


int index;
adminpage::adminpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminpage)
{
    ui->setupUi(this);
    imagePaths = { "D:/guidata/guidata/back2.jpg", "D:/guidata/guidata/back1.jpg", "D:/guidata/guidata/background.jpg"};
    index = 0; // Initialize index to start from the first image
    updateImage();

    // Create a timer to periodically change the image
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &adminpage::updateImagePath);
    timer->start(3000);

}

adminpage::~adminpage()
{
    delete ui;
}

void adminpage::closeEvent(QCloseEvent *event)
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



void adminpage::on_back_clicked()
{
    hide();
    MainWindow=new class MainWindow(this);
    MainWindow->show();
}



void adminpage::on_add_clicked()
{
    hide();
    users = new class users(this);
    users->show();
    users->ShowUsers();
}


void adminpage::on_add_2_clicked()
{
    hide();
    information=new class information(this);
    information->show();
}






void adminpage::on_apartments_clicked()
{
    hide();
    allapartments=new class allApartments(this);
    allapartments->show();
}


void adminpage::on_previous_clicked()
{
    if (!imagePaths.empty()) {
        index = (index - 1 + imagePaths.size()) % imagePaths.size();
        updateImage();
    }
}


void adminpage::on_next_clicked()
{
    if (!imagePaths.empty()) {
        index = (index + 1) % imagePaths.size();
        updateImage();
    }
}
void adminpage::updateImagePath()
{
    if (!imagePaths.empty()) {
        index = (index + 1) % imagePaths.size();
        updateImage();
        animateImageChange();

    }
}
void adminpage::updateImage( )
{
    if (!imagePaths.empty()) {
        QPixmap pixmap(imagePaths[index]);
        ui->background->setPixmap(pixmap.scaled(ui->background->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
}
void adminpage::animateImageChange()
{
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect(this);
    ui->background->setGraphicsEffect(opacityEffect);

    QPropertyAnimation *fadeOut = new QPropertyAnimation(opacityEffect, "opacity");
    fadeOut->setDuration(1000); // Duration of the fade-out effect in milliseconds
    fadeOut->setStartValue(1.0);
    fadeOut->setEndValue(0.0);

    QPropertyAnimation *fadeIn = new QPropertyAnimation(opacityEffect, "opacity");
    fadeIn->setDuration(1000); // Duration of the fade-in effect in milliseconds
    fadeIn->setStartValue(0.0);
    fadeIn->setEndValue(1.0);

    connect(fadeOut, &QPropertyAnimation::finished, this, &adminpage::updateImage);
    connect(fadeOut, &QPropertyAnimation::finished, [fadeIn]() {
        fadeIn->start(QAbstractAnimation::DeleteWhenStopped);
    });

    fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
}
