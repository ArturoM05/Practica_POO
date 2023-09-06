//
// Created by Arturo on 5/09/2023.
//

#ifndef UNTITLED_LIST2LINKED_H
#define UNTITLED_LIST2LINKED_H
#include "Nodo.h"

class list2linked {

    public: string cientificos[2];
        Nodo *head;
        list2linked();
        // Insertar un nuevo nodo en la posicion inicial
        void insert(int value);

        // Mostrar los nodos de la lista
        void display();

        // Crea nueva lista
        void crearlista();

};


#endif //UNTITLED_LIST2LINKED_H
