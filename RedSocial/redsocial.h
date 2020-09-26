#ifndef REDSOCIAL_H
#define REDSOCIAL_H

#include <QMainWindow>
#include "registrarseform.h"
#include "ingresarform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class RedSocial; }
QT_END_NAMESPACE

class RedSocial : public QMainWindow
{
    Q_OBJECT

public:
    RedSocial(QWidget *parent = nullptr);
    ~RedSocial();

private slots:
    void on_Registrarse_clicked();

    void on_Ingresar_clicked();

private:
    Ui::RedSocial *ui;
};
#endif // REDSOCIAL_H
