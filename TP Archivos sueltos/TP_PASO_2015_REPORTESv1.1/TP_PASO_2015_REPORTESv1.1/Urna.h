#ifndef _URNA_H_
#define _URNA_H_

#include <string>
#include "Lista.h"

#ifndef NULL
#define NULL      0
#endif


typedef struct {
    int idUrna;
    char horaApertura[40];
    char horaCierre[40];
    bool urnaActiva;
    Lista lstVotos;
}Urna;


void crearUrna(Urna *urna);

void destruirUrna(Urna *urna);

void setIdUrna(PtrDato urna,int idUrna);

int getIdUrna(PtrDato urna);

void setHoraApertura(PtrDato urna,char horaApertura[40]);

char* getHoraApertura(PtrDato urna);

void setHoraCierre(PtrDato urna,char horaCierre[40]);

char* getHoraCierre(PtrDato urna);

void seturnaActiva(PtrDato urna, bool urnaActiva);

bool geturnaActiva(PtrDato urna);

void setLstVotos(PtrDato urna, Lista &lstVotos);

Lista &getLstVotos(PtrDato urna);

void cierreUrna(Lista &lstProvincia,Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos,int c);

void altaUrna(Lista &lstProvincia, Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos,int c);





#endif // _URNA_H_

