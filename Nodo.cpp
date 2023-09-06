//
// Created by Arturo on 5/09/2023.
//

#include "Nodo.h"
Nodo::Nodo(int data, string cientifico)
{
    this->tipo = "";
    this->data = data;
    this->cientifico = cientifico;
    this->next = nullptr;
    this->prev = nullptr;
}
