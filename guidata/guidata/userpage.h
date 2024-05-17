#ifndef USERPAGE_H
#define USERPAGE_H

#include <QDialog>
#include "information.h"
#include "qlabel.h"
class MainWindow;
class UsersList;
class adminpage;
class editUser;
class allApartments;
class users;
class adpartment;
class editApartment;
using namespace std;
namespace Ui {
class userPage;
}

class userPage : public QDialog
{
    Q_OBJECT

public:
    explicit userPage(QWidget *parent = nullptr);  
    static string ReturnUserName();
    static string ReturnNameOfApart();
    void ShowApartments();
    void refreshApart();
    void animateText(QLabel* label) ;


protected:
    void closeEvent(QCloseEvent *event);
    ~userPage();

private slots:


    void on_back_clicked();


    void on_edit_5_clicked();

    void on_add_2_clicked();


    void on_viewApartments_clicked();

    void on_view_1_clicked();

    void on_view_2_clicked();

    void on_view_3_clicked();

    void on_view_4_clicked();



    void on_del2_clicked();

    void on_del3_clicked();

    void on_del4_clicked();




    void on_edit1_clicked();

    void on_edi2_clicked();

    void on_del2_2_clicked();

    void on_edit3_clicked();

    void on_edit4_clicked();

private:
    Ui::userPage *ui;
    information* info;
    MainWindow* mainwindow;
    adminpage* adminpage;
    editUser* edituser;
    users* users;
    allApartments* allapartments;
    adpartment* adpartment;
    editApartment* editapartment;
};

#endif // USERPAGE_H
