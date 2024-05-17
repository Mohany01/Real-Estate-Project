#include "allapartments.h"
#include "comparepage.h"
#include "login.h"
#include "qevent.h"
#include "qmessagebox.h"
#include "ui_allapartments.h"
#include "propertylist.h"
#include "userslist.h"
string nameofApart="";
allApartments::allApartments(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::allApartments)
{
    ui->setupUi(this);
    // if(MainWindow::ReturnUserName()=="1"){
    //     ui->filter->setVisible(false);
    // }
    ui->username->setText(MainWindow::ReturnUserName()+",");
    ui->widget->setVisible(false);
   ShowAllApartments();

}

allApartments::~allApartments()
{
    delete ui;
}

void allApartments::ShowAllApartments()
{
    int labelIndex = 1;

    for (const auto& pair : propertylist::properties) {
       // const string& username = pair.second;
        const class property& userProperty = pair.first;

        // Assuming propertylist::properties is an unordered_map<string, property>
        QString price = QString::number(userProperty.getPrice());
        QString location = QString::fromStdString(userProperty.getLocation());
        QString type = QString::fromStdString(userProperty.getType());
        QString name = QString::fromStdString(userProperty.getName());
        QString area = QString::number(userProperty.getArea());
        QString bedrooms = QString::number(userProperty.getnumOfbedrooms());


        QString labelprice = "prop" + QString::number(labelIndex);
        QString labelloc = "loc" + QString::number(labelIndex);
        QString labeltype = "type" + QString::number(labelIndex);
        QString labelname = "name" + QString::number(labelIndex);
        QString labelarea = "area" + QString::number(labelIndex);
        QString labelbedrooms = "bed" + QString::number(labelIndex);


        QLabel* labelp = findChild<QLabel*>(labelprice);
        QLabel* labelo = findChild<QLabel*>(labelloc);
        QLabel* labelty = findChild<QLabel*>(labeltype);
        QLabel* labelnam = findChild<QLabel*>(labelname);
        QLabel* labelare = findChild<QLabel*>(labelarea);
        QLabel* labelbed = findChild<QLabel*>(labelbedrooms);


        if (labelp && labelo && labelty && labelnam && labelare && labelbed ) {
            labelp->setText(price+" $");
            labelo->setText(location);
            labelty->setText(type);
            labelnam->setText(name);
            labelare->setText(area+"㎡");
            labelbed->setText(bedrooms);
            labelIndex++;

            qDebug()<<labelIndex<<"";


        } else {
            // qDebug() << "Label" << labelName << "not found!";
        }
    }

}
void allApartments::refreshApart()
{
    for (int i = 1; i <= 9; ++i) {
        QString labelprice = "prop" + QString::number(i);
        QString labelloc = "loc" + QString::number(i);
        QString labeltype = "type" + QString::number(i);
        QString labelname = "name" + QString::number(i);
        QString labelarea = "area" + QString::number(i);
        QString labelbedrooms = "bed" + QString::number(i);


        QLabel* labelp = findChild<QLabel*>(labelprice);
        QLabel* labell = findChild<QLabel*>(labelloc);
        QLabel* labelty = findChild<QLabel*>(labeltype);
        QLabel* labelnam = findChild<QLabel*>(labelname);
        QLabel* labelare = findChild<QLabel*>(labelarea);
        QLabel* labelbed = findChild<QLabel*>(labelbedrooms);


        if (labelp && labell && labelty &&labelnam && labelare && labelbed) {
            labelp->clear();
            labell->clear();
            labelty->clear();
            labelnam->clear();
            labelbed->clear();
            labelare->clear();
        }
    }

}
void allApartments::searchByLocation(){
    bool locationExists = false;
    int labelIndex = 1;

    for (auto it = propertylist::properties.begin(); it != propertylist::properties.end(); ++it)
    {
        if (it->first.getLocation() == ui->location->text().toStdString())
        {
            // Property found, set locationExists to true and show property details
            locationExists = true;
            const class property& userProperty = it->first;
            QString price = QString::number(userProperty.getPrice());
            QString location = QString::fromStdString(userProperty.getLocation());
            QString type = QString::fromStdString(userProperty.getType());
            QString name = QString::fromStdString(userProperty.getName());
            QString area = QString::number(userProperty.getArea());
            QString bedrooms = QString::number(userProperty.getnumOfbedrooms());

            QString labelprice = "prop" + QString::number(labelIndex);
            QString labelloc = "loc" + QString::number(labelIndex);
            QString labeltype = "type" + QString::number(labelIndex);
            QString labelname = "name" + QString::number(labelIndex);
            QString labelarea = "area" + QString::number(labelIndex);
            QString labelbedrooms = "bed" + QString::number(labelIndex);

            QLabel* labelp = findChild<QLabel*>(labelprice);
            QLabel* labelo = findChild<QLabel*>(labelloc);
            QLabel* labelty = findChild<QLabel*>(labeltype);
            QLabel* labelnam = findChild<QLabel*>(labelname);
            QLabel* labelare = findChild<QLabel*>(labelarea);
            QLabel* labelbed = findChild<QLabel*>(labelbedrooms);

             if (labelp && labelo && labelty && labelnam && labelare && labelbed ) {
                labelp->setText(price+" $");
                labelo->setText(location);
                labelty->setText(type);
                labelnam->setText(name);
                labelare->setText(area+"㎡");
                labelbed->setText(bedrooms);
                labelIndex++;
            }

            //break; // Exit loop since location is found
        }



    }

    if (!locationExists) {
       QMessageBox::critical(this,"Searching","There are no apartments at this Location",QMessageBox::Ok);
        ShowAllApartments();

        }

}
void allApartments::searchByPrice(){
    bool PriceExists = false;
    int labelIndex = 1;
    if(ui->min->text()<ui->max->text()){
        for (auto it = propertylist::properties.begin(); it != propertylist::properties.end(); ++it)
        {
            if (ui->min->text().toInt()<=it->first.getPrice() && it->first.getPrice()<=ui->max->text().toInt())
            {
                PriceExists = true;
                const class property& userProperty = it->first;
                QString price = QString::number(userProperty.getPrice());
                QString location = QString::fromStdString(userProperty.getLocation());
                QString type = QString::fromStdString(userProperty.getType());
                QString name = QString::fromStdString(userProperty.getName());
                QString area = QString::number(userProperty.getArea());
                QString bedrooms = QString::number(userProperty.getnumOfbedrooms());

                QString labelprice = "prop" + QString::number(labelIndex);
                QString labelloc = "loc" + QString::number(labelIndex);
                QString labeltype = "type" + QString::number(labelIndex);
                QString labelname = "name" + QString::number(labelIndex);
                QString labelarea = "area" + QString::number(labelIndex);
                QString labelbedrooms = "bed" + QString::number(labelIndex);

                QLabel* labelp = findChild<QLabel*>(labelprice);
                QLabel* labelo = findChild<QLabel*>(labelloc);
                QLabel* labelty = findChild<QLabel*>(labeltype);
                QLabel* labelnam = findChild<QLabel*>(labelname);
                QLabel* labelare = findChild<QLabel*>(labelarea);
                QLabel* labelbed = findChild<QLabel*>(labelbedrooms);

                if (labelp && labelo && labelty && labelnam && labelare && labelbed ) {
                    labelp->setText(price+" $");
                    labelo->setText(location);
                    labelty->setText(type);
                    labelnam->setText(name);
                    labelare->setText(area+"㎡");
                    labelbed->setText(bedrooms);
                    labelIndex++;
                }


               // break; // Exit loop since location is found
            }
        }


        if(!PriceExists){
            QMessageBox::critical(this,"Searching","There are no apartments at this price",QMessageBox::Ok);
            ShowAllApartments();

        }
    }
     else {
         QMessageBox::critical(this,"Searching","Your Data not vaild",QMessageBox::Ok);
        ShowAllApartments();
     }
}


