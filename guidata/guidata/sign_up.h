#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QDialog>
class MainWindow;

namespace Ui {
class Sign_Up;
}

class Sign_Up : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_Up(QWidget *parent = nullptr);
    ~Sign_Up();
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void on_SignUp_clicked();
    void fadeOutFinished();
    void on_back_clicked();

private:
    Ui::Sign_Up *ui;
    MainWindow* mainwindow;


};


#endif // SIGN_UP_H
