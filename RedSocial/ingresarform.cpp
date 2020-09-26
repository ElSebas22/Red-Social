#include "ingresarform.h"
#include "ui_ingresarform.h"

IngresarForm::IngresarForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IngresarForm)
{
    ui->setupUi(this);
}

IngresarForm::~IngresarForm()
{
    delete ui;
}

void IngresarForm::on_pushButton_clicked()
{
    MenuPrincipal *menu = new MenuPrincipal(0);
    this->close();
    menu->show();
}

void IngresarForm::on_pushButton_2_clicked()
{
    RedSocial *reds = new RedSocial(0);
    this->close();
    reds->show();
}
