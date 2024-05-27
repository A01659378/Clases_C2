#ifndef _AGUILA_H_
#define _AGUILA_H_
#include <iostream>
#include <string>
#include "ave.h"
using std::cout;
using std::string;

class Aguila : public Ave{
    public:
    string nombre;
    Aguila(string n);
    void volar();
};

#endif