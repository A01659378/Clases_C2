#include <iostream>

using std::cout;
using std::endl;

class Padre{
    protected:
    int x;

    public:
        ~Padre(){
            cout << "desde destructor Padre " << endl;
        }
        Padre(){} //siempre crear el constructor vacio para que compile.
        Padre(int x1){
            x = x1;
            cout << "Desde constructor Padre" << endl;
        }

        void imprimir(){
            cout << "La variable x es: " << x << endl;
        }
};

class Hija : Padre{
    public:
        ~Hija(){
            cout <<"Desde destructor Hija"<<endl;
        }
        int y;
        Hija(int x1, int y1){
            y=y1;
            cout << "En el constructor Hija" << endl;
        }
        void imprimir(){
            Padre::imprimir();
            cout << "Dentro de hija y: " << y << endl;
        };
};

int main(){
    Padre p(5);
    p.imprimir();
    Hija h(10,20);
    h.imprimir();
    return 0;
}