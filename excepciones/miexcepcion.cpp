#include "miexcepcion.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl; 
Miexcepcion::Miexcepcion(string msg){
     mensaje = msg;
}

void Miexcepcion::imprimir(){
    cout << mensaje << endl;
}
