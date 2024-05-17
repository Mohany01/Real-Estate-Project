#ifndef COMPAREPAGE_H
#define COMPAREPAGE_H
#include "vector"
#include "string"
#include <QDialog>
using namespace std;
class adminpage;
class userPage;
class allApartments;
namespace Ui {
class ComparePage;
}

class ComparePage : public QDialog
{
    Q_OBJECT

public:
    explicit ComparePage(const vector<string> &selectedProperties, QWidget *parent = nullptr);
    void displaySelectedProperties(const vector<string> &selectedProperties);
    vector<QString> imagePaths;
    vector<QString> imagePaths2;
    vector<QString> imagePaths3;
    vector<QString> imagePaths4;
    void updateImage();
    void updateImage2();
    void updateImage3();
    void updateImage4();

    ~ComparePage();

protected:
     void closeEvent(QCloseEvent *event) override;
private slots:
    void on_home_clicked();

    void on_back_clicked();

    void on_previous_clicked();

    void on_next_clicked();

    void on_previous_2_clicked();

    void on_next_2_clicked();

    void on_previous_3_clicked();

    void on_next_3_clicked();

    void on_previous_4_clicked();

    void on_next_4_clicked();

private:
    Ui::ComparePage *ui;
    userPage* userpage;
    adminpage* adminpage;
    allApartments* allaprtments;
};

#endif // COMPAREPAGE_H
