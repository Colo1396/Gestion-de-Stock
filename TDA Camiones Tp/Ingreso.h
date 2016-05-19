#ifndef __INGRESO_H__
#define __INGRESO_H__

typedef struct{
int cod_articulo;
int cantidad;
//hora
}Ingreso;
//********************************
void crearIngreso(Ingreso &ingreso);
//********************************
void crearIngreso(Ingreso &ingreso,int CodArt,int Cant);
//********************************
void destruirIngreso(Ingreso &ingreso);
//********************************
int getCodArt(Ingreso &ingreso);
//********************************
int getCant(Ingreso &ingreso);
//********************************
void setCodArt(Ingreso &ingreso,int codart);
//********************************
void setCant(Ingreso &ingreso,int cant);

#endif // __INGRESO_H__
