#ifndef INFORMATION_H
#define INFORMATION_H
#include <QDialog>
class adminpage;
class MainWindow;
class userPage;
namespace Ui {
class information;
}

class information : public QDialog
{
    Q_OBJECT

public:
    explicit information(QWidget *parent = nullptr);
    ~information();
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void on_back_clicked();


    void on_submit_clicked();

private:
    Ui::information *ui;
    adminpage* adminpage;
    userPage* userpage;
};

#endif // INFORMATION_H
