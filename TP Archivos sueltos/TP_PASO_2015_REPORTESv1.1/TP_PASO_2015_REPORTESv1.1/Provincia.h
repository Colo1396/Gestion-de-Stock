#ifndef _PROVINCIA_H_
#define _PROVINCIA_H_
#include "Lista.h"
#include "Mesa.h"
#include "Funciones.h"
#include <fstream>
#include <string.h>
#include <iostream>
#include <cstdlib>

#ifndef NULL
#define NULL      0
#endif

typedef struct {
    int idProvincia;
    char nombreProvincia[50];
    Lista lstMesas;
}Provincia;



void crearProvincia(Provincia *provincia);

void destruirProvincia(Provincia provincia);

void setIdProvincia(PtrDato provincia, int idProvincia);

int getIdProvincia(PtrDato provincia);

void setNombreProvincia(PtrDato provincia, char* nombre);

char* getNombreProvincia(PtrDato provincia);

void setLstMesas(PtrDato provincia, Lista &lstMesas);

Lista &getLstMesas(PtrDato provincia);

void cargarProvincias(Lista &lstProvincias);

PtrNodoLista buscarProvinciaPorId(int id, Lista &lstProvincias);










#endif // _PROVINCIA_H_
