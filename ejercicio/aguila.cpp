#include "ave.h"
#include "aguila.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

Aguila::Aguila(string nom) {
    nombre = nom;
}

void volar(){
    cout << "Soy un ave y vuelo";
    cout << " y soy la más rápida" << endl;
}