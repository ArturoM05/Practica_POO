//Paquetes y librerias
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list2linked.h"
using namespace std;

// Constructor
list2linked::list2linked() {
    this->head = nullptr;
}


// Metodos de trabajo

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
            node->setNext(this->head);

            //Cuando la lista no esta vacía
            if(this->head != nullptr){
                this->head->setPrev(node);
            }

            // Asignamos al nuevo nodo como la cabeza 
            this->head= node;
            // Buscamos el tipo del evento
            this->searchEvent(node);
        }
        x++;
    } while (x <= 22);
}


// Identificar si el numero ingresado es primo
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


// Identificar si un par de numeros ingresado son co-primos
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


// Mostrar elementos de la lista doblemente enlazada
void list2linked::display(){
    if (this->head == nullptr){
        cout << "La lista está vacía" << endl;
    }else{
        cout << "\n" << "Linea del tiempo:"  << endl;
        cout << "-------------------------" << endl;
        cout << "Total de eventos: " << 22 << endl;
        // Obtener el primer nodo de la lista
        Nodo *temp = this->head;
        // iterar la lista
        while (temp != nullptr)
        {
            // Mostrar el valor del nodo
            if(temp->getType() != ""){
                cout<< "<-"<< "[" << temp->getData() << "|" << temp->getCientifico() <<"|"<< temp->getType()<< "]";
            }else{
                cout<< "<-"<<"[" << temp->getData() << "|" << temp->getCientifico() <<"]";
            }
            // Visita el siguiente nodo
            temp = temp->getNext();
        }
    }
}


// Identificamos el evento que ocurrio en el nodo dado
void list2linked::searchEvent(Nodo* node){
    Nodo* eventA = this->searchEventX(node, "A");
    if(eventA != nullptr){
        Nodo* eventB = this->searchEventX(node, "B");
        if(this->isPrime(node->getData())){
            if(eventB != nullptr){
                cout<<"\n"<<"Se ha producido un evento tipo C: "<<node->getData()<<endl;
                node->setType("C");
                eventA->toString();
                eventB->toString();
                node->toString();
                if(this->isCoPrime(eventA->getData(), node->getData())){
                    cout<<"\n"<<"Se ha viajado en el tiempo y se han compartido datos"<<endl;
                } else{
                    cout<<"\n"<<"Se ha viajado en el tiempo y No se han compartido datos"<<endl;
                }
            }else{
                cout<<"\n"<<"Se ha producido un evento tipo B: "<<node->getData()<<endl;
                node->setType("B");
                eventA->toString();
                node->toString();}
        }else if(this->isCoPrime(eventA->getData(), node->getData())){
            if(eventB != nullptr){
                cout<<"\n"<<"Se ha producido un evento tipo C: "<<node->getData()<<endl;
                node->setType("C");
                eventA->toString();
                eventB->toString();
                node->toString();
                if(this->isPrime(node->getData())){
                    cout<<"\n"<<"Se ha viajado en el tiempo y se han compartido datos"<<endl;
                } else{
                    cout<<"\n"<<"Se ha viajado en el tiempo y No se han compartido datos"<<endl;
                }
            }
        }
    }else if(this->isPrime(node->getData())){
        if(node->getCientifico() == "Einsten"){
            cout<<"\n"<<"Se ha producido un evento tipo A: "<<node->getData()<<endl;
            node->setType("A");
            node->toString();
        }
    }

}


//metodo para comprobar si ha habido un evento x previo al evento actual
Nodo* list2linked::searchEventX(Nodo *node, string event){
    Nodo* temp = node;

    while(temp!=nullptr){
        if(temp->getNext() == nullptr || temp->getNext()->getType() == "C"){
            return nullptr;
        }

        if(temp->getNext()->getType()== event){
            return temp->getNext();
        }
        temp= temp->getNext();
    }
    return nullptr;
}

