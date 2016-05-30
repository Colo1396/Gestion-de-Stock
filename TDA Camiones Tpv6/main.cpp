#include <iostream>
#include "Solicitud.h"
#include "Reposicion.h"
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

using namespace std;

int main()
{   FILE *ptrING; //Puntero de archivo INGRESO.
    FILE *ptrSOL; //Puntero de archivo SOLICITUDES.
    ptrING=fopen("ingresos.db","r"); // LOS ABRIMOS EN EL MAIN PARA CERRARLOS
    ptrSOL=fopen("solicitudes.db","r"); // DENTRO DEL MISMO.
    //A modo de prueba, leemos la primer linea de cada archivo.
    while (!feof(ptrING) && !feof(ptrSOL)){
    correr(ptrING,ptrSOL);
    }
    printf("SE TERMINO EL PROGRAMA");
    getch();
    fclose(ptrING);// CERRAMOS LOS ARCHIVOS AL FINAL DEL PROGRAMA
    fclose(ptrSOL);// CERRAMOS LOS ARCHIVOS AL FINAL DEL PROGRAMA
    return EXIT_SUCCESS;
}
