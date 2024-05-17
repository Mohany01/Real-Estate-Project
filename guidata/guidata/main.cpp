#include "allapartments.h"
#include "login.h"
#include "userpage.h"
#include "userslist.h"
#include <QApplication>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include "propertylist.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   MainWindow w;

   UsersList::LoadUsers("helal.txt");
   propertylist::loadUserProperties("user_properties.txt");
    if(UsersList::CheckUsername("1"))
     {
     }
    else
    {
        UsersList::_register("Admin","Admin","1","1","01281868547");
    }
     w.setWindowOpacity(0.0);


   w.show();
     QPropertyAnimation *fadeInAnimation = new QPropertyAnimation(&w, "windowOpacity");
     fadeInAnimation->setDuration(500); // Set animation duration in milliseconds
     fadeInAnimation->setStartValue(0.0);
     fadeInAnimation->setEndValue(1.0);
     fadeInAnimation->start(QAbstractAnimation::DeleteWhenStopped);
    return a.exec();
}
