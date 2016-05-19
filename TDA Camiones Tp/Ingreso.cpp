#include "Ingreso.h"

//********************************
void crearIngreso(Ingreso &ingreso){
ingreso.cod_articulo=0;
ingreso.cantidad=0;
}
//********************************
void crearIngreso(Ingreso &ingreso,int CodArt,int Cant){
ingreso.cod_articulo=CodArt;
ingreso.cantidad=Cant;
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
void setCodArt(Ingreso &ingreso,int codart){
ingreso.cod_articulo=codart;
}
//********************************
void setCant(Ingreso &ingreso,int cant){
ingreso.cantidad=cant;
}
