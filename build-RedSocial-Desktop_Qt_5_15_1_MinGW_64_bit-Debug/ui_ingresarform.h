/********************************************************************************
** Form generated from reading UI file 'ingresarform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESARFORM_H
#define UI_INGRESARFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IngresarForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IngresarForm)
    {
        if (IngresarForm->objectName().isEmpty())
            IngresarForm->setObjectName(QString::fromUtf8("IngresarForm"));
        IngresarForm->setWindowModality(Qt::ApplicationModal);
        IngresarForm->resize(394, 170);
        IngresarForm->setAutoFillBackground(false);
        IngresarForm->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: black;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(IngresarForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(IngresarForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(IngresarForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(IngresarForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(IngresarForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(IngresarForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IngresarForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), IngresarForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IngresarForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(IngresarForm);
    } // setupUi

    void retranslateUi(QDialog *IngresarForm)
    {
        IngresarForm->setWindowTitle(QCoreApplication::translate("IngresarForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("IngresarForm", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("IngresarForm", "Contrase\303\261a:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IngresarForm: public Ui_IngresarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESARFORM_H
