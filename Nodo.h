#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H
#include <string>
#include "Datos.h"
using namespace std;

class Nodo {
public:
    string type;
    int data = 0;
    string cientifico;
    Nodo *next;
    Nodo *prev;
    Nodo(int data, string cientifico);
    void toString();
};

#endif //UNTITLED_NODO_H
