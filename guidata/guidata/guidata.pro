QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminpage.cpp \
    adpartment.cpp \
    allapartments.cpp \
    comparepage.cpp \
    editapartment.cpp \
    edituser.cpp \
    information.cpp \
    login.cpp \
    main.cpp \
    property.cpp \
    propertylist.cpp \
    sign_up.cpp \
    user.cpp \
    userpage.cpp \
    users.cpp \
    userslist.cpp

HEADERS += \
    adminpage.h \
    adpartment.h \
    allapartments.h \
    comparepage.h \
    editapartment.h \
    edituser.h \
    information.h \
    login.h \
    property.h \
    propertylist.h \
    sign_up.h \
    user.h \
    userpage.h \
    users.h \
    userslist.h

FORMS += \
    adminpage.ui \
    adpartment.ui \
    allapartments.ui \
    comparepage.ui \
    editapartment.ui \
    edituser.ui \
    information.ui \
    login.ui \
    sign_up.ui \
    userpage.ui \
    users.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
