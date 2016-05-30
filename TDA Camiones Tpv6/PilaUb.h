#ifndef __PILAUB_H__
#define __PILAUB_H__

typedef int Dato;

struct NodoPilaUb{
Dato Id_Ub;
NodoPilaUb *sgte;
int CodArt;
float precio;
char desc[50];
};

typedef NodoPilaUb *PtrNodoPilaUb;

struct PilaUb{
    PtrNodoPilaUb top;
    };

void crearPila(PilaUb &pila);

void destruir(PilaUb &pila);

bool pilaVacia(PilaUb &pila);

void push(PilaUb &pila,int d);

Dato pop(PilaUb &pila);

PtrNodoPilaUb fin();
void mostrar_pila(PilaUb &pila);

#endif // __PILAUB_H__
