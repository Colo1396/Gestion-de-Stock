#include "Ingreso.h"
#include <iostream>

using namespace std;
//********************************
void crearIngreso(Ingreso &ingreso){
ingreso.cod_articulo=0;
ingreso.cantidad=0;
 //*************************//
 //          FECHA          //
 //*************************//
 time_t tiempo = time(0);
 struct tm *tlocal = localtime(&tiempo);
 char fechaaux[150];
 strftime(fechaaux,150,"%d/%m/%y %H:%M",tlocal);
 strcpy(ingreso.hora,fechaaux);
 // FIN FECHA
}
//********************************
void crearIngreso(Ingreso &ingreso,int CodArt,int Cant){
ingreso.cod_articulo=CodArt;
ingreso.cantidad=Cant;
 //*************************//
 //          FECHA          //
 //*************************//
 time_t tiempo = time(0);
 struct tm *tlocal = localtime(&tiempo);
 char fechaaux[150];
 strftime(fechaaux,150,"%d/%m/%y %H:%M",tlocal);
 strcpy(ingreso.hora,fechaaux);
 // FIN FECHA
}
//********************************
void destruirIngreso(Ingreso &ingreso){
}
//********************************
int getCodArt(Ingreso &ingreso){
 return ingreso.cod_articulo;
}
//********************************
int getCant(Ingreso &ingreso){
 return ingreso.cantidad;
}
//********************************
char getHora(Ingreso &ingreso){
cout<<ingreso.hora<<endl;
    fflush(stdin);
}
//********************************
void setCodArt(Ingreso &ingreso,int codart){
ingreso.cod_articulo=codart;
}
//********************************
void setCant(Ingreso &ingreso,int cant){
ingreso.cantidad=cant;
}
