//
// Created by Arturo on 5/09/2023.
//
#include <iostream>
#include <cstdlib>
#include "list2linked.h"


using namespace std;

list2linked::list2linked() {
    this->head = nullptr;
}

// Crea una nueva lista
void list2linked::crearlista() {
    int x=0;
    do {
        if (x != 22) {
            // Creamos un nuevo nodo
            Nodo*node = new Nodo();
            node->next = this->head; 
            //Cuando la lista no esta vacía
            if(this->head != nullptr){
                this->head->prev = node;
            }
            // Asignamos al nuevo nodo como la cabeza 
            this->head= node;
        }
        x++;
    } while (x <= 22);
}
// Insertar un nuevo nodo al inicio


// Mostrar elementos de la lista doblemente enlazada
void list2linked:: display()
{
    if (this->head == nullptr)
    {
        cout << "La lista está vacía" << endl;
    }
    else
    {
        cout << " Elementos de la lista doblemente enlazada:" << endl;
        // Obtener el primer nodo de la lista
        Nodo *temp = this->head;
        // iterate linked list
        while (temp != nullptr)
        {
            // Mostrar el valor del nodo
            // Visita el siguiente nodo
            temp = temp->next;
        }
    }
}
