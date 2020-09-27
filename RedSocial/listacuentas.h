#ifndef LISTACUENTAS_H
#define LISTACUENTAS_H
#include "nodo.h"

class ListaCuentas
{
public:
    Nodo* head;
    Nodo* last;
    ListaCuentas();
    void InsertarNodo(Nodo* no);
    void CargarNodos(Nodo* no);
    void LeerArchivo();
};

#endif // LISTACUENTAS_H
