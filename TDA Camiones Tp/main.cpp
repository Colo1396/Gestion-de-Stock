#include <iostream>
#include "Solicitud.h"
#include "Ingreso.h"
#include "Camion.h"

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
    Ingreso ing;
    crearIngreso(ing);
    cout<<getCant(ing)<<endl;
    return 0;
}
