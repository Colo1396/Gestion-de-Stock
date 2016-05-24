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
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Camion truc;
    Camion toyota;
    crearCamion(toyota);

    Camion ford;
    crearCamion(ford,12,12.2,23.2,123);

    cout<<getId_Camion(toyota)<<endl;
    cout<<getId_Camion(ford)<<endl;

    /*Solicitud stock;
    crearSolicitud(stock);
    cout<<getCodArt(stock)<<endl;
    cout<<"se viene la solicitud"<<endl;
    Solicitud stockes;
    crearSolicitud(stockes);
    cout<<getHora(stockes)<<endl;
    Reposicion ing;
    crearReposicion(ing);
    cout<<getHora(ing)<<endl;
    fflush(stdin);
*/



    return EXIT_SUCCESS;
}
