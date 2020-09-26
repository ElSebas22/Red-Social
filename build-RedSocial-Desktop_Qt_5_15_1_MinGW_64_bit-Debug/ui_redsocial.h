/********************************************************************************
** Form generated from reading UI file 'redsocial.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDSOCIAL_H
#define UI_REDSOCIAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedSocial
{
public:
    QWidget *centralwidget;
    QPushButton *Ingresar;
    QPushButton *Registrarse;
    QLabel *Nombre;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RedSocial)
    {
        if (RedSocial->objectName().isEmpty())
            RedSocial->setObjectName(QString::fromUtf8("RedSocial"));
        RedSocial->setWindowModality(Qt::WindowModal);
        RedSocial->resize(508, 371);
        QIcon icon;
        icon.addFile(QString::fromUtf8("al-reves.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RedSocial->setWindowIcon(icon);
        RedSocial->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: black;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));
        centralwidget = new QWidget(RedSocial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Ingresar = new QPushButton(centralwidget);
        Ingresar->setObjectName(QString::fromUtf8("Ingresar"));
        Ingresar->setGeometry(QRect(170, 160, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Ingresar->setFont(font);
        Ingresar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color: light orange;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));
        Registrarse = new QPushButton(centralwidget);
        Registrarse->setObjectName(QString::fromUtf8("Registrarse"));
        Registrarse->setGeometry(QRect(170, 210, 151, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Registrarse->setFont(font1);
        Registrarse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color: light orange;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));
        Nombre = new QLabel(centralwidget);
        Nombre->setObjectName(QString::fromUtf8("Nombre"));
        Nombre->setGeometry(QRect(60, 40, 391, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans Ultra Bold"));
        font2.setPointSize(36);
        Nombre->setFont(font2);
        Nombre->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 110, 271, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font3.setPointSize(12);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        RedSocial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RedSocial);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 508, 33));
        RedSocial->setMenuBar(menubar);
        statusbar = new QStatusBar(RedSocial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RedSocial->setStatusBar(statusbar);

        retranslateUi(RedSocial);

        QMetaObject::connectSlotsByName(RedSocial);
    } // setupUi

    void retranslateUi(QMainWindow *RedSocial)
    {
        RedSocial->setWindowTitle(QCoreApplication::translate("RedSocial", "RedSocial", nullptr));
        Ingresar->setText(QCoreApplication::translate("RedSocial", "Ingresar", nullptr));
        Registrarse->setText(QCoreApplication::translate("RedSocial", "Registrarse", nullptr));
        Nombre->setText(QCoreApplication::translate("RedSocial", "Social-Tube", nullptr));
        label_2->setText(QCoreApplication::translate("RedSocial", "\"Where the real friendship starts\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedSocial: public Ui_RedSocial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDSOCIAL_H
