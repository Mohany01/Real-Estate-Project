#ifndef LOGIN_H
#define LOGIN_H
#include <QMainWindow>
#include"adminpage.h"
#include"sign_up.h"
#include "userpage.h"
QT_BEGIN_NAMESPACE
using namespace std;
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    static QString ReturnUserName();
    static QString  usertext;
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_log_clicked();
    void on_SignUp_clicked();

private:
    Ui::MainWindow *ui;
    adminpage* adminpage;
    Sign_Up* sign_up;
    userPage* userpage;
};
#endif // LOGIN_H
