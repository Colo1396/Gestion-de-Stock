#ifndef __LISTAPISO_H__
#define __LISTAPISO_H__
 typedef int Dato;//

 struct NodoPiso{
 Dato id_Piso;//dato declarado como entero es el tipo correspondiente a ID CALLE
 NodoPiso *sgteP;//puntero al nodo siguente
 NodoUb *PtrUb=&PilaUb;// puntero al piso
 };

 typedef NodoPiso *PtrNodoPiso;// puntero de la estructura nodo

 struct ListaPiso{
 PtrNodoPIso primeroPiso;//declaro el PtrNodoCalle como el tipo de la variable primero
 };

//*******************

void crearListaCalle(ListaCalle &listaC);
//****************
bool listaVacia(ListaCalle &listaC);

PtrNodoCalle fin();
PtrNodoCalle primero(ListaCalle &listaC);
PtrNodoCalle siguiente(ListaCalle &listaC);


/* Definicion de Primitivas */


PtrNodoCalle anterior(ListaCalle &listaC, PtrNodoCalle ptrNodoC);

PtrNodoCalle ultimo(ListaCalle &listaC);

PtrNodoCalle adicionarPrincipio(ListaCalle &listaC, Dato id_calle);

PtrNodoCalle adicionarDespues(ListaCalle &listaC, Dato id_calle, PtrNodoCalle ptrNodoC);

PtrNodoCalle adicionarFinal(ListaCalle &listaC, Dato id_calle);

PtrNodoCalle adicionarAntes(ListaCalle &listaC, Dato id_calle, PtrNodoCalle ptrNodoC);

void colocarDato(ListaCalle &listaC, Dato &id_calle, PtrNodoCalle ptrNodoC);

void obtenerDato(ListaCalle &listaC, Dato &id_calle, PtrNodoCalle ptrNodoC);

void eliminarNodo(ListaCalle &listaC, PtrNodoCalle ptrNodoC);

void eliminarNodoPrimero(ListaCalle &listaC);

void eliminarNodoUltimo(ListaCalle &listaC);

void eliminarLista(ListaCalle &listaC);

/* Definición de Operaciones Adicionales */

PtrNodoLista localizarDato(ListaCalle &listaC , Dato id_calle);

PtrNodoLista insertarDato(ListaCalle &listaC, Dato id_calle);

void eliminarDato(ListaCalle &listaC, Dato id_calle);

void reordenar(ListaCalle &listaC);

int longitud(ListaCalle &listaC);


#endif // __LISTAPISO_H__
