//
// Created by Arturo on 5/09/2023.
//

#ifndef UNTITLED_LIST2LINKED_H
#define UNTITLED_LIST2LINKED_H
#include "Nodo.h"

class list2linked {
public:
    string cientificos[2] = {"Einsten", "Rosen"};
    Nodo *head;
    list2linked();

    // Mostrar los nodos de la lista
    void display();

    // Crea nueva lista
    void crearlista();

    // Identificar el tipo del nodo
    void searchEvent(Nodo* temp);

    // metodo para comprobar si un numero es primo
    bool isPrime(int num);

    // metodo para comprobar si un par de numeros son co-primo
    bool isCoPrime(int num1, int num2);

    //metodo para comprobar si ha habido un evento x previo al evento actual
    Nodo* searchEventX(Nodo* node, string event);
};


#endif //UNTITLED_LIST2LINKED_H
