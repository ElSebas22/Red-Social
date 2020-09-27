#ifndef LISTACUENTAS_H
#define LISTACUENTAS_H
#include "nodo.h"

template<typename T>
class ListaEnlazada
{
public:
    T* head;
    T* last;
    ListaEnlazada();
    void InsertarNodoFin(Nodo<T>* no);

};

#endif // LISTACUENTAS_H
