//
// Created by Arturo on 5/09/2023.
//

#include "Nodo.h"
Nodo::Nodo(int data, string tipo)
{
    this->tipo = tipo;
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}
