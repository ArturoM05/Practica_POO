// Paquetes y librerias
#include "Nodo.h"
#include <iostream>

// Constructor
Nodo::Nodo(int data, string cientifico) {

    // Inicialización de los atributos
    this->type = "";
    this->data = data;
    this->cientifico = cientifico;
    this->next = nullptr;
    this->prev = nullptr;
}


// Metodo para mostrar el nodo
void Nodo::toString() {
    if(this->type =="C"){
        cout<<"["<<this->data<<"|"<<this->cientifico<<"|"<<this->type<<"]"<<"->"<<endl;
    }else{
        cout<<"["<<this->data<<"|"<<this->cientifico<<"|"<<this->type<<"]"<<"->";
    }
}
