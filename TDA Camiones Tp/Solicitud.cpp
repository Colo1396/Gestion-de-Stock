#include "Solicitud.h"
#include "time.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstring>
using namespace std;
//********************************
void crearSolicitud(Solicitud &solicitud){
solicitud.id_pedido=0;
solicitud.cod_suc=0;
solicitud.cod_articulo=0;
solicitud.cantidad=0;
 //*************************//
 //          FECHA          //
 //*************************//
 time_t tiempo = time(0);
 struct tm *tlocal = localtime(&tiempo);
 char fechaaux[128];
 strftime(fechaaux,128,"%d/%m/%y %H:%M",tlocal);
 strcpy(solicitud.hora,fechaaux);
 // FIN FECHA
}
//********************************
void crearSolicitud(Solicitud &solicitud,int IdPed,int CodSuc,int CodArt,int cant){
solicitud.id_pedido=IdPed;
solicitud.cod_suc=CodSuc;
solicitud.cod_articulo=CodArt;
solicitud.cantidad=cant;
}

//********************************
void destruirSolicitud(Solicitud &solicitud){
}
//********************************
int getIdPedido(Solicitud &solicitud){
return solicitud.id_pedido;
}
//********************************
int getCodSuc(Solicitud &solicitud){
return solicitud.cod_suc;
}
//********************************
int getCodArt(Solicitud &solicitud){
return solicitud.cod_articulo;
}
//********************************
int getCant(Solicitud &solicitud){
return solicitud.cantidad;
}
//********************************
char getHora(Solicitud &solicitud){
 cout<<solicitud.hora<<endl;
  fflush(stdin);
}
//********************************
void setIdPedido(Solicitud &solicitud,int IdPed){
solicitud.id_pedido=IdPed;
}
//********************************
void setCodSuc(Solicitud &solicitud,int CodSuc){
solicitud.cod_suc=CodSuc;
}
//********************************
void setCodArt(Solicitud &solicitud,int CodArt){
solicitud.cod_articulo=CodArt;
}
//********************************
void setCantidad(Solicitud &solicitud,int Cant){
solicitud.cantidad=Cant;
}
//********************************
void setHora(Solicitud &solicitud,char h){

}
//********************************
