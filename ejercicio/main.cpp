#include <iostream>
#include <string>
#include <vector>

#include "ave.h"
#include "aguila.h"
#include "pinguino.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(){
 //Ave avechucho("Ave genérica");
   // avechcucho.volar();

   Aguila america("América");
   //america.volar();

   Ave * apAve;

   //apAve = &avechucho;
   //apAve->volar();

   apAve = &america;
   apAve->volar(); //como apAve apunta a america, va a imprimir volar de aguila, 
   //el virtual hace que no sea volar de ave, sino de aguila 

   //apAve->yque();

   Pinguino pingui("Cabo");

   apAve = &pingui;
   apAve->volar();

   vector <Ave *> parvada; //vector de apuntadores hace que puedas 
   //guardar cada una de las aves que creas

   parvada.push_back(&america);
   parvada.push_back(&pingui);

   cout << "En el vector" << endl;
   for(int i = 0 ; i < parvada.size() ; i++)
   {
    parvada[i]->volar();
   }

    for(int i = 0 ; i < parvada.size() ; i++)
    {
        Aguila * ap = dynamic_cast <Aguila *> (parvada[i]);
        if (ap != 0)
            cout << i << " Soy una aguila" << endl;
        Pinguino * ap2 = dynamic_cast <Pinguino *> (parvada[i]);
        if (ap2 != 0)
            cout << i << " Soy un pinguino" << endl;
    }

}