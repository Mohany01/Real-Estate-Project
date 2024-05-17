#ifndef ALLAPARTMENTS_H
#define ALLAPARTMENTS_H

#include <QDialog>
using namespace std;
class adminpage;
class userPage;
class ComparePage;
class adpartment;
namespace Ui {
class allApartments;
}

class allApartments : public QDialog
{
    Q_OBJECT

public:
    explicit allApartments(QWidget *parent = nullptr);
    void ShowAllApartments();
    void loadLocationsFromPropertyFile(const string& filename);
    void refreshApart();
    void searchByLocation();
    void searchByPrice();
    void searchByType();
    void searchByBedRooms();
    void searchByArea();
    static string ReturnNameOfApart();


protected:
     void closeEvent(QCloseEvent *event) override;
    ~allApartments();

private slots:

    void on_search_clicked();

    void on_back_clicked();

    void on_reset_clicked();

    void on_compare_clicked();

    void on_view_1_clicked();

    void on_view_2_clicked();

    void on_view_3_clicked();



    void on_view_4_clicked();

    void on_view_5_clicked();

    void on_view_6_clicked();

    void on_view_7_clicked();

    void on_view_8_clicked();

    void on_view_9_clicked();

private:
    Ui::allApartments *ui;
    adminpage* adminpage;
    userPage* userpage;
    ComparePage* comparepage;
    adpartment* adpartment;
};

#endif // ALLAPARTMENTS_H
