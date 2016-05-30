#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include "FunnyProd.h"

//CORRER: Esta función trabaja de la siguiente manera.
//1) Recibe los punteros de los archivos abiertos, SOLICITUDES e INGRESOS.
//2) Lee un registro de cada archivo, en el cual se encuentre la hora del INGRESO y SOLICITUD
//3) Se transforma esa "hora" en SEGUNDOS (stingreso,stsolicitud).
//4) Si el valor en segundos del ingreso es menor al de solicitudes, eso significa que el ingreso llegó primero
//   y tenemos que atenderlo. entonces, eso se hace.
//5) Esta funcion se ejecuta, hasta que los 2 archivos se terminen de leer.
void correr(FILE *ptrING,FILE *ptrSOL){

//Creamos las estructuras donde se guardaran los datos leidos de los arhivos de INGRESO y SOLICITUD.
struct DatosIngresos{
int CodArt;
float Cantidad;
char Hora[10];
}DatoI;

struct DatosSolicitud{
int codSuc;
int CodArt;
float cant;
char Hora[10];
}DatoS;

//Variables que se usan en el primer paso.
//cadenaI Se usa para guardar la linea que se lee del archivo.
//calTIEMPO se usa para guardar en forma de char, el tiempo. Ej: 08:00:00
char cadenaI[50],calTiempo[20];
char* cpToken; //cpToken se utiliza para guardar caracteres desde cierto punto hasta cierto punto en una linea de caracteres
int PosIniING,PosDespING,h,m,s,hh,mm,stingreso; //los POS(posicion del cursor), son antes y despues de leer en el archivo
//Variables que se usan en el segundo paso.
char cadenaS[18];
char* cpToken2;
int hh2,mm2,stsolicitud,pos2,pos2Desp;
/*
    if((ptrING=fopen("ingresos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de INGRESOS no existe\n");
          }

*/  if (!feof(ptrING)){
    PosIniING=ftell(ptrING);
    fscanf (ptrING, "%s", cadenaI);//LEE LA PRIMER CADENA EN EL ARCHIVO INGRESO Y GUARDAMOS EN cadenaI
    PosDespING=ftell(ptrING); //Guardamos la posicion despues de leer.
    cpToken = strtok (cadenaI, ";"); //Desde la cadenaI leemos del principio hasta ";"
    // obtiene el primer campo del registro y lo guarda en cpToken
    DatoI.CodArt= atoi(cpToken); //Transformamos en INT y guardamos en CodArt
    cpToken = strtok (NULL, ";"); //Continuamos leyendo en cadenaI pero ahora desde NULL.
    DatoI.Cantidad= atof(cpToken); //Transformamos en FLOAT
    cpToken = strtok (NULL, ";");
    strcpy (DatoI.Hora, cpToken);
    strcpy (calTiempo, cpToken); // COPIA EL CONTENIDO DE CPTOKEN EN LA CADENA
    cpToken= strtok(calTiempo,":");
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    s=atoi(cpToken);
    hh=h*3600;
    mm=m*60;
    stingreso=hh+mm+s; //TRANSFORMA LA HORA EN SEGUNDOS EJ: 08:01:37 = 28897 SEGS.
}
//*****************************************FIN INGRESO***********************
/*
 if((ptr2=fopen("solicitudes.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de SOLICITUD no existe\n");
          }
*/  pos2=ftell(ptrSOL);
    fscanf (ptrSOL, "%s", cadenaS) ;//LEE LA PRIMERA LINEA
    pos2Desp=ftell(ptrSOL);
    cpToken2 = strtok (cadenaS, ";"); // obtiene el primer campo dela cadena y lo guarda en cpToken
    DatoS.codSuc= atoi(cpToken2);//Lo guarda en
    cpToken2 = strtok (NULL, ";");// Obtiene el CodART
    DatoS.CodArt= atoi(cpToken2);//Lo guardo en Datos.CodArt
    cpToken2 = strtok (NULL, ";"); //obtiene el segundo campo... cantidad
    DatoS.cant= atof(cpToken2); //Lo guardo en la estructura
    cpToken2 = strtok (NULL, ";"); //Obtiene la HORA
    strcpy (DatoS.Hora, cpToken2); //Lo guarda en la estructura.
    strcpy (calTiempo, cpToken2); //En CalTiempo, guardamos la Hora que estaba en cptoken2 para trabajarla.
    //  Transformamos esa HORA en segundos:
    cpToken2= strtok(calTiempo,":");
    h=atoi(cpToken2);
    cpToken2= strtok (NULL,":");
    m=atoi(cpToken2);
    cpToken2= strtok (NULL,":");
    s=atoi(cpToken2);
    hh2=h*3600;
    mm2=m*60;
    stsolicitud=hh2+mm2+s; //vALOR EN SEGUNDOS DE ESA HORA.
    //SOLUCION "CRIOLLA"
    //***********************************************************
    //86400 Es igual a 24:00:01, Como NUNCA va a ingresar ese valor, entonces podemos cambiar las variables
    //y asi va a seguir leyendo del otro archivo hasta terminar los 2.
    if (feof(ptrING)){
    stingreso=86401;
    }
    if (feof(ptrING)){
    stingreso=86401;
    }
    //***********************************
    //Si los SEGUNDOS de Ingreso es menor que SEGUNDOS de Solicitud, entonces resolvemos el INGRESO primero.
    if (stingreso<=stsolicitud ){
    ////DESDE ACA SE VA A SUMAR EN STOCK O AGREGAR NUEVO ARTICULO.
    fseek( ptrSOL, pos2, SEEK_SET);
    }
    //Sino, entonces la solicitud vino antes, y la atendemos.
    else{
    //DESDE ACA SE VA A RESTAR EN STOCK PORQUE AL SER UNA SOLICITUD, SE VA DE NUESTRO STOCK, A LA SUCURSAL.
    fseek( ptrING, PosIniING, SEEK_SET);
}
}

