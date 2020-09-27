#include "redsocialdata.h"
#include <stdlib.h>
#include <QString>
#include <QFile>
#include "cuenta.h"

RedSocialData::RedSocialData()
{

}
void RedSocialData::GuardarCuenta(Cuenta* no)
{
    QFile archivo("C:/Users/Miguel/Desktop/2020-02/Algoritmos/Red-Social/Red-Social/RedSocial/cuentas.txt");
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);

    QString contenido = no->usuario + "," + no->correo + ";" + no->contra;
    QByteArray cont = contenido.toUtf8();

    //archivo.write(cont);
    archivo.write("A\nB");
    archivo.flush();
    archivo.close();
}
void RedSocialData::LeerArchivo()
{

}
void RedSocialData::AgregarCuentas(Cuenta* nuevacuenta)
{
    GuardarCuenta(nuevacuenta);
}
