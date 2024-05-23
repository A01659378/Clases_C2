#include "aguila.h"
#include <string>

Aguila::Aguila(){
    
}
Aguila::Aguila(string nombre) : Ave(nombre){
    nombre = nombre;
}
void Aguila::volar(){
    Ave::volar();
    cout << "Soy una ave llamda " << nombre << "y vuelo , además soy la más rápida" << endl;
}