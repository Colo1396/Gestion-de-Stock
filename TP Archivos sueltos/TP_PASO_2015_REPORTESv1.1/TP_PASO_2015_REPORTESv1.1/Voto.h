/* TDA voto
 * Archivo: Voto.cpp
 */

 #ifndef _VOTO_H_
 #define _VOTO_H_
 #include "Mesa.h"
 #include "Candidato.h"
 #include "PartidoPolitico.h"

#ifndef NULL
#define NULL      0
#endif

/* Definicion de los tipos de datos */


typedef struct {
    int idVoto;
    int idCandidato;
}Voto;



void crearVoto(Voto *voto);

void destruirVoto(Voto voto);

void setIdVoto(PtrDato voto, int idVoto);

int getIdVoto(PtrDato voto);

void setIdCandidatoVoto(PtrDato voto,int idCandidato);

int getIdCandidatoVoto(PtrDato voto);

void votar(Lista &lstProvincias, Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos,int c);

 #endif // _VOTO_H_
