// Paquetes y librerias
#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H
#include <string>
using namespace std;

// Clase Nodo
class Nodo {
private:
    // Atributos
    string type;
    int data = 0;
    string cientifico;
    Nodo *next;
    Nodo *prev;

public:
    // Constructor
    Nodo(int data, string cientifico);

    // Metodo para mostrar el nodo
    void toString();

    //Setters & Getters
    const string &getType() const;

    void setType(const string &type);

    Nodo *getPrev() const;

    void setPrev(Nodo *prev);

    int getData() const;

    void setData(int data);

    Nodo *getNext() const;

    void setNext(Nodo *next);

    const string &getCientifico() const;

    void setCientifico(const string &cientifico);
};

#endif //UNTITLED_NODO_H
