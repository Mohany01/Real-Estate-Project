#ifndef EDITAPARTMENT_H
#define EDITAPARTMENT_H

#include <QDialog>
class adpartment;
class adminpage;
class userPage;
class allApartments;
namespace Ui {
class editApartment;
}

class editApartment : public QDialog
{
    Q_OBJECT

public:
    explicit editApartment(QWidget *parent = nullptr);
    ~editApartment();

protected:
     void closeEvent(QCloseEvent *event) override;

private slots:
    void on_back_clicked();

    void on_submit_clicked();

private:
    Ui::editApartment *ui;
    adpartment* adpartment;
    adminpage* adminpage;
    userPage* userpage;
    allApartments* allapartments;

};

#endif // EDITAPARTMENT_H
