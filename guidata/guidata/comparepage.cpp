#include "comparepage.h"
#include "adminpage.h"
#include "allapartments.h"
#include "login.h"
#include "qevent.h"
#include "qmessagebox.h"
#include "ui_comparepage.h"
#include "userslist.h"
#include "propertylist.h"
int currentIndex1,currentIndex2,currentIndex3,currentIndex4;
ComparePage::ComparePage(const vector<string> &selectedProperties, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ComparePage)
{
    ui->setupUi(this);
    displaySelectedProperties(selectedProperties);
    imagePaths = { "D:/guidata/guidata/photo1.png", "D:/guidata/guidata/photo2.png", "D:/guidata/guidata/photo3.png","D:/guidata/guidata/photo4.png"};
    updateImage();
    imagePaths2 = { "D:/guidata/guidata/1.png", "D:/guidata/guidata/a.png", "D:/guidata/guidata/b.png"};
    updateImage2();
    imagePaths3 = { "D:/guidata/guidata/2.png","D:/guidata/guidata/a2.png", "D:/guidata/guidata/b2.png"};
    updateImage3();
    imagePaths4 = { "D:/guidata/guidata/3.png", "D:/guidata/guidata/a3.png", "D:/guidata/guidata/b3.png"};
    updateImage4();
}

ComparePage::~ComparePage()
{
    delete ui;
}
void ComparePage::displaySelectedProperties(const vector<string> &selectedProperties)
{
    for (size_t i = 0; i < selectedProperties.size(); ++i) {
        QString nameLabel = "name" + QString::number(i + 1);
        QString typeLabel = "type" + QString::number(i + 1);
        QString priceLabel = "price" + QString::number(i + 1);
        QString locationLabel = "loc" + QString::number(i + 1);
        QString areaLabel = "area" + QString::number(i + 1);
        QString bedroomsLabel = "bed" + QString::number(i + 1);
        QString bathroomsLabel = "bath" + QString::number(i + 1);
        QString descriptionLabel = "desc" + QString::number(i + 1);

        QLabel* name = findChild<QLabel*>(nameLabel);
        QLabel* type = findChild<QLabel*>(typeLabel);
        QLabel* price = findChild<QLabel*>(priceLabel);
        QLabel* location = findChild<QLabel*>(locationLabel);
        QLabel* area = findChild<QLabel*>(areaLabel);
        QLabel* bedrooms = findChild<QLabel*>(bedroomsLabel);
        QLabel* bathrooms = findChild<QLabel*>(bathroomsLabel);
        QLabel* description = findChild<QLabel*>(descriptionLabel);

        if (name) name->setText(QString::fromStdString(selectedProperties[i]));
        if (type) type->setText(QString::fromStdString(propertylist::ReturnPropertytype(selectedProperties[i])));
        if (price) price->setText(QString::number(propertylist::ReturnPropertyPrice(selectedProperties[i]))+" $");
        if (location) location->setText(QString::fromStdString(propertylist::ReturnPropertylocation(selectedProperties[i])));
        if (area) area->setText(QString::number(propertylist::ReturnPropertyArea(selectedProperties[i]))+" ㎡");
        if (bedrooms) bedrooms->setText(QString::number(propertylist::ReturnPropertyBedroomsNumber(selectedProperties[i])));
        if (bathrooms) bathrooms->setText(QString::number(propertylist::ReturnPropertyBathroomsNumber(selectedProperties[i])));
        if (description) description->setText(QString::fromStdString(propertylist::ReturnPropertyDescription(selectedProperties[i])));
    }
}
void ComparePage::on_home_clicked()
{
    if(UsersList::isAdmin(MainWindow::ReturnUserName().toStdString())){
        hide();
        adminpage=new class adminpage(this);
        adminpage->show();
    }
    else{
        hide();
        userpage=new class userPage(this);
        userpage->show();
    }

}


void ComparePage::on_back_clicked()
{
    hide();
    allaprtments=new class allApartments(this);
    allaprtments->show();
}

void ComparePage::closeEvent(QCloseEvent *event)
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

void ComparePage::on_previous_clicked()
{
    if (!imagePaths.empty()) {
        currentIndex1 = (currentIndex1 - 1 + imagePaths.size()) % imagePaths.size();
        updateImage();
    }
}


void ComparePage::on_next_clicked()
{
    if (!imagePaths.empty()) {
        currentIndex1 = (currentIndex1 + 1) % imagePaths.size();
        updateImage();
    }
}
void ComparePage::updateImage( )
{
    if (!imagePaths.empty()) {
        QPixmap pixmap(imagePaths[currentIndex1]);
        ui->images->setPixmap(pixmap.scaled(ui->images->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
}


void ComparePage::on_previous_2_clicked()
{
    if (!imagePaths2.empty()) {
        currentIndex2 = (currentIndex2 - 1 + imagePaths2.size()) % imagePaths2.size();
        updateImage2();
    }
}


void ComparePage::on_next_2_clicked()
{
    if (!imagePaths2.empty()) {
        currentIndex2 = (currentIndex2 + 1) % imagePaths2.size();
        updateImage2();
    }
}
void ComparePage::updateImage2( )
{
    if (!imagePaths2.empty()) {
        QPixmap pixmap(imagePaths2[currentIndex2]);
        ui->images_2->setPixmap(pixmap.scaled(ui->images_2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
}

void ComparePage::on_previous_3_clicked()
{
    if (!imagePaths3.empty()) {
        currentIndex3 = (currentIndex3 - 1 + imagePaths3.size()) % imagePaths3.size();
        updateImage3();
    }
}


void ComparePage::on_next_3_clicked()
{
    if (!imagePaths3.empty()) {
        currentIndex3 = (currentIndex3 + 1) % imagePaths3.size();
        updateImage3();
    }
}
void ComparePage::updateImage3( )
{
    if (!imagePaths3.empty()) {
        QPixmap pixmap(imagePaths3[currentIndex3]);
        ui->images_3->setPixmap(pixmap.scaled(ui->images_3->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
}


void ComparePage::on_previous_4_clicked()
{
    if (!imagePaths4.empty()) {
        currentIndex4 = (currentIndex4 - 1 + imagePaths4.size()) % imagePaths4.size();
        updateImage4();
    }
}


void ComparePage::on_next_4_clicked()
{
    if (!imagePaths4.empty()) {
        currentIndex4 = (currentIndex4 + 1) % imagePaths4.size();
        updateImage4();
    }
}

void ComparePage::updateImage4( )
{
    if (!imagePaths4.empty()) {
        QPixmap pixmap(imagePaths4[currentIndex4]);
        ui->images_4->setPixmap(pixmap.scaled(ui->images_4->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
}
