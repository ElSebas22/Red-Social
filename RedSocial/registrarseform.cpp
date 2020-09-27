#include "registrarseform.h"
#include "ui_registrarseform.h"
#include "listacuentas.h"
#include <iostream>
#include <QString>
#include "redsocial.h"

ListaCuentas* LC;

RegistrarseForm::RegistrarseForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarseForm)
{
    ui->setupUi(this);
    LC = new ListaCuentas();
    //cARGAR LISTA
}

RegistrarseForm::~RegistrarseForm()
{
    delete ui;
}

void RegistrarseForm::on_pushButton_clicked()
{
    QString o1 = ui->lineEdit_3->text();
    QString o2 = ui->lineEdit->text();
    if(o1 == o2){
        Nodo* n = new Nodo();
        n->usuario = ui->lineEdit_2->text();
        n->correo = ui->lineEdit_4->text();
        n->contra = ui->lineEdit_3->text();

        LC->InsertarNodo(n);
        LC->CargarNodos(n);

        MenuPrincipal *menu = new MenuPrincipal(0);
        this->close();
        menu->show();
    }
}

void RegistrarseForm::on_pushButton_2_clicked()
{
    RedSocial *reds = new RedSocial(0);
    this->close();
    reds->show();
}
