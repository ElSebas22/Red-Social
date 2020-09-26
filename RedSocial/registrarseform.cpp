#include "registrarseform.h"
#include "ui_registrarseform.h"

RegistrarseForm::RegistrarseForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarseForm)
{
    ui->setupUi(this);
}

RegistrarseForm::~RegistrarseForm()
{
    delete ui;
}

void RegistrarseForm::on_pushButton_clicked()
{
    MenuPrincipal *menu = new MenuPrincipal(0);
    this->close();
    menu->show();
}

void RegistrarseForm::on_pushButton_2_clicked()
{
    RedSocial *reds = new RedSocial(0);
    this->close();
    reds->show();
}
