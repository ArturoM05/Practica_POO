#include <ctime>
#include "Datos.h"
#include <cstdlib>
#include <iostream>
using namespace std;

// Constructor
Datos::Datos() {
    std::srand(static_cast<unsigned int>(time(nullptr)));
    this->tipo = "";
    this->data = (rand() % 20) + 1;
    this->cientifico = "";

}

// Getters and Setters

string Datos::getTipo() {
    return this->tipo;
}

int Datos::getData() {
    return this->data;
}

string Datos::getCientifico() {
    return this->cientifico;
}

void Datos::setCientifico(string cientifico) {
    this->cientifico = cientifico;
}

// Metodos
bool Datos::esprimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void Datos::eleccionCientifico() {
    //Array de cientificos
    string* cientChoices = new string[2]{"Einstein", "Rosen"};

    //Random choice (Sin la linea de abajo, siempre salia el mismo cientifico)
    std::srand(static_cast<unsigned int>(time(nullptr)));
    int randomChoice = rand() % 2;

    //Comprobacion de si el numero es primo
    bool datafinal = esprimo(data);
    if (datafinal) {
        this->cientifico = cientChoices[0];
    } else {
        setCientifico(cientChoices[randomChoice]);
    }

}

// Metodo tostring
void Datos::tostring() {
    cout << "Tipo: " << tipo << endl;
    cout << "Data: " << data << endl;
    cout << "Cientifico: " << cientifico << endl;
}