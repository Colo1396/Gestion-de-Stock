#include "Voto.h"
#include "Funciones.h"
#include "conio.h"

void crearVoto(Voto *voto){
    voto->idVoto = -1;
    voto->idCandidato = -1;
}

void destruirVoto(Voto voto){
}

void setIdVoto(PtrDato voto, int idVoto){
    ((Voto*)voto)->idVoto = idVoto;
}

int getIdVoto(PtrDato voto){
    return ((Voto*)voto)->idVoto;
}

void setIdCandidatoVoto(PtrDato voto,int idCandidato){
    ((Voto*)voto)->idCandidato = idCandidato;
}

int getIdCandidatoVoto(PtrDato voto){
    return ((Voto*)voto)->idCandidato;
}


void votar(Lista &lstProvincias, Lista &lstMesas, Lista &lstCandidatos, Lista &lstPartidos,int c){

    bool encontrado = true;
    bool voto = false;
    int idProvincia = 0;
    int idMesa = 0;
    char rta='s';

    while(rta=='s'|| rta=='S')
    {


    system("CLS");
    imprimirLstProvincias(lstProvincias);
    printf("En que provincia se realizara el voto? (Ingrese ID)\n");
    scanf("%d",&idProvincia);
     PtrNodoLista cursor = primero(lstProvincias);
     while (( cursor != fin( )) && (encontrado)){
        if (getIdProvincia(cursor->dato)==idProvincia){
            encontrado=false;
            }
        else cursor = siguiente(lstProvincias, cursor);

        if(cursor==fin() && encontrado)
        {
            printf("la provincia que ingreso no es valida\n\n");
            printf("Ingrese de nuevo el ID:  ");
            scanf("%d",&idProvincia);
            encontrado = true;
            cursor=primero(lstProvincias);
        }

    }

    PtrNodoLista provincia = buscarProvinciaPorId(idProvincia,lstProvincias);
    system("CLS");



    if(longitud(getLstMesas(provincia->dato))==0){
        int id=0;
        imprimirLstMesas(getLstMesas(provincia->dato));
        printf("Agregue una\n");
        printf("ID: \n");
        scanf("%d",&id);
        int idMes = altaMesaEnFuncion(lstProvincias,lstMesas,lstCandidatos,lstPartidos,id);
                    //int idMes = altaMesa(lstMesas,lstProvincias);
                    int idPro= getIdProvincia(provincia->dato);
                    Provincia *pro = new Provincia;
                    Mesa *mes = new Mesa;


                    fflush(stdin);
                    PtrNodoLista puntero=buscarProvinciaPorId(idPro, lstProvincias);
                    if(puntero!=fin()){
                    pro=(Provincia*) puntero->dato;
                    }


                    PtrNodoLista punteroMes=buscarMesaPorId(idMes, lstMesas);
                    if(punteroMes!=fin()){
                    mes=(Mesa*) punteroMes->dato;
                    }

                    agregarMesa(pro, (Mesa*) buscarMesaPorId(idMes, lstMesas)->dato);
    }
    system("CLS");
    imprimirLstMesas(getLstMesas(provincia->dato));
    printf("En que mesa debe votar? (Ingrese ID)\n");
    scanf("%d",&idMesa);

    PtrNodoLista cursor2 = primero(getLstMesas(provincia->dato));
    encontrado = true;
     while (( cursor2 != fin( )) && (encontrado)){
        if (getIdMesa(cursor2->dato)==idMesa){
            encontrado=false;
            }
        else cursor2 = siguiente(getLstMesas(provincia->dato), cursor2);

        if(cursor2==fin() && encontrado)
        {
            char resp;
            printf("La Mesa que ingreso no existe, desea probar nuevamente con otro ID? S/N\n\n");
            scanf(" %c",&resp);
            if(resp == 's' || resp == 'S'){
                printf("Ingrese de nuevo el id:  ");
                scanf("%d",&idMesa);
                encontrado = true;
                cursor2=primero(getLstMesas(provincia->dato));
            }else{
                char resp2;
                printf("Desea abrir la mesa? s/n\n");
                scanf(" %c",&resp2);
                if(resp2 == 's' || resp2 == 'S'){
                    int idMes = altaMesaEnFuncion(lstProvincias,lstMesas,lstCandidatos,lstPartidos,idMesa);
                    //int idMes = altaMesa(lstMesas,lstProvincias);
                    int idPro= getIdProvincia(provincia->dato);
                    Provincia *pro = new Provincia;
                    Mesa *mes = new Mesa;


                    fflush(stdin);
                    PtrNodoLista puntero=buscarProvinciaPorId(idPro, lstProvincias);
                    if(puntero!=fin()){
                    pro=(Provincia*) puntero->dato;
                    }


                    PtrNodoLista punteroMes=buscarMesaPorId(idMes, lstMesas);
                    if(punteroMes!=fin()){
                    mes=(Mesa*) punteroMes->dato;
                    }

                    agregarMesa(pro, (Mesa*) buscarMesaPorId(idMes, lstMesas)->dato);
                }
        }
        encontrado = true;
        cursor2 = primero(getLstMesas(provincia->dato));
    }
}

    printf("%d es", getIdMesa(cursor2->dato));


    //PtrNodoLista mesa = buscarMesaPorId(idMesa,getLstMesas(provincia->dato));


    char resp3;
    if(!geturnaActiva((((Mesa*)cursor2->dato)->urna))){
        system("CLS");
        printf("*La mesa seleccionada no tiene una urna asignada, desea asignar una? S/N \n");
        scanf(" %c",&resp3);
        if(resp3 == 's' || resp3 == 'S'){
            altaUrnaEnFuncion(lstProvincias,lstMesas,lstCandidatos,lstPartidos,idProvincia,idMesa,c);
        }else{
            registroVotos(lstProvincias,lstMesas,lstCandidatos,lstPartidos,c);
        }
    }

        system("CLS");
        int respuesta;
        printf("1- Ver candidatos ordenados alfabeticamente\n");
        printf("2- Ver partidos ordenados alfabeticamente con sus candidatos\n");
        scanf("%d",&respuesta);
        if(respuesta == 1){
            imprimirLstCandidatosConPartidoOC(lstCandidatos,lstPartidos);
        }else{
            imprimirLstCandidatosConPartidoOP(lstPartidos);
        }

        int idCandidato;
        printf("****** Ingrese el ID del candidato que desea Votar *******\n");
        scanf("%d",&idCandidato);
        encontrado = true;
        PtrNodoLista cursor3 = primero(lstCandidatos);
        while (( cursor3 != fin()) && (encontrado)){
        if (getIdCandidato(cursor3->dato)==idCandidato){
            encontrado=false;
            }
        else cursor3 = siguiente(lstCandidatos, cursor3);

        if(cursor3==fin() && encontrado)
        {
            printf("*El candidato que ingreso no es valido\n\n");
            printf("*Ingrese de nuevo el ID:  ");
            scanf("%d",&idCandidato);
            encontrado = true;
            cursor3=primero(lstCandidatos);
        }

        }

    if(!listaVacia(getLstVotos((((Mesa*)cursor2->dato)->urna)))){
        reordenar(getLstVotos((((Mesa*)cursor2->dato)->urna)));

        PtrNodoLista ult = ultimo(getLstVotos((((Mesa*)cursor2->dato)->urna)));

        int v = getIdVoto(ult->dato);

        c = v+1;
    }else{
        c = 1;
    }



    Voto *vot = new Voto;
    crearVoto(vot);
    setIdVoto(vot,c);
    setIdCandidatoVoto(vot,idCandidato);

    adicionarFinal(getLstVotos((((Mesa*)cursor2->dato)->urna)),vot);

    PtrNodoLista aux = primero(getLstVotos((((Mesa*)cursor2->dato)->urna)));
    while(aux != fin()){
        printf("%d\n", getIdVoto(aux->dato));
        printf("%d\n", getIdCandidatoVoto(aux->dato));
        aux = siguiente(getLstVotos((((Mesa*)cursor2->dato)->urna)),aux);
    }
    system("PAUSE");
    system("cls");
    printf("Desea seguir votando? S/N\n");
    fflush(stdin);
    scanf("%c", &rta);
    }
    system("PAUSE");
}







