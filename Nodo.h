// Paquetes y librerias
#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H
#include <string>
using namespace std;

// Clase Nodo
class Nodo {
public:

    // Atributos
    string type;
    int data = 0;
    string cientifico;
    Nodo *next;
    Nodo *prev;

    // Constructor
    Nodo(int data, string cientifico);

    // Metodo para mostrar el nodo
    void toString();
};

#endif //UNTITLED_NODO_H
