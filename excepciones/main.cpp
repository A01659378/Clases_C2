#include "impresora.h"
#include "miexcepcion.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


int main(){
    Impresora impresora("HP", 20);
    try{
        impresora.imprimir("Espero que funcione");
        impresora.imprimir("La frase es de la comerciante Griselda Martínez, una mujer clásica istmeña, zapoteca: fuerte, luchadora, aguerrida, independiente, empoderada, es como se describe a sí misma.");
    }catch(string &mensaje){
        cout << "Atrapado en la excepción string " << mensaje << endl;
    }catch(const char *mensaje){
        cout << "Atrapado en cadena de caracteres" << mensaje << endl;
    }catch(Miexcepcion &excep){
        cout << "Atrapé una Miexcepción " << endl;
        excep.imprimir();
    }catch(...){
        cout << "Atrapé la excepcion en el cachatodo" << endl;
    }
    return 0;
}