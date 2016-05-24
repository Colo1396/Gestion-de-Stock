#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
using namespace std;

struct DatosIngresos{
int CodArt;
int Cantidad;
char Hora[10];
};


char cadena[150];
char* cpToken;
int atoied = 1;

DatosIngresos Datos;

int main(int argc, char *argv[])
{
   FILE *ptr1;

     if((ptr1=fopen("ingresos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de INGRESOS no existe\n");
          }
    while (fscanf (ptr1, "%s", cadena) != EOF) {
    cpToken = strtok (cadena, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    Datos.CodArt= atoi(cpToken);
    // supuse que el primero será la cantidad
    cpToken = strtok (NULL, ";");
    Datos.Cantidad= atoi(cpToken);
    //obtiene el segundo campo... cantidad
    cpToken = strtok (NULL, ";");
    strcpy (Datos.Hora, cpToken);
    // obtiene el tercer campo... HORA
    //***********************************
    char calTiempo[20];
    strcpy (calTiempo, cpToken);
    printf("%s\n",calTiempo);
    cpToken= strtok (calTiempo,":");
    int h;
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int m;
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int s;
    s=atoi(cpToken)+(h/3600)+(m/60);

    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("%d \n",s);

    }// sigue leyendo el archivo hasta que llegue al fin

   fclose (ptr1); // cierra el archivo
   getch();
   return EXIT_SUCCESS;
}
