#ifndef NODO_H
#define NODO_H

#include <QString>

class Nodo
{
public:
    QString usuario;
    QString contra;
    QString correo;
    Nodo* next;
    Nodo();
    Nodo(QString usuario, QString contra, QString correo, Nodo* next):
        usuario(usuario), contra(contra), correo(correo), next(next){}

};

#endif // NODO_H
