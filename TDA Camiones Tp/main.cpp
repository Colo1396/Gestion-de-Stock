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
#include "Articulos.h"

using namespace std;

void mostrarArt(){
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
                cout<<"Cod.Art||"<<"Precio||"<<"Descipcion||"<<"\n"<<endl;

    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
            cpToken = strtok (linea, ";");
            strcpy(DatoA.CodArt,cpToken);
            cpToken = strtok (NULL, ";");
            strcpy(DatoA.precio,cpToken);
            cpToken = strtok (NULL, ";");
            strcpy(DatoA.desc,cpToken);

        cout<<"  "<<DatoA.CodArt<<"\t|"
            <<DatoA.precio<<"\t|"
            <<DatoA.desc<<"|"<<endl;
    }
    archivo.close();
}

void correr(){
    struct DatosIngresos{
int CodArt;
float Cantidad;
char Hora[10];
}DatoI;

    ifstream archivoI("ingresos.db");
    if(archivoI.fail())
    cerr << "Error al abrir el archivo ingreso" << endl;

char cadenaI[50];
char* cpToken;


    archivoI.getline(cadenaI, sizeof(cadenaI));
    cpToken = strtok (cadenaI, ";");
    DatoI.CodArt= atoi(cpToken);
    cpToken = strtok (NULL, ";");
    DatoI.Cantidad= atof(cpToken);
    cpToken = strtok (NULL, ";");
    strcpy (DatoI.Hora, cpToken);
    char calTiempo[20];//contiene en forma de cadena la hora
    strcpy (calTiempo, cpToken); // COPIA EL CONTENIDO DE CPTOKEN EN LA CADENA
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
   cout<<"Es igual a %d Segundos de ingreso. \n\n"<<st<<endl;


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

 ifstream archivoS("solicitudes.db");
    if(archivoS.fail())
    cerr << "Error al abrir el archivo solicitud" << endl;

    archivoS.getline(cadenaS, sizeof(cadenaS));

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

   cout<<"Es igual a %d Segundos de solicitud. \n\n"<<st2<<endl;


   char caracter;
   if (st<=st2){
         cout<<"entro en id"<<endl;
//reponer art
    }

    else{
        cout<<"entro en else"<<endl;
   /* fseek( ptrSOL, pos2, SEEK_SET);
    pos2Desp=ftell(ptrSOL);
    printf("Posicion DESPUES del FSEEK: %d\n\n",pos2Desp);*/
}

//despachar pedido(restar del stok)
//si no se puede poner en faltantes
//volver linea

    archivoI.close();
    archivoS.close();
}




int main()
{
    mostrarArt()
;

    return EXIT_SUCCESS;
}
