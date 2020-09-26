#ifndef REGISTRARSEFORM_H
#define REGISTRARSEFORM_H

#include <QDialog>
#include "menuprincipal.h"
#include "redsocial.h"

namespace Ui {
class RegistrarseForm;
}

class RegistrarseForm : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarseForm(QWidget *parent = nullptr);
    ~RegistrarseForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RegistrarseForm *ui;
};

#endif // REGISTRARSEFORM_H
