//
// Created by Arturo on 5/09/2023.
//

#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H
#include <string>

using namespace std;

class Nodo {
public:
    string tipo;
    int data;
    Nodo *next;
    Nodo *prev;
    Nodo(int data, string tipo);
};


#endif //UNTITLED_NODO_H
