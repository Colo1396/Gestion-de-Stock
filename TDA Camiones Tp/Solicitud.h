#ifndef __SOLICITUD_H__
#define __SOLICITUD_H__

typedef struct{
int id_pedido;
int cod_suc;
int cod_articulo;
int cantidad;
//hora

}Solicitud;
//********************************
void crearSolicitud(Solicitud &solicitud);
//********************************
void crearSolicitud(Solicitud &solicitud,int id_pedido,int cod_suc,int cod_articulo,int cantidad);
//********************************
void destruirSolicitud(Solicitud &solicitud);
//********************************
int getIdPedido(Solicitud &solicitud);
//********************************
int getCodSuc(Solicitud &solicitud);
//********************************
int getCodArt(Solicitud &solicitud);
//********************************
int getCant(Solicitud &solicitud);
//********************************
void setIdPedido(Solicitud &solicitud,int IdPed);
//********************************
void setCodSuc(Solicitud &solicitud,int CodSuc);
//********************************
void setCodArt(Solicitud &solicitud,int CodArt);
//********************************
void setCantidad(Solicitud &Solicitud,int Cant);
//********************************

#endif // __SOLICITUD_H__
