#include "Reposicion.h"
#include <iostream>

using namespace std;
//********************************
void crearReposicion(Reposicion &reposicion){
reposicion.cod_articulo=0;
reposicion.cantidad=0;
 //*************************//
 //          FECHA          //
 //*************************//
 time_t tiempo = time(0);
 struct tm *tlocal = localtime(&tiempo);
 char fechaaux[150];
 strftime(fechaaux,150,"%d/%m/%y %H:%M",tlocal);
 strcpy(reposicion.hora,fechaaux);
 // FIN FECHA
}
//********************************
void crearReposicion(Reposicion &reposicion,int CodArt,int Cant){
reposicion.cod_articulo=CodArt;
reposicion.cantidad=Cant;
 //*************************//
 //          FECHA          //
 //*************************//
 time_t tiempo = time(0);
 struct tm *tlocal = localtime(&tiempo);
 char fechaaux[150];
 strftime(fechaaux,150,"%d/%m/%y %H:%M",tlocal);
 strcpy(reposicion.hora,fechaaux);
 // FIN FECHA
}
//********************************
void destruirReposicion(Reposicion &reposicion){
}
//********************************
int getCodArt(Reposicion &reposicion){
 return reposicion.cod_articulo;
}
//********************************
int getCant(Reposicion &reposicion){
 return reposicion.cantidad;
}
//********************************
char getHora(Reposicion &reposicion){
cout<<reposicion.hora<<endl;
    fflush(stdin);
}
//********************************
void setCodArt(Reposicion &reposicion,int codart){
reposicion.cod_articulo=codart;
}
//********************************
void setCant(Reposicion &reposicion,int cant){
reposicion.cantidad=cant;
}
