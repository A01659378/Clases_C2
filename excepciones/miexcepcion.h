#ifndef _MIEXCEPCION_H_
#define _MIEXCEPCION_H_
#include <exception>
#include <iostream>
#include <string>
using std::string;
using std::exception;
class Miexcepcion : public exception{
    private:
        string mensaje;
    public:
    Miexcepcion(string msg);
    void imprimir();
};

#endif
