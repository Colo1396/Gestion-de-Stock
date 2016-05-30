#ifndef _PARTIDOPOLITICO_H_
#define _PARTIDOPOLITICO_H_

#include "Lista.h"
#include "Candidato.h"


#ifndef NULL
#define NULL      0
#endif

/* Definicion de los tipos de datos */


typedef struct {
    int idPartido;
    char nombre_partido[40];
    Lista lstCandidatos;
}PartidoPolitico;


/* Pre: la instancia del TDA PartidoPolitico no tiene que estar creada.
 * Post: Instancia del TDA PartidoPolitico creada y lista para ser utilizada.
 * PartidoPolitico: estructura sobre la cual se invoca la primitiva.
*/

void crearPartido(PartidoPolitico *partidoPolitico);

/* Pre: La instancia TDA PartidoPolitico tiene que estar creada y no tiene que estar destruida.
 * Post: La instancia TDA PartidoPolitico sera destruida y ya no podra utilizarse.
 * PartidoPolitico: estructura sobre la cual se invoca la primitiva.
 */

void destruirPartido(PartidoPolitico &partidoPolitico);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: Seteo el id del partido.
 * PartidoPolitico: estructura sobre la cual se invoca la primitiva.
 * id que va a tener el partido (posiblemente deberia autogenerarla cuando este en la lista).
*/

void setIdPartido(PtrDato partidoPolitico,int idPartido);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: obtengo que valor del id.
 * PartidoPolitico: estructura sobre la cual se invoca la primitiva.
*/

int getIdPartido(PtrDato partidoPolitico);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: Seteo el nombre del partido.
 * PartidoPolitico: estructura sobre la cual se invoca la primitiva.
 * nombre que va a tener el partido.
*/

void setNombre_partido(PtrDato partidoPolitico,char* nombre_partido);

/* Pre: la instancia TDA tiene que estar creada y no tiene que estar destruida.
 * Post: obtengo que valor del nombre.
 * PartidoPolitico: estructura sobre la cual se invoca la primitiva.
*/

char* getNombre_partido(PtrDato partidoPolitico);

void setLstCandidatos(PtrDato partidoPolitico,Lista &lstCandidatos);

Lista &getLstCandidatos(PtrDato partidoPolitico);



/****************************************** ALTA EQUIPO (nuevo) *****************************/

void altaPartido(Lista &lstPartidos);

/******************************************* BAJA EQUIPO ************************************/

void bajaPartido(Lista &lstPartidos);

/********************************* MODIFICAR EQUIPO ******************************************/

void modificarPartido(Lista &lstPartido);


/********************************** CARGAR PARTIDOS (txt)**************************************/

void cargarPartido(Lista &lstPartidos);

/********************************* GUARDAR PARTIDOS (txt) ************************************/

void guardarPartido(Lista &lstPartidos);


/*************************************************************************/

PtrNodoLista buscarPartidoPorId(int id, Lista &lstPartidos);

void agregarCandidato(PtrDato partido, Candidato *candidato);






#endif // _PARTIDOPOLITICO_H_
