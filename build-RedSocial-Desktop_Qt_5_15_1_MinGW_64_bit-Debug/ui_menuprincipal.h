/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName(QString::fromUtf8("MenuPrincipal"));
        MenuPrincipal->resize(388, 410);
        MenuPrincipal->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: black;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(MenuPrincipal);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(MenuPrincipal);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 368, 328));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(MenuPrincipal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color: light orange;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(MenuPrincipal);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color: light orange;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(MenuPrincipal);

        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QDialog *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QCoreApplication::translate("MenuPrincipal", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MenuPrincipal", "Amigos", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MenuPrincipal", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
