#include "PilaUb.h"
#include <iostream>
using namespace std;
void crearPila(PilaUb &pila) {
  pila.top=fin();
}

bool pilaVacia(Pila &pila) {

  return pila.top==fin();
}

void push(Pila &pila,int d){
PtrNodoPila aux=new NodoPila;
aux->dato=d;
aux->sgte=pila.top;
pila.top=aux;

}

Dato pop(Pila &pila){
    if (pilaVacia(pila)==true){
        return NULL;
    }
    else{

        PtrNodoPila aux=pila.top->sgte;//podria ser cualquier ipo de de dato
        Dato dato=pila.top->dato;
        delete pila.top;
        pila.top=aux;
        return dato;

            }
}
void destruir(Pila &pila){
    while(!pilaVacia(pila)){
        pop(pila);
    }
}
PtrNodoPila fin(){
    return NULL;
}

void mostrar_pila(Pila &pila)
{
     PtrNodoPila aux;
     aux = pila.top;     // apunta al inicio de la lista

     while( aux !=NULL )
     {
            cout<<"  "<< aux->dato <<endl;
            aux = aux->sgte;
     }
}