void allApartments::searchByType(){
    bool typeExist = false;
    int labelIndex = 1;

    for (auto it = propertylist::properties.begin(); it != propertylist::properties.end(); ++it)
    {
        if (it->first.getType() == ui->type->text().toStdString())
        {
            // Property found, set locationExists to true and show property details
            typeExist = true;
            const class property& userProperty = it->first;
            QString price = QString::number(userProperty.getPrice());
            QString location = QString::fromStdString(userProperty.getLocation());
            QString type = QString::fromStdString(userProperty.getType());
            QString name = QString::fromStdString(userProperty.getName());
            QString area = QString::number(userProperty.getArea());
            QString bedrooms = QString::number(userProperty.getnumOfbedrooms());

            QString labelprice = "prop" + QString::number(labelIndex);
            QString labelloc = "loc" + QString::number(labelIndex);
            QString labeltype = "type" + QString::number(labelIndex);
            QString labelname = "name" + QString::number(labelIndex);
            QString labelarea = "area" + QString::number(labelIndex);
            QString labelbedrooms = "bed" + QString::number(labelIndex);

            QLabel* labelp = findChild<QLabel*>(labelprice);
            QLabel* labelo = findChild<QLabel*>(labelloc);
            QLabel* labelty = findChild<QLabel*>(labeltype);
            QLabel* labelnam = findChild<QLabel*>(labelname);
            QLabel* labelare = findChild<QLabel*>(labelarea);
            QLabel* labelbed = findChild<QLabel*>(labelbedrooms);

            if (labelp && labelo && labelty && labelnam && labelare && labelbed ) {
                labelp->setText(price+" $");
                labelo->setText(location);
                labelty->setText(type);
                labelnam->setText(name);
                labelare->setText(area+"㎡");
                labelbed->setText(bedrooms);
                labelIndex++;
            }

            //break; // Exit loop since location is found
        }



    }

    if (!typeExist) {
        QMessageBox::critical(this,"Searching","There are no apartments at this type",QMessageBox::Ok);
        ShowAllApartments();

    }

}
string allApartments::ReturnNameOfApart()
{
    return nameofApart;
}

