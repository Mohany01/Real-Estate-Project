#ifndef EDITUSER_H
#define EDITUSER_H

#include <QDialog>
class userPage;
namespace Ui {
class editUser;
}

class editUser : public QDialog
{
    Q_OBJECT

public:
    explicit editUser(QWidget *parent = nullptr);
    ~editUser();
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_back_clicked();

    void on_submit_clicked();

private:
    Ui::editUser *ui;
    userPage* userpage;
};

#endif // EDITUSER_H
