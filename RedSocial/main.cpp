#include "redsocial.h"
#include "listaenlazada.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RedSocial w;
    w.show();
    return a.exec();
}
