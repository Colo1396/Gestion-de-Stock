/* TDA Candidato
 * archivo: Candidato.cpp
*/

#ifndef _CANDIDATO_H_
#define _CANDIDATO_H_

#include "Lista.h"

#ifndef NULL
#define NULL      0
#endif

/* Definicion de los tipos de datos */


typedef struct{
    int idCandidato;
    char nombre_candidato[40];
}Candidato;



/* Pre: la instancia del TDA Candidato no tiene que estar creada.
 * Post: Instancia del TDA Candidato creada y lista para ser utilizada.
 * Candidato: estructura sobre la cual se invoca la primitiva.
*/

void crearCandidato(Candidato  *candidato);

/* Pre: La instancia TDA Candidato tiene que estar creada y no tiene que estar destruida.
 * Post: La instancia TDA Candidato sera destruida y ya no podra utilizarse.
 * Candidato: estructura sobre la cual se invoca la primitiva.
 */

void destruirCandidato(Candidato  &candidato);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: Seteo el id del candidato.
 * Candidato: estructura sobre la cual se invoca la primitiva.
 * id que va a tener el partido (posiblemente deberia autogenerarla cuando este en la lista).
*/

void setIdCandidato(PtrDato candidato,int idCandidato);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: obtengo que valor del id. Tiene que ser mayor que 0.
 * Candidato: estructura sobre la cual se invoca la primitiva.
*/

int getIdCandidato(PtrDato candidato);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: Seteo el nombre del candidato.
 * Candidato: estructura sobre la cual se invoca la primitiva.
 * nombre que va a tener el partido.
*/

void setNombre_candidato(PtrDato candidato,char* nombre_candidato);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: obtengo que valor del nombre.
 * Candidato: estructura sobre la cual se invoca la primitiva.
*/

char* getNombre_candidato(PtrDato candidato);

void altaCandidato(Lista &lstCandidatos,Lista &lstPartidos);

void bajaCandidato(Lista &lstCandidatos);

PtrNodoLista buscarCandidatoPorId(int id, Lista &lstCandidatos);

void modificarCandidato(Lista &lstCandidatos);

bool buscarPartidoCandidato(int idCandidato, Lista &lstCandidatos, Lista &lstPartidos);

PtrNodoLista traerPartidoCandidato(int idCandidato, Lista &lstCandidatos, Lista &lstPartidos);

void guardarCandidatos(Lista &lstCandidatos, Lista &lstPartidos);

void cargarCandidatos(Lista &lstCandidatos, Lista &lstPartidos);



#endif // _CANDIDATO_H_
