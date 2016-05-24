#include <iostream>
#include "Pilas.h"
using namespace std;

//http://blog.martincruz.me/2012/10/pilas-en-c.html
int main()
{   Pila pila;
    crearPila(pila);
    push(pila,5);
    push(pila,6);

    mostrar_pila(pila);
     pop(pila);
 cout << "lo poppie, ro es feli" << endl;
     mostrar_pila(pila);

    return 0;
}