void allApartments::on_search_clicked()
{
    if(!ui->location->text().isEmpty()){
        refreshApart();
        searchByLocation();
    }
    if(!ui->min->text().isEmpty()&&!ui->max->text().isEmpty()){
         refreshApart();
        searchByPrice();
    }
    if(!ui->type->text().isEmpty()){
        refreshApart();
        searchByType();
    }
    if(!ui->bed->text().isEmpty()){
        refreshApart();
        searchByBedRooms();
    }
    if(!ui->area->text().isEmpty()){
        refreshApart();
        searchByArea();
    }
}

void allApartments::searchByArea(){
    bool AreaExist = false;
    int labelIndex = 1;

    for (auto it = propertylist::properties.begin(); it != propertylist::properties.end(); ++it)
    {
        if (it->first.getArea() == ui->area->text().toInt())
        {
            // Property found, set locationExists to true and show property details
            AreaExist = true;
            const class property& userProperty = it->first;
            QString price = QString::number(userProperty.getPrice());
            QString location = QString::fromStdString(userProperty.getLocation());
            QString type = QString::fromStdString(userProperty.getType());
            QString name = QString::fromStdString(userProperty.getName());
            QString area = QString::number(userProperty.getArea());
            QString bedrooms = QString::number(userProperty.getnumOfbedrooms());

            QString labelprice = "prop" + QString::number(labelIndex);
            QString labelloc = "loc" + QString::number(labelIndex);
            QString labeltype = "type" + QString::number(labelIndex);
            QString labelname = "name" + QString::number(labelIndex);
            QString labelarea = "area" + QString::number(labelIndex);
            QString labelbedrooms = "bed" + QString::number(labelIndex);


            QLabel* labelp = findChild<QLabel*>(labelprice);
            QLabel* labelo = findChild<QLabel*>(labelloc);
            QLabel* labelty = findChild<QLabel*>(labeltype);
            QLabel* labelnam = findChild<QLabel*>(labelname);
            QLabel* labelare = findChild<QLabel*>(labelarea);
            QLabel* labelbed = findChild<QLabel*>(labelbedrooms);


            if (labelp && labelo && labelty && labelnam && labelare) {
                labelp->setText(price+" $");
                labelo->setText(location);
                labelty->setText(type);
                labelnam->setText(name);
                labelare->setText(area+"㎡");
                labelbed->setText(bedrooms);

                labelIndex++;
            }

            //break; // Exit loop since location is found
        }



    }

    if (!AreaExist) {
        QMessageBox::critical(this,"Searching","There are no apartments at this area",QMessageBox::Ok);
        ShowAllApartments();

    }

}
void allApartments::searchByBedRooms(){
    bool BedroomsExist = false;
    int labelIndex = 1;

    for (auto it = propertylist::properties.begin(); it != propertylist::properties.end(); ++it)
    {
        if (it->first.getnumOfbedrooms() == ui->bed->text().toInt())
        {
            // Property found, set locationExists to true and show property details
            BedroomsExist = true;
            const class property& userProperty = it->first;
            QString price = QString::number(userProperty.getPrice());
            QString location = QString::fromStdString(userProperty.getLocation());
            QString type = QString::fromStdString(userProperty.getType());
            QString name = QString::fromStdString(userProperty.getName());
            QString area = QString::number(userProperty.getArea());
            QString bedrooms = QString::number(userProperty.getnumOfbedrooms());


            QString labelprice = "prop" + QString::number(labelIndex);
            QString labelloc = "loc" + QString::number(labelIndex);
            QString labeltype = "type" + QString::number(labelIndex);
            QString labelname = "name" + QString::number(labelIndex);
            QString labelarea = "area" + QString::number(labelIndex);
            QString labelbedrooms = "bed" + QString::number(labelIndex);


            QLabel* labelp = findChild<QLabel*>(labelprice);
            QLabel* labelo = findChild<QLabel*>(labelloc);
            QLabel* labelty = findChild<QLabel*>(labeltype);
            QLabel* labelnam = findChild<QLabel*>(labelname);
            QLabel* labelare = findChild<QLabel*>(labelarea);
            QLabel* labelbed = findChild<QLabel*>(labelbedrooms);


            if (labelp && labelo && labelty && labelnam && labelare && labelbed) {
                labelp->setText(price+" $");
                labelo->setText(location);
                labelty->setText(type);
                labelnam->setText(name);
                labelare->setText(area+"㎡");
                labelbed->setText(bedrooms);

                labelIndex++;
            }

            //break; // Exit loop since location is found
        }



    }

    if (!BedroomsExist) {
        QMessageBox::critical(this,"Searching","There are no apartments at this bedrooms",QMessageBox::Ok);
        ShowAllApartments();

    }

}
void allApartments::on_back_clicked()
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


