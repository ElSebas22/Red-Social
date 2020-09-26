#ifndef INGRESARFORM_H
#define INGRESARFORM_H

#include <QDialog>
#include "menuprincipal.h"
#include "redsocial.h"

namespace Ui {
class IngresarForm;
}

class IngresarForm : public QDialog
{
    Q_OBJECT

public:
    explicit IngresarForm(QWidget *parent = nullptr);
    ~IngresarForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::IngresarForm *ui;
};

#endif // INGRESARFORM_H
