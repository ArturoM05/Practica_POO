#include "Nodo.h"

Nodo::Nodo(){
    this->next = nullptr;
    this->prev = nullptr;
}

void Nodo::tostring(){
    this->dato.tostring();
}
