#include "ave.h"
#include "pinguino.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

Pinguino::Pinguino(string nom){
    nombre = nom;
}

void Pinguino::volar(){
    cout << "Si soy una ave pero NO vuelo" << endl;
}