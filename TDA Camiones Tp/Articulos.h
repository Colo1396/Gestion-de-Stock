#ifndef __ARTICULOS_H__
#define __ARTICULOS_H__

typedef struct {
int codart;
float precio;
char descripcion[11];
}Articulos;

void contructor(Articulos &articulos);
void contructor(Articulos &articulos,int codart,float precio, char descripcion);

void setCodArt(Articulos &articulos,int codart);
void setPrecio(Articulos &articulos,float precio);
void setDescripcion(Articulos &articulos,char descripcion);

int getCodArt(Articulos &articulos);
float getPrecio(Articulos &articulos);
char getDescripcion(Articulos &articulos);


void destructor(Articulos &articulos);







#endif // __ARTICULOS_H__
