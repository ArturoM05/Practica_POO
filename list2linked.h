// Paquetes y librerias
#ifndef UNTITLED_LIST2LINKED_H
#define UNTITLED_LIST2LINKED_H
#include "Nodo.h"

// Clase lista doblemente enlazada
class list2linked {
public:
    // Atributos
    string cientificos[2] = {"Einsten", "Rosen"};
    Nodo *head;

    // Constructor
    list2linked();

    // Metodos de trabajo
    // Crea nueva lista
    void crearlista();

    // metodo para comprobar si un numero es primo
    bool isPrime(int num);

    // metodo para comprobar si un par de numeros son co-primo
    bool isCoPrime(int num1, int num2);

    // Mostrar los nodos de la lista
    void display();

    // Identificar el tipo del nodo
    void searchEvent(Nodo* temp);

    //metodo para comprobar si ha habido un evento x previo al evento actual
    Nodo* searchEventX(Nodo* node, string event);
};

#endif //UNTITLED_LIST2LINKED_H
