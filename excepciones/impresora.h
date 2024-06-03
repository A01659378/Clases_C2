#ifndef _IMPRESORA_H_
#define _IMPRESORA_H_

#include <string>
using std::string;

class Impresora{
    private:
        int numHojas;
        string nombre;
        public:
        Impresora(string nom, int nh);
        void imprimir(string txt);
        void recargar(int num);

};

#endif