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

void correr(FILE *ptrING,FILE *ptrSOL){

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
char calTiempo[20];
char cadenaI[50];
char* cpToken;
int PosIniING,PosDespING,h,m,s,hh,mm,stingreso;
//Variables que se usan en el segundo paso.
char cadenaS[18];
char* cpToken2;
int hh2,mm2,stsolicitud,pos2,pos2Desp;
//FILE *ptrING;

/*
    if((ptrING=fopen("ingresos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de INGRESOS no existe\n");
          }
*/  if (!feof(ptrING)){
    PosIniING=ftell(ptrING);
    printf("************************************\n");
    printf("Posicion ANTES de leer INGRESO: %d\n",PosIniING);
    //LEE LA PRIMER CADENA EN EL ARCHIVO INGRESO

    fscanf (ptrING, "%s", cadenaI);
    PosDespING=ftell(ptrING);
    printf("Posicion DESPUES de leer INGRESO: %d\n\n",PosDespING);
    cpToken = strtok (cadenaI, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    DatoI.CodArt= atoi(cpToken);
    // supuse que el primero será COD ARTICULO
    cpToken = strtok (NULL, ";");
    DatoI.Cantidad= atof(cpToken);
    //obtiene el segundo campo... cantidad
    cpToken = strtok (NULL, ";");
    strcpy (DatoI.Hora, cpToken);
    // obtiene el tercer campo... HORA
    //***********************************
    ;//contiene en forma de cadena la hora
    strcpy (calTiempo, cpToken); // COPIA EL CONTENIDO DE CPTOKEN EN LA CADENA
    //printf("%s \n",calTiempo);
    cpToken= strtok(calTiempo,":");
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    s=atoi(cpToken);
    hh=h*3600;
    mm=m*60;
    stingreso=hh+mm+s;
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   //printf("Es igual a %d Segundos de ingreso. \n\n",st);


    }
//*****************************************FIN INGRESO***********************




//FILE *ptr2;
/*
 if((ptr2=fopen("solicitudes.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de SOLICITUD no existe\n");
          }
*/
    pos2=ftell(ptrSOL);
    printf("Posicion ANTES de leer SOLICITUD: %d\n",pos2);

    //LEE LA PRIMERA LINEA
    fscanf (ptrSOL, "%s", cadenaS) ;
    pos2Desp=ftell(ptrSOL);
    printf("Posicion DESPUES de leer SOLICITUD: %d\n\n",pos2Desp);
    cpToken2 = strtok (cadenaS, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    DatoS.codSuc= atoi(cpToken2);
    //obtiene la sucursal
    cpToken2 = strtok (NULL, ";");
    DatoS.CodArt= atoi(cpToken2);
    // supuse que el primero será la cantidad
    cpToken2 = strtok (NULL, ";");
    DatoS.cant= atof(cpToken2);
    //obtiene el segundo campo... cantidad
    cpToken2 = strtok (NULL, ";");
    strcpy (DatoS.Hora, cpToken2);
    // obtiene el tercer campo... HORA
    //***********************************
    strcpy (calTiempo, cpToken2);
//    printf("%s \n",calTiempo);
    cpToken2= strtok(calTiempo,":");
    h=atoi(cpToken2);
    cpToken2= strtok (NULL,":");
    m=atoi(cpToken2);
    cpToken2= strtok (NULL,":");
    s=atoi(cpToken2);
    hh2=h*3600;
    mm2=m*60;
    stsolicitud=hh2+mm2+s;
    printf("%d Segundos INGRESO\n",stingreso);
    printf("%d Segundos SOLICITUD\n\n",stsolicitud);
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   //printf("Es igual a %d Segundos de solicitud. \n\n",st2);
    //devuelve el tiempo



   //printf("%d\n%d\n",st,st2);

   if (stingreso<=stsolicitud ){
        //printf("entro en if");
    printf("Ingreso menor que solicitud\n\n");

    //printf("Ingreso: %d  Solicitud: %d\n\n",stingreso,stsolicitud);
    fseek( ptrSOL, pos2, SEEK_SET);
    }
    else{

    printf("Solicitud menor que ingreso\n\n");
    //printf("Ingreso: %d  Solicitud: %d\n\n",stingreso,stsolicitud);
    fseek( ptrING, PosIniING, SEEK_SET);
}

//despachar pedido(restar del stok)
//si no se puede poner en faltantes
//volver linea
    /*
fclose (ptrsSOL); // cierra el archivo
fclose (ptr1); // cierra el archivo*/
    getch();
}

