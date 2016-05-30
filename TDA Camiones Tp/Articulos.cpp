#include "Articulos.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>

void contructor(Articulos &articulos){
articulos.codart=0;
articulos.precio=0;
articulos.descripcion;
}

void contructor(Articulos &articulos,int codart,float precio, char descripcion){
articulos.codart=codart;
articulos.precio=precio;

}

void setCodArt(Articulos &articulos,int codart){
articulos.codart=codart;
}

void setPrecio(Articulos &articulos,float precio){
articulos.precio=precio;
}


void setDescripcion(Articulos &articulos,char descripcion){
//strcpy(articulos.descripcion,descripcion);
}

int getCodArt(Articulos &articulos){
    return articulos.codart;
}
float getPrecio(Articulos &articulos){
    return articulos.precio;
}
char getDescripcion(Articulos &articulos){
    char aux[100];
    strcpy(aux,articulos.descripcion);
}

void destructor(Articulos &articulos){
}
