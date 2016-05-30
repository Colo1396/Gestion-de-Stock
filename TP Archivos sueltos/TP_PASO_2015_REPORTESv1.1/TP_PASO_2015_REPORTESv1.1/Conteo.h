
#ifndef CONTEO_H_INCLUDED
#define CONTEO_H_INCLUDED
#include "Lista.h"
#include "PartidoPolitico.h"


#ifndef NULL
#define NULL      0
#endif


typedef struct{
    int idProvincia;
    int idPartido;
    int idCandidato;
    int cantVotos;
}Conteo;

void crearConteo(Conteo *conteo);

void destruirConteo(Conteo &conteo);

void setConteoIdProvincia(PtrDato conteo, int idProv);

int getConteoIdProvincia(PtrDato conteo);

void setConteoIdPartido(PtrDato conteo, int idPar);

int getConteoIdPartido(PtrDato conteo);

void setConteoIdCandidato(PtrDato conteo, int idCan);

int getConteoIdCandidato(PtrDato conteo);

void setcantVotos(PtrDato conteo, int cant);

int getcantVotos(PtrDato conteo);



#endif // CONTEO_H_INCLUDED
