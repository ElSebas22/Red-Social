#include "listacuentas.h"
#include <iostream>
#include <stdlib.h>
#include <QString>
#include <QFile>

using namespace std;

ListaCuentas::ListaCuentas()
{
    head = NULL;
    last = NULL;
}
void ListaCuentas::InsertarNodo(Nodo* no)
{
    if(head == NULL){
        head = no;
        last = no;
    }
    else{
        last->next = no;
        last=no;
    }
}
void ListaCuentas::CargarNodos(Nodo* no)
{
    QFile archivo("C:/Users/Miguel/Desktop/2020-02/Algoritmos/Red-Social/Red-Social/RedSocial/cuentas.txt");
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);

    QString contenido = no->usuario + "," + no->correo + "," + no->contra + "\n";
    QByteArray cont = contenido.toUtf8();;

    archivo.write(cont);
    archivo.flush();
    archivo.close();
}
void ListaCuentas::LeerArchivo(){

}
