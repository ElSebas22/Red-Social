#include "menuprincipal.h"
#include "ui_menuprincipal.h"

MenuPrincipal::MenuPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuPrincipal)
{
    ui->setupUi(this);
}

MenuPrincipal::~MenuPrincipal()
{
    delete ui;
}
