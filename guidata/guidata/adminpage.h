#ifndef ADMINPAGE_H
#define ADMINPAGE_H
#include "adpartment.h"
#include <ui_adpartment.h>
#include "information.h"
#include "users.h"
#include <QDialog>

class MainWindow;
class adpartment;
class information;
class allApartments;
namespace Ui {
class adminpage;
}

class adminpage : public QDialog
{
    Q_OBJECT

public:
    explicit adminpage(QWidget *parent = nullptr);
    vector<QString> imagePaths;
    void updateImage();
    void updateImagePath();
    void animateImageChange();

    ~adminpage();
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:

    void on_back_clicked();

    void on_add_clicked();

    void on_add_2_clicked();


    void on_apartments_clicked();

    void on_previous_clicked();

    void on_next_clicked();

public:
    Ui::adminpage *ui;
    MainWindow* MainWindow;
    adpartment* adpartment;
    information* information;
    users* users;
    allApartments* allapartments;
};

#endif // ADMINPAGE_H
