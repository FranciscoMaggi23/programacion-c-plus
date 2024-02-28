//Ejercicio 13.
//Dos sucursales de Fiestísima disponen cada una de una lista enlazada simple con el detalle de las ventas
//realizadas. De cada venta se conoce: código de producto y cantidad vendida (un producto pudo haber sido
//vendido 0, 1 o más veces en la misma sucursal). Las listas de ventas están ordenadas de menor a mayor por
//código de producto. Realizar una función que reciba las dos listas y retorne una nueva lista unificando todas las
//ventas, ordenada por el mismo criterio. Utilizar un algoritmo destructivo (que reutilice los nodos de las listas
//originales). Agregar las funciones auxiliares que sean necesarias.


#include<iostream>
using namespace std;

struct Venta {
    int codigoProducto;
    int cantidadVendida;
};

struct NodoVenta{
	Venta venta;
	NodoVenta* siguiente;
};

void imprimirlista(NodoVenta* lista){
	if(lista!=NULL){
		for(NodoVenta* i=lista; i!=NULL; i= i->siguiente){
			cout << i->venta.codigoProducto << endl;
//	        cout << i->venta.cantidadVendida << endl;
		}
	}
}

NodoVenta* insertarOrdenado(NodoVenta* lista, NodoVenta* nuevo){
	if(lista==NULL || nuevo->venta.codigoProducto < lista->venta.codigoProducto){
		nuevo->siguiente=lista;
		lista=nuevo;
	}else{
		NodoVenta* aux=lista;
		while(aux->siguiente!=NULL && aux->siguiente->venta.codigoProducto < nuevo->venta.codigoProducto){
			aux=aux->siguiente;
		}
		nuevo->siguiente=aux->siguiente;
		aux->siguiente=nuevo;
	}
	return lista;
}

NodoVenta* unificarlistas(NodoVenta* & lista1, NodoVenta* & lista2){
	NodoVenta* listaunificada, * anterior=NULL;
	
	while(lista1!=NULL && lista2 != NULL){
		if(lista1->venta.codigoProducto < lista2->venta.codigoProducto){
			anterior=lista1;
			lista1=lista1->siguiente;
		}else{
			anterior=lista2;
			lista2=lista2->siguiente;
		}
		anterior->siguiente=NULL;
		listaunificada=insertarOrdenado(listaunificada, anterior);
	}
	while(lista1!=NULL){
		anterior=lista1;
		lista1=lista1->siguiente;
		anterior->siguiente=NULL;
		listaunificada=insertarOrdenado(listaunificada, anterior);
	}
	while(lista2!=NULL){
		anterior=lista2;
		lista2=lista2->siguiente;
		anterior->siguiente=NULL;
		listaunificada=insertarOrdenado(listaunificada, anterior);
	}
	return listaunificada;
}


NodoVenta* crearNodo(NodoVenta* lista, Venta venta){
	NodoVenta* nuevo = new NodoVenta;
	nuevo->venta.codigoProducto= venta.codigoProducto;
	nuevo->venta.cantidadVendida= venta.cantidadVendida;
	nuevo->siguiente= NULL;
	
	lista=insertarOrdenado(lista, nuevo);
	
	return lista;
	
}

NodoVenta* cargarDatos(NodoVenta* lista){
	Venta venta;
	
	for(int i=0; i<3; i++){
		cout<<"ingresar codigo: "<<endl;
		cin>>venta.codigoProducto;
		
		cout<<"ingresar cantidad vendida: "<<endl;
		cin>>venta.cantidadVendida;
		
		lista=crearNodo(lista, venta);
	}
	return lista;
}

int main(){
	NodoVenta* lista1=NULL, *lista2=NULL, *listaunificada=NULL;
	
	lista1=cargarDatos(lista1);
	
	cout<<"cargamos lista 2:"<<endl;
	
	lista2=cargarDatos(lista2);
	
	listaunificada=unificarlistas(lista1, lista2);
	
	cout<<endl;
	
	imprimirlista(listaunificada);
	
//	for(int i=0; i<3; i++){
//		cout<<"ingresar codigo: "<<endl;
//		cin>>venta.codigoProducto;
//		
//		cout<<"ingresar cantidad vendida: "<<endl;
//		cin>>venta.cantidadVendida;
//		
//		lista1=crearNodo(lista1, venta);
//	}
//	for(int i=0; i<3; i++){
//		cout<<"ingresar codigo: "<<endl;
//		cin>>venta.codigoProducto;
//		
//		cout<<"ingresar cantidad vendida: "<<endl;
//		cin>>venta.cantidadVendida;
//		
//		lista2=crearNodo(lista2, venta);
//	}
	
	
	return 0;
}

//ok
