#include "nodo.h"

template<typename N> Nodo<N>::Nodo(N valor)
{
    data = valor;
    next = nullptr;
}
