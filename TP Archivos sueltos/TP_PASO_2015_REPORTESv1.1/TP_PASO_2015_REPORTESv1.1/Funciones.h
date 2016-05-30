#ifndef _FUNCIONES_H_
#define _FUNCIONES_H_

#include "Lista.h"
#include "PartidoPolitico.h"
#include "Mesa.h"
#include "Voto.h"
#include "Conteo.h"


/*
Pre: c debe tener una direccion valida para una cadena de hasta 50 caracteres
Post: Obtiene de patnalla una cadena hasta 50 caracteres y se lo asigna a c.
*/
void getCadena(char* c);

/**-----------------------------------------------------*/
/*
Post: Pausa la impresion en pantalla.
*/

void pausar(void);
/**-----------------------------------------------------*/
/*
Post: retorna el valor de un entero y solo un entero, con o sin espacios antes o despues
*/
int getEntero(void);

void delay(int secs);

void imprimirLstPartidos(Lista &lstPartidos);

bool validarPartido(int idPartido, Lista &lstPartidos);

void imprimirLstCandidatos(Lista &lstCandidatos);

bool verificarCandidatoConPartido(Lista &lstCandidatos,Lista &lstPartidos);

void imprimirLstProvinciasConMesas(Lista &lstProvincias);

void imprimirLstMesas(Lista &lstMesas);

bool verificarMesaConProvincia(Lista &lstMesas,Lista &lstProvincias);

void imprimirLstVotos(Lista &lstVotos, Lista &lstCandidatos);

void imprimirLstProvincias(Lista &lstProvincias);

void registroVotos(Lista &lstProvincias, Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos, int c);

void abmCandidatos(Lista &lstCandidatos, Lista &lstPartidos);

void abmPartidos(Lista &lstPartidos, Lista &lstCandidatos);

void abmMesas(Lista &lstMesas, Lista &lstProvincias);

void imprimirLstCandidatosConPartidoOP(Lista &lstPartidos);

void imprimirLstCandidatosConPartidoOC(Lista &lstCandidatos,Lista &lstPartidos);

int altaMesaEnFuncion(Lista &lstProvincia, Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos,int idMesa);
void altaUrnaEnFuncion(Lista &lstProvincia, Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos, int idProvincia, int idMesa,int c);

void ordenarAlfabeticamente(Lista &lstCandidatos);

ResultadoComparacion compararCandidato(PtrDato dat1,PtrDato dat2);

ResultadoComparacion compararPartido(PtrDato dat1,PtrDato dat2);

ResultadoComparacion compararProvincia(PtrDato dat1,PtrDato dat2);

ResultadoComparacion compararMesa(PtrDato dat1,PtrDato dat2);

ResultadoComparacion compararVoto(PtrDato dat1,PtrDato dat2);

ResultadoComparacion compararConteo(PtrDato dat1,PtrDato dat2);

void Procesar(Lista &lstConteo,Lista &lstProvincias, Lista &lstPartidos, Lista &lstCandidatos);

void menuResultados(Lista &lstConteo,Lista &lstProvincias, Lista &lstPartidos, Lista &lstCandidatos);

void generalesCandidato(Lista &lstConteo,Lista &lstProvincias, Lista &lstPartidos, Lista &lstCandidatos);

void generalesPartidos(Lista &lstConteo, Lista &lstProvincias, Lista &lstPartidos, Lista &lstCandidatos);

void provincialesCandidatos(Lista &lstConteo,Lista &lstProvincias,Lista &lstPartidos,Lista &lstCandidatos);

void provincialesPartidos(Lista &lstConteo, Lista &lstProvincias, Lista &lstPartidos, Lista &lstCandidatos);

void resultadosPASO(Lista &lstConteo, Lista &lstProvincias, Lista &lstPartidos, Lista &lstCandidatos);

#endif // _FUNCIONES_H_
