#include "Reposicion.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstring>
using namespace std;
//********************************
void crearReposicion(Reposicion &reposicion){
reposicion.cod_articulo=0;
reposicion.cantidad=0;
//reposicion.hora='';
}
//********************************
void crearReposicion(Reposicion &reposicion,int CodArt,int Cant,char hora){
reposicion.cod_articulo=CodArt;
reposicion.cantidad=Cant;
//reposicion.hora=hora;
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
