#ifndef _MESA_H_
#define _MESA_H_
#include "Cola.h"
#include "Lista.h"
#include "Provincia.h"
#include "Urna.h"

#ifndef NULL
#define NULL      0
#endif

typedef struct {
    int idMesa;
    Urna *urna;
    Cola colaUrnas;
}Mesa;

void crearMesa(Mesa *mesa);

void destruirMesa(Mesa mesa);

void setIdMesa(PtrDato mesa,int idMesa);

int getIdMesa(PtrDato mesa);

void setColaUrnas(PtrDato mesa,Cola &colaUrnas);

Cola &getColaUrnas(PtrDato mesa);

void setUrna(PtrDato mesa, Urna *urna);

Urna* getUrna(PtrDato mesa);


/***************************************** ALTA MESA **************************************/

int altaMesa(Lista &lstMesas,Lista &lstProvincias);


/***************************************** BAJA MESA **************************************/

void bajaMesa(Lista &lstMesas);

PtrNodoLista buscarMesaPorId(int id, Lista &lstMesas);

PtrNodoLista traerProvinciaMesa(int idMesa, Lista &lstMesas, Lista &lstProvincias);

/*************************************** GUARDAR Y CARGAR *********************************************************/

void cargarMesas(Lista &lstProvincias, Lista &lstMesas);
void guardarMesa(Lista &lstMesas,Lista &lstProvincias);


void agregarMesa(PtrDato provincia, Mesa *mesa);

bool buscarProvinciaMesa(int idMesa, Lista &lstMesas, Lista &lstProvincias);


#endif // _MESA_H_
