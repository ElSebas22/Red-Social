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