void allApartments::on_reset_clicked()
{
    ShowAllApartments();
    ui->location->setText("");
    ui->min->setText("");
    ui->max->setText("");
    ui->type->setText("");
    ui->area->setText("");
    ui->bed->setText("");


}


void allApartments::on_compare_clicked()
{

    QList<QCheckBox*> checkboxes = {ui->checkBox, ui->checkBox_2, ui->checkBox_3, ui->checkBox_4,
                                         ui->checkBox_5, ui->checkBox_6, ui->checkBox_7, ui->checkBox_8, ui->checkBox_9};
    //QStringList selectedProperties;
    vector<string>selectedProperties;

        int selectedCount = 0;
        for (QCheckBox* checkbox : checkboxes) {
            if (checkbox->isChecked()) {
                selectedCount++;
            }
        }


    if (selectedCount < 2 || selectedCount > 4) {
        QMessageBox::warning(this, "Selection Error", "Please select at least 2 and maximum 4 apartment.");
    } else {
        for(int i=0;i<checkboxes.length();i++){
            if(checkboxes[i]->isChecked()){
                QString labelname = "name" + QString::number(i + 1);
                QLabel* labelnam = findChild<QLabel*>(labelname);
                if (labelnam) {
                    string apartmentName = labelnam->text().toStdString();
                   // qDebug()<<apartmentName;
                    selectedProperties.push_back(apartmentName);
                    //qDebug()<<selectedProperties.front();


                }
            }

        }
        hide();
        comparepage=new class ComparePage(selectedProperties, this);
        comparepage->show();

    }
}


void allApartments::on_view_1_clicked()
{
    nameofApart=ui->name1->text().toStdString();
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


void allApartments::on_view_2_clicked()
{
    nameofApart=ui->name2->text().toStdString();

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


void allApartments::on_view_3_clicked()
{
    nameofApart=ui->name3->text().toStdString();

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

void allApartments::on_view_4_clicked()
{
    nameofApart=ui->name4->text().toStdString();

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


void allApartments::on_view_5_clicked()
{
    nameofApart=ui->name5->text().toStdString();

    if(!ui->name5->text().isEmpty()){
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


void allApartments::on_view_6_clicked()
{
    nameofApart=ui->name6->text().toStdString();

    if(!ui->name6->text().isEmpty()){
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


void allApartments::on_view_7_clicked()
{
    nameofApart=ui->name7->text().toStdString();

    if(!ui->name7->text().isEmpty()){
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


void allApartments::on_view_8_clicked()
{
    nameofApart=ui->name8->text().toStdString();

    if(!ui->name8->text().isEmpty()){
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


void allApartments::on_view_9_clicked()
{
    nameofApart=ui->name9->text().toStdString();

    if(!ui->name9->text().isEmpty()){
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

void allApartments::closeEvent(QCloseEvent *event)
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
