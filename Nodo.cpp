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

// Getters & Setters
const string &Nodo::getType() const {
    return type;
}

void Nodo::setType(const string &type) {
    Nodo::type = type;
}

int Nodo::getData() const {
    return data;
}

void Nodo::setData(int data) {
    Nodo::data = data;
}

const string &Nodo::getCientifico() const {
    return cientifico;
}

void Nodo::setCientifico(const string &cientifico) {
    Nodo::cientifico = cientifico;
}

Nodo *Nodo::getPrev() const {
    return prev;
}

void Nodo::setPrev(Nodo *prev) {
    Nodo::prev = prev;
}

Nodo *Nodo::getNext() const {
    return next;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}
