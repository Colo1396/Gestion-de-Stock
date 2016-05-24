#include "Camion.h"
#include    <iostream>
using namespace std;
//como seria el id del camion?
//********************************
void crearCamion(Camion &camion){
camion.id_camion=0;
camion.carga_total=0;
camion.porcentaje=0;
camion.id_suc=0;
}
//********************************
void crearCamion(Camion &camion,int idCamion,float Ct,float porc,int idSuc){
camion.id_camion=idCamion;
camion.carga_total=Ct;
camion.porcentaje=porc;
camion.id_suc=idSuc;
}
//********************************
void destruirCamion(Camion &camion);
//********************************
int getId_Camion(Camion &camion){
 return camion.id_camion;
}
//********************************
float getCarga_T(Camion &camion){
 return camion.carga_total;
 }
//********************************
float getPorcentaje(Camion &camion){
 return camion.porcentaje;
 }
//********************************
int getId_Suc(Camion &camion){
 return camion.id_suc;
}
//********************************
void setId_Camion(Camion &camion,int idCamion){
 camion.id_camion=idCamion;
}
//********************************
void setCarga_T(Camion &camion,float cT){
 camion.carga_total=cT;
 }
//********************************
void setPorcentaje(Camion &camion,float porc){
 camion.porcentaje=porc;
}
//********************************
void setId_suc(Camion &camion,int idSuc){
 camion.id_suc=idSuc;
}
//********************************
/*verCamion(Camion &camion){
cout<<camion.id_camion<<endl;
}*/
