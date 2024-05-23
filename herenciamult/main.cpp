#include <iostream>
using std::cout;
using std::endl;

class Padre1{
    public:
    Padre1(){
        cout << "Dentro padre1" << endl;
    }
    ~Padre1(){
        cout << "Dentro destructor padre1" << endl;

    }
    void imprimir(){
        cout << "Dentro imprimir de padre1" << endl;
    }
};

class Padre2{
    public:
    Padre2(){
        cout << "Dentro Padre 2" << endl;
    }
    ~Padre2(){
        cout << "Destructor Padre 2" << endl;
    }
    void imprimir(){
        cout << "Dentro imprimir Padre 2" << endl;
    }
};


class Hijo : public Padre1, public Padre2{
    public:
    Hijo(){
        cout << "Dentro constructor Hijo" << endl;
    }
    ~Hijo(){
        cout << "Dentro destructor Hijo" << endl;
    }
    /*void imprimir(){
        cout << "Dentro imprimir Hijo" << endl;
    }*/

};

class A{
    public:
    void imprimir(){
        cout << "Dentro de imprimir clase a" << endl;
    }
};

class B :virtual public A{};
class C :virtual public A{};

class D : public B, public C{

};

int main(){
    Hijo h;
    h.Padre2::imprimir();

    D obj;
    obj.imprimir();

    return 0;
}