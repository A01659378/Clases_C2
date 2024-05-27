#ifndef _PINGUINO_H_
#define _PINGUINO_H_
#include <iostream>
#include <string>
#include "ave.h"
using std::cout;
using std::string;

class Pinguino : public Ave{
    public:
    string nombre;
    Pinguino(string n);
    void volar();
};

#endif