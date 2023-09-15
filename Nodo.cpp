#include "Nodo.h"
#include <iostream>


Nodo::Nodo(int data, string cientifico) {
    this->type = "";
    this->data = data;
    this->cientifico = cientifico;
    this->next = nullptr;
    this->prev = nullptr;
}
void Nodo::toString(){
    if(this->type =="C"){
        cout<<"["<<this->data<<"|"<<this->cientifico<<"|"<<this->type<<"]"<<"->"<<endl;
    }else{
        cout<<"["<<this->data<<"|"<<this->cientifico<<"|"<<this->type<<"]"<<"->";
    }
}
