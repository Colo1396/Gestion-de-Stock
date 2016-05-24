#ifndef __REPPOSICION_H__
#define __REPPOSICION_H__

typedef struct{
int cod_articulo;
int cantidad;
char hora[150];
}Reposicion;
//********************************
void crearReposicion(Reposicion &reposicion);
//********************************
void crearReposicion(Reposicion &reposicion,int CodArt,int Cant,char hora);
//********************************
void destruirReposicion(Reposicion &reposicion);
//********************************
int getCodArt(Reposicion &reposicion);
//********************************
int getCant(Reposicion &reposicion);
//********************************
char getHora(Reposicion &reposicion);
//********************************
void setCodArt(Reposicion &reposicion,int codart);
//********************************
void setCant(Reposicion &reposicion,int cant);

#endif // __REPPOSICION_H__
