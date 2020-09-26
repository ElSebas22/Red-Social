/********************************************************************************
** Form generated from reading UI file 'registrarseform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARSEFORM_H
#define UI_REGISTRARSEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistrarseForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegistrarseForm)
    {
        if (RegistrarseForm->objectName().isEmpty())
            RegistrarseForm->setObjectName(QString::fromUtf8("RegistrarseForm"));
        RegistrarseForm->setWindowModality(Qt::ApplicationModal);
        RegistrarseForm->resize(400, 300);
        RegistrarseForm->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: black;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(RegistrarseForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RegistrarseForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(RegistrarseForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(RegistrarseForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(RegistrarseForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(RegistrarseForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: orange;\n"
"border: 1px solid black;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(RegistrarseForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(RegistrarseForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RegistrarseForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegistrarseForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegistrarseForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegistrarseForm);
    } // setupUi

    void retranslateUi(QDialog *RegistrarseForm)
    {
        RegistrarseForm->setWindowTitle(QCoreApplication::translate("RegistrarseForm", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrarseForm", "Usuario:", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrarseForm", "Contrase\303\261a:", nullptr));
        label->setText(QCoreApplication::translate("RegistrarseForm", "Repetir contrase\303\261a:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrarseForm: public Ui_RegistrarseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARSEFORM_H
