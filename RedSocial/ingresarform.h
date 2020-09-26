#ifndef INGRESARFORM_H
#define INGRESARFORM_H

#include <QDialog>

namespace Ui {
class IngresarForm;
}

class IngresarForm : public QDialog
{
    Q_OBJECT

public:
    explicit IngresarForm(QWidget *parent = nullptr);
    ~IngresarForm();

private:
    Ui::IngresarForm *ui;
};

#endif // INGRESARFORM_H
