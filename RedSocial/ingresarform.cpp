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
