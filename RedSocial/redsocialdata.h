#ifndef REDSOCIALDATA_H
#define REDSOCIALDATA_H
#include "cuenta.h"


class RedSocialData
{
public:
    RedSocialData();
    void GuardarCuenta(Cuenta* no);
    void LeerArchivo();
    void AgregarCuentas(Cuenta* c);
};

#endif // REDSOCIALDATA_H
