#include <iostream>
#include "Solicitud.h"
#include "Ingreso.h"
#include "Camion.h"
#include "Pilas.h"
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstring>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Camion truc;
    crearCamion(truc,123,3.1,2.35,68);
    cout<<getId_Camion(truc)<<endl;
    Solicitud stock;
    crearSolicitud(stock);
    cout<<getCodArt(stock)<<endl;
    cout<<"se viene la solicitud"<<endl;
    Solicitud stockes;
    crearSolicitud(stockes);
    cout<<getHora(stockes)<<endl;
    Ingreso ing;
    crearIngreso(ing);
    cout<<getHora(ing)<<endl;
    fflush(stdin);

    Pila pila;
    crearPila(pila);
    push(pila,truc);
    mostrar_pila(pila);


    return EXIT_SUCCESS;
}
