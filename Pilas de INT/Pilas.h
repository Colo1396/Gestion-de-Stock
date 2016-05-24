#ifndef __PILAS_H__
#define __PILAS_H__
//http://blog.martincruz.me/2012/10/pilas-en-c.html
typedef int Dato;

struct NodoPila {
    Dato dato; // dato almacenado
    NodoPila* sgte; // puntero al siguiente
};

typedef NodoPila* PtrNodoPila;

struct Pila{
    PtrNodoPila top;      // puntero al primer nodo de la pila
};
void crearPila(Pila &pila);

void destruir(Pila &pila);

bool pilaVacia(Pila &pila);

void push(Pila &pila,int d);

Dato pop(Pila &pila);

PtrNodoPila fin();
void mostrar_pila(Pila &pila);

#endif // __PILAS_H__
