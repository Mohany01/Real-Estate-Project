#ifndef ADPARTMENT_H
#define ADPARTMENT_H

#include <QDialog>
class adminpage;
class userPage;
class allApartments ;
class editApartment;
using namespace std;
namespace Ui {
class adpartment;
}

class adpartment : public QDialog
{
    Q_OBJECT

public:
 explicit adpartment(const string& apartmentName, int price, const string& location, const string& username, const string& description, const string& type, int numBathrooms, int numBed, double area, QWidget *parent = nullptr);
     adpartment(QWidget *parent = nullptr );
    static string ReturnApartName();

    ~adpartment();

protected:
     void closeEvent(QCloseEvent *event) override;

private slots:
    void on_back_clicked();

    void on_delete_2_clicked();

    void on_add_2_clicked();

    void on_edit_clicked();



private:
    Ui::adpartment *ui;
    adminpage* adminpage;
    userPage* userpage;
    allApartments* allaprtments;
    editApartment* editApart;
};

#endif // ADPARTMENT_H
