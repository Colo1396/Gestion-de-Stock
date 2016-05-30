




int  leerIngreso(){
struct DatosIngresos{
int CodArt;
float Cantidad;
char Hora[10];
};

char cadena[50];
char* cpToken;

DatosIngresos Datos;
FILE *ptr1;

     if((ptr1=fopen("ingresos.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de INGRESOS no existe\n");
          }
    fscanf (ptr1, "%s", cadena);
    cpToken = strtok (cadena, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    Datos.CodArt= atoi(cpToken);
    // supuse que el primero será la cantidad
    cpToken = strtok (NULL, ";");
    Datos.Cantidad= atof(cpToken);
    //obtiene el segundo campo... cantidad
    cpToken = strtok (NULL, ";");
    strcpy (Datos.Hora, cpToken);
    // obtiene el tercer campo... HORA
    //***********************************
    char calTiempo[20];
    strcpy (calTiempo, cpToken);
    printf("%s \n",calTiempo);
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
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("Es igual a %d Segundos. \n\n",st);

    return st;//devuelve el tiempo

    // sigue leyendo el archivo hasta que llegue al fin

   fclose (ptr1); // cierra el archivo
   getch();

}

//funcion de lectura de solicitud
int leerSolicitud(){

struct DatosSolicitud{
int codSuc;
int CodArt;
float cant;
char Hora[10];

};

char cadena[150];
char* cpToken;
int atoied = 1;
int hh,mm,st;
DatosSolicitud Datos;
FILE *ptr1;

     if((ptr1=fopen("solicitudes.db","r"))==NULL){
          system("cls");
          printf("\n\nEl Archivo de SOLICITUD no existe\n");
          }
    fscanf (ptr1, "%s", cadena) ;
    cpToken = strtok (cadena, ";");
    // obtiene el primer campo del registro y lo guarda en cpToken
    Datos.codSuc= atoi(cpToken);
    //obtiene la sucursal
    cpToken = strtok (NULL, ";");
    Datos.CodArt= atoi(cpToken);
    // supuse que el primero será la cantidad
    cpToken = strtok (NULL, ";");
    Datos.cant= atof(cpToken);
    //obtiene el segundo campo... cantidad
    cpToken = strtok (NULL, ";");
    strcpy (Datos.Hora, cpToken);
    // obtiene el tercer campo... HORA
    //***********************************
    char calTiempo[20];
    strcpy (calTiempo, cpToken);
    printf("%s \n",calTiempo);
    cpToken= strtok(calTiempo,":");
    int h;
    h=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int m;
    m=atoi(cpToken);
    cpToken= strtok (NULL,":");
    int s;
    s=atoi(cpToken);

    hh=h*3600;
    mm=m*60;
    st=hh+mm+s;
    //***********************************
   //printf("%d %d %s \n",Datos.CodArt,Datos.Cantidad,Datos.Hora);
   printf("Es igual a %d Segundos. \n\n",st);
    //devuelve el tiempo
    // sigue leyendo el archivo hasta que llegue al fin
    return st;
   fclose (ptr1); // cierra el archivo
   getch();

}
