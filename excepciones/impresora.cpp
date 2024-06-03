#include "impresora.h"
#include "miexcepcion.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Impresora::Impresora(string nom, int nh){
    nombre = nom;
    numHojas = nh;
}

void Impresora::imprimir(string txt){
    int hojasUsadas = txt.size()/2;
    if (hojasUsadas > numHojas) { 
        Miexcepcion excep("Hubo una excepcion");
        throw (excep);
        //throw ("Hojas insuficientes");
        //string mensaje = "Hojas insuficientes";
        //throw (mensaje):
    }
    cout << "Imprimiendo... " << txt << endl;
    cout << "Utilizando ... " << hojasUsadas << endl;
    numHojas -= hojasUsadas;
    cout << "Quedan: " << numHojas << endl;
}

void Impresora::recargar(int num){
    numHojas += num;
}