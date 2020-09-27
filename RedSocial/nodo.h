#ifndef NODO_H
#define NODO_H

template<typename N>
class Nodo
{
public:
    N data;
    Nodo* next;
    Nodo(N valor);
};

#endif // NODO_H
