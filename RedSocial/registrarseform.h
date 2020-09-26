#ifndef REGISTRARSEFORM_H
#define REGISTRARSEFORM_H

#include <QDialog>

namespace Ui {
class RegistrarseForm;
}

class RegistrarseForm : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarseForm(QWidget *parent = nullptr);
    ~RegistrarseForm();

private:
    Ui::RegistrarseForm *ui;
};

#endif // REGISTRARSEFORM_H
