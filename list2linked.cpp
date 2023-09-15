//
// Created by Arturo on 5/09/2023.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list2linked.h"

using namespace std;

list2linked::list2linked() {
    this->head = nullptr;
}

// Crea una nueva lista
void list2linked::crearlista() {
    int x=0;
    // Definimos una semilla para la generacion de numeros pseudoaleatorios
    srand(static_cast<unsigned int>(std::time(nullptr)));
    do {
        if (x != 22) {
            // Creamos los datos del nodo
            int dato = rand() % 101;
            string cientifico = this->cientificos[rand() % 2];
            // Creamos un nuevo nodo
            Nodo*node = new Nodo(dato, cientifico);
            node->next = this->head;
            //Cuando la lista no esta vacía
            if(this->head != nullptr){
                this->head->prev = node;
            }
            // Asignamos al nuevo nodo como la cabeza 
            this->head= node;
            // Buscamos el tipo del evento
            this->searchEvent(node);
        }
        x++;
    } while (x <= 22);
}


// Mostrar elementos de la lista doblemente enlazada
void list2linked::display()
{
    if (this->head == nullptr){
        cout << "La lista está vacía" << endl;
    }else{
        cout << "\n" << " Linea del tiempo:"  << endl;
        // Obtener el primer nodo de la lista
        Nodo *temp = this->head;
        // iterate linked list
        while (temp != nullptr)
        {
            // Mostrar el valor del nodo
            if(temp->type != ""){
                cout<< "<-"<< "[" << temp->data << "|" << temp->cientifico <<"|"<< temp->type<< "]";
            }else{
                cout<< "<-"<<"[" << temp->data << "|" << temp->cientifico <<"]";
            }
            // Visita el siguiente nodo
            temp = temp->next;
        }
    }
}

// Identificamos el evento que ocurrio en el nodo dado
void list2linked::searchEvent(Nodo* node){
    Nodo* eventA = this->searchEventX(node, "A");
    if(eventA != nullptr){
        Nodo* eventB = this->searchEventX(node, "B");
        if(this->isPrime(node->data)){
            if(eventB != nullptr){
                cout<<"\n"<<"Se a producido un evento tipo C: "<<node->data<<endl;
                node->type = "C";
                eventA->toString();
                eventB->toString();
                node->toString();
            }else{
                cout<<"\n"<<"Se a producido un evento tipo B: "<<node->data<<endl;
                node->type = "B";
                eventA->toString();
                node->toString();}
        }else if(this->isCoPrime(eventA->data, node->data)){
            if(eventB != nullptr){
                cout<<"\n"<<"Se a producido un evento tipo C: "<<node->data<<endl;
                node->type = "C";
                eventA->toString();
                eventB->toString();
                node->toString();
            }
        }
    }else if(this->isPrime(node->data)){
        if(node->cientifico == "Einsten"){
            cout<<"\n"<<"Se a producido un evento tipo A: "<<node->data<<endl;
            node->type = "A";
            node->toString();
        }
    }

}

// Idetificar si el numero ingresado es primo
bool list2linked::isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
// Idetificar si un par de numeros ingresado son co-primos
bool list2linked::isCoPrime(int num1, int num2){
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    if (num1 == 1) {
        return true;
    }
    return false;
}

//metodo para comprobar si ha habido un evento x previo al evento actual
Nodo* list2linked::searchEventX(Nodo *node, string event){
    Nodo* temp = node;
    while(temp!=nullptr){
        if(temp->next == nullptr || temp->next->type == "C"){
            return nullptr;
        }
        if(temp->next->type == event){
            return temp->next;
        }
        temp= temp->next;
    }
    return nullptr;
}
