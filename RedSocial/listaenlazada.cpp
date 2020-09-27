#include "listaenlazada.h"
#include <iostream>

using namespace std;

template<typename T> ListaEnlazada<T>::ListaEnlazada()
{
    head = NULL;
    last = NULL;
}
template<typename T>
void ListaEnlazada<T>::InsertarNodoFin(Nodo<T>* no)
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
