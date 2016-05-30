#include <iostream>
#include "Camion.h"
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include "FunnyProd.h"
#include <fstream>

void correr(FILE *ptrING,FILE *ptrSOL){

struct DatosIngresos{
int CodArt;
float Cantidad;
char Hora[10];
}DatoI;

char cadenaI[50];
char* cpToken;

    int PosIniING=ftell(ptrING);
    printf("Posicion antes de leer INGRESO: %d\n",PosIniING);
    //LEE LA PRIMER CADENA EN EL ARCHIVO INGRESO
    fscanf (ptrING, "%s", cadenaI);
    int PosDespING=ftell(ptrING);
    printf("Posicion despues de leer INGRESO: %d\n",PosDespING);
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
    char calTiempo[20];//contiene en forma de cadena la hora
    strcpy (calTiempo, cpToken); // COPIA EL CONTENIDO DE CPTOKEN EN LA CADENA
    //printf("%s \n",calTiempo);
    cpToken= strtok(calTiempo,":");
    int h;
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int m;
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int s;
    s=atoi(cpToken);
    int hh,mm,st;
    hh=h*3600;
    mm=m*60;
    st=hh+mm+s;
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("Es igual a %d Segundos de ingreso. \n\n",st);



//*****************************************FIN INGRESO***********************

struct DatosSolicitud{
int codSuc;
int CodArt;
float cant;
char Hora[10];
}DatoS;

char cadenaS[18];
char* cpToken2;
int hh2,mm2,st2;
//FILE *ptr2;
/*
 if((ptr2=fopen("solicitudes.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de SOLICITUD no existe\n");
          }
*/
    int pos2=ftell(ptrSOL);
    printf("Posicion antes de leer: %d\n",pos2);

    //LEE LA PRIMERA LINEA
    fscanf (ptrSOL, "%s", cadenaS) ;
    int pos2Desp=ftell(ptrSOL);
    printf("Posicion DESPUES de leer: %d\n\n",pos2Desp);
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

    cpToken2= strtok(calTiempo,":");

    h=atoi(cpToken2);
    cpToken2= strtok (NULL,":");

    m=atoi(cpToken2);
    cpToken2= strtok (NULL,":");

    s=atoi(cpToken2);

    hh2=h*3600;
    mm2=m*60;
    st2=hh2+mm2+s;
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("Es igual a %d Segundos de solicitud. \n\n",st2);
    //devuelve el tiempo



//printf("%d\n%d\n",st,st2);
   char caracter;
   if (st<=st2){
        printf("entro en if");
//reponer articulo


    }

    else{
        printf("entro en else");
    fseek( ptrSOL, pos2, SEEK_SET);
    pos2Desp=ftell(ptrSOL);
    printf("Posicion DESPUES del FSEEK: %d\n\n",pos2Desp);
}

//despachar pedido(restar del stok)
//si no se puede poner en faltantes
//volver linea
    /*
fclose (ptrsSOL); // cierra el archivo
fclose (ptr1); // cierra el archivo*/
    getch();
}

int  leerIngreso(){

struct DatosIngresos{
int CodArt;
float Cantidad;
char Hora[10];
};

char cadena[50];
char* cpToken;
FILE *ptr1;
DatosIngresos Datos;


     if((ptr1=fopen("ingresos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de INGRESOS no existe\n");
          }
    fscanf (ptr1, "%s", cadena);
    cpToken = strtok (cadena, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    Datos.CodArt= atoi(cpToken);
    // supuse que el primero será la cantidad
    cpToken = strtok (NULL, ";");
    Datos.Cantidad= atof(cpToken);
    //obtiene el segundo campo... cantidad
    cpToken = strtok (NULL, ";");
    strcpy (Datos.Hora, cpToken);
    // obtiene el tercer campo... HORA
    //***********************************
    char calTiempo[20];
    strcpy (calTiempo, cpToken);
    printf("%s \n",calTiempo);
    cpToken= strtok(calTiempo,":");
    int h;
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int m;
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int s;
    s=atoi(cpToken);
    int hh,mm,st;
    hh=h*3600;
    mm=m*60;
    st=hh+mm+s;
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("Es igual a %d Segundos. \n\n",st);

    return st;//devuelve el tiempo

    // sigue leyendo el archivo hasta que llegue al fin

   fclose (ptr1); // cierra el archivo
   getch();

}

//funcion de lectura de solicitud
int leerSolicitud(){

struct DatosSolicitud{
int codSuc;
int CodArt;
float cant;
char Hora[10];

};

char cadena[150];
char* cpToken;

int hh,mm,st;
DatosSolicitud Datos;
FILE *ptr1;

     if((ptr1=fopen("solicitudes.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de SOLICITUD no existe\n");
          }
    fscanf (ptr1, "%s", cadena) ;
    cpToken = strtok (cadena, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    Datos.codSuc= atoi(cpToken);
    //obtiene la sucursal
    cpToken = strtok (NULL, ";");
    Datos.CodArt= atoi(cpToken);
    // supuse que el primero será la cantidad
    cpToken = strtok (NULL, ";");
    Datos.cant= atof(cpToken);
    //obtiene el segundo campo... cantidad
    cpToken = strtok (NULL, ";");
    strcpy (Datos.Hora, cpToken);
    // obtiene el tercer campo... HORA
    //***********************************
    char calTiempo[20];
    strcpy (calTiempo, cpToken);
    printf("%s \n",calTiempo);
    cpToken= strtok(calTiempo,":");
    int h;
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int m;
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int s;
    s=atoi(cpToken);

    hh=h*3600;
    mm=m*60;
    st=hh+mm+s;
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("Es igual a %d Segundos. \n\n",st);
    //devuelve el tiempo
    // sigue leyendo el archivo hasta que llegue al fin
    return st;
   fclose (ptr1); // cierra el archivo
   getch();

}





























//FILE *ptrING;

/*
    if((ptrING=fopen("ingresos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de INGRESOS no existe\n");
          }
*/


/*
void volverlinea(FILE *ptro){
char caracter;
while (caracter != '<')
{
seek( ptro, -2, SEEK_CUR );
fread (&caracter, sizeof(caracter), 1, ptro);
}
}*/
/*
void mostrarArt(){
#include <fstream>
struct DatosArt{
char CodArt[30];
char precio[30];
char desc[100];
}DatoA;
    ifstream archivo("articulos.db");
    char linea[128];
    char* cpToken;

    if(archivo.fail())
    cerr << "Error al abrir el archivo articulos" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
            cpToken = strtok (linea, ";");
            strcpy(DatoA.CodArt,cpToken);
            cpToken = strtok (NULL, ";");
            strcpy(DatoA.precio,cpToken);
            cpToken = strtok (NULL, ";");
            strcpy(DatoA.desc,cpToken);

        cout<<"Cod.Art||"<<"Precio||"<<"Descipcion||"<<"\n"<<endl;
        cout<<"  "<<DatoA.CodArt<<"\t|"
            <<DatoA.precio<<"\t|"
            <<DatoA.desc<<"|\n"<<endl;
    }
    archivo.close();


    }
/*
FILE *ptrART; //puntero de archivo articulo.
    if((ptrART=fopen("articulos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de Articulo no existe\n");
          }
    char strArt[30];

    while((fscanf(ptrArt, "%s", strArt))!=EOF){
    printf("%s\n",strArt);
    }
    getch();
fclose(ptrART);// CERRAMOS EL ARCHIVO DE ARTICULO AL FINAL DEL PROGRAMA*/
