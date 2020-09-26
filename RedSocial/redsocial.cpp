#include "redsocial.h"
#include "ui_redsocial.h"

RedSocial::RedSocial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RedSocial)
{
    ui->setupUi(this);
}

RedSocial::~RedSocial()
{
    delete ui;
}


void RedSocial::on_Registrarse_clicked()
{
    RegistrarseForm *reg = new RegistrarseForm(0);
    reg->show();
}

void RedSocial::on_Ingresar_clicked()
{
    IngresarForm *ing = new IngresarForm(0);
    ing->show();
}
