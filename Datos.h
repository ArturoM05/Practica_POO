#ifndef UNTITLED_DATOS_H
#define UNTITLED_DATOS_H
#include <string>
using namespace std;

//Clase Datos
class Datos {
private:
    //Atributos
    string tipo;
    int data;
    string cientifico;

public:
    //Constructor
    Datos();

    //Getters y Setters
    string getTipo();
    int getData();
    string getCientifico();
    void setCientifico(string cientifico);

    //Metodos
    void eleccionCientifico();
    bool esprimo(int num);
    void tostring();
};


#endif //UNTITLED_DATOS_H