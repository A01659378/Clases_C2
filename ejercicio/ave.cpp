#include "ave.h"
#include <string>

Ave::Ave(){
    nombre = "a";
}
Ave::Ave(string nombre){
    nombre = nom;
}

void Ave::volar(){
    cout << "Soy una ave llamada " << nombre << "y vuelo" << endl;
}