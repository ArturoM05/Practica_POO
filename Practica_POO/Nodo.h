#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H
#include <string>
#include "Datos.h"
using namespace std;

class Nodo {
public:
    Datos dato;
    Nodo *next;
    Nodo *prev;
    Nodo();
    void tostring();
};




#endif //UNTITLED_NODO_H
