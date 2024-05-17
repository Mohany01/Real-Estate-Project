#ifndef USERS_H
#define USERS_H
#include <QDialog>
#include <QHBoxLayout>
#include <iostream>
using namespace std;
class userPage;
namespace Ui {
class users;
}

class users : public QDialog
{
    Q_OBJECT

public:
    explicit users(QWidget *parent = nullptr);
    void ShowUsers();
    void refreshUsers();
    static string ReturnUserName();
protected:
    void closeEvent(QCloseEvent *event) override;
    ~users();

private slots:
    void on_back_clicked();

    void on_add_clicked();

    void on_add2_clicked();

    void on_add_3_clicked();



    void on_add4_clicked();

    void on_add5_clicked();

    void on_add6_clicked();

    void on_add7_clicked();

    void on_add8_clicked();


    void on_del1_clicked();

    void on_del2_clicked();

    void on_del3_clicked();

    void on_del4_clicked();

    void on_del5_clicked();

    void on_del6_clicked();

    void on_del7_clicked();

    void on_del8_clicked();




private:
    Ui::users *ui;
    QVBoxLayout *usernamesLayout;
    userPage* userpage;
};

#endif // USERS_H
