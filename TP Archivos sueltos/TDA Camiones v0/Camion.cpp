#include "Camion.h"
#include    <iostream>
using namespace std;
//como seria el id del camion?
//********************************
//creamos el constructor del camion.
void crearCamion(Camion &camion){
camion.id_camion=0;
camion.carga_total=0;
camion.porcentaje=0;
camion.id_suc=0;
}
//********************************
//creamos un constructor sobrecargado del cambion
void crearCamion(Camion &camion,int idCamion,float Ct,float porc,int idSuc){
camion.id_camion=idCamion;
camion.carga_total=Ct;
camion.porcentaje=porc;
camion.id_suc=idSuc;
}
//********************************
void destruirCamion(Camion &camion);
//********************************
//obtenemos el ID del camion
int getId_Camion(Camion &camion){
 return camion.id_camion;
}
//********************************
//obtenemos la carga del camion
float getCarga_T(Camion &camion){
 return camion.carga_total;
 }
//********************************
//obtenemos el porcentaje del camion
float getPorcentaje(Camion &camion){
 return camion.porcentaje;
 }
//********************************
//obtenemos el id de la sucursal
int getId_Suc(Camion &camion){
 return camion.id_suc;
}
//********************************
//modificamos el id del camion
void setId_Camion(Camion &camion,int idCamion){
 camion.id_camion=idCamion;
}
//********************************
//modificamos la carga del camion
void setCarga_T(Camion &camion,float cT){
 camion.carga_total=cT;
 }
//********************************
//modificamos el porcentaje
void setPorcentaje(Camion &camion,float porc){
 camion.porcentaje=porc;
}
//********************************
//modificamos el id de la sucursal
void setId_suc(Camion &camion,int idSuc){
 camion.id_suc=idSuc;
}
//********************************
/*verCamion(Camion &camion){
cout<<camion.id_camion<<endl;
}*/
