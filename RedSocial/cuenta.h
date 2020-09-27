#ifndef NODO_H
#define NODO_H

#include <QString>

class Cuenta
{
public:
    QString usuario;
    QString contra;
    QString correo;
    Cuenta* next;
    Cuenta();
    Cuenta(QString usuario, QString contra, QString correo, Cuenta* next):
        usuario(usuario), contra(contra), correo(correo), next(next){}

};

#endif // NODO_H
