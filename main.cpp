#include <iostream>
#include "Arreglo.h"
using namespace std;

int main(){
    Arreglo<string> arreglo;
    cout<<"agregar 4 string's a arreglo usando insertar_final e insersar_inicio()"<<endl;
    arreglo.insertar_inicio("Mundo ");
    arreglo.insertar_inicio("Hola ");
    arreglo.insertar_final("Soy ");
    arreglo.insertar_final("Alonso");
    cout<<"mostrar() los elementos de arreglo"<<endl;
    arreglo.mostrar();
    cout<<endl;
    cout<<"insertar() el elemento en la posición 2"<<endl;
    arreglo.insertar("Tierra", 2);
    cout<<"mostrar los elementos de arreglo"<<endl;
    arreglo.mostrar();
    cout<<endl;
    cout<<"eliminar_inicio() y eliminar_final()"<<endl;
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    cout<<"eliminar() el elemento de la posición 1"<<endl;
    arreglo.eliminar(1);
    cout<<"mostrar() los elementos de arreglo"<<endl;
    arreglo.mostrar();
    cout<<endl;
    return 0;
}
