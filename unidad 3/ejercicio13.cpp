//Ejercicio 13.
//Dos sucursales de Fiestísima disponen cada una de una lista enlazada simple con el detalle de las ventas
//realizadas. De cada venta se conoce: código de producto y cantidad vendida (un producto pudo haber sido
//vendido 0, 1 o más veces en la misma sucursal). Las listas de ventas están ordenadas de menor a mayor por
//código de producto. Realizar una función que reciba las dos listas y retorne una nueva lista unificando todas las
//ventas, ordenada por el mismo criterio. Utilizar un algoritmo destructivo (que reutilice los nodos de las listas
//originales). Agregar las funciones auxiliares que sean necesarias.


//#include<iostream>
//
//using namespace std;
//
//
//struct sucursal1{
//	int codigoP;
//	int cantidadvendida;
//	sucursal1 * siguiente;
//};
//
//
//sucursal1* insertarOrdenado(sucursal1* lista, sucursal1* nuevo){
//	if(lista==NULL || nuevo->codigoP < lista->codigoP){
//		nuevo->siguiente=lista;
//		lista=nuevo;
//	}else{
//		sucursal1* aux=lista;
//		while(aux->siguiente!=NULL && aux->siguiente->codigoP>nuevo->codigoP){
//			aux=aux->siguiente;
//		}
//		nuevo->siguiente= aux->siguiente;
//		aux->siguiente=nuevo;
//	}
//	return lista;
//}
//
//sucursal1* insertarNodo(sucursal1* lista, int codigo, int venta){
//		sucursal1* nuevo= new sucursal1;
//		nuevo->codigoP=codigo;
//		nuevo->cantidadvendida= venta;
//		nuevo->siguiente= lista;
//		lista=nuevo;
//}
//
//void imprimirLista(sucursal1* lista) {
//    while (lista != NULL) {
//        cout << "Código de producto: " << lista->codigoP << ", Cantidad vendida: " << lista->cantidadvendida << endl;
//        lista = lista->siguiente;
//    }
//}
//
//
//int main(){
////	sucursal1* lista1= NULL, *lista2=NULL;
////	int ventas, codigo;
//	sucursal1* lista1 = NULL;
//    insertarNodo(lista1, 3, 50);
//    insertarNodo(lista1, 6, 30);
//    insertarNodo(lista1, 8, 20);
//
//    sucursal1* lista2 = NULL;
//    insertarNodo(lista2, 2, 40);
//    insertarNodo(lista2, 5, 25);
//    insertarNodo(lista2, 9, 10);
//	
//
//	sucursal1* listaUnificada=insertarOrdenado(lista1, lista2);
//	
//	cout << "Lista unificada:" << endl;
//    imprimirLista(listaUnificada);
//	
//	return 0;
//}

//	cout<<"ingrese el codigo: "<<endl;
//	cin>>codigo;
//	
//	while(codigo1>=0){
//		cout<<"ingrese la cantidad vendida en la lista 1: "<<endl;
//		cin>>ventas;
//		
//		lista1=cargardatos(lista1, ventas);
//		lista1=insertarOrdenado(lista1, nuevo);
//		
//		cout<<"ingrese la cantidad vendida en la lista 2: "<<endl;
//		cin>>ventas;
//		
//		lista2=cargardatos(lista2, ventas);
//		lista2=insertarOrdenado(lista2, nuevo);
//		
//		
//		cout<<"ingrese el codigo: "<<endl;
//		cin>>codigo;		
//	}







#include <iostream>
using namespace std;

// Estructura para los nodos de la lista enlazada
struct Nodo {
    int codigoProducto;
    int cantidadVendida;
    Nodo* siguiente;
};

// Función para insertar un nodo al principio de la lista
void insertarNodo(Nodo*& lista, int codigoProducto, int cantidadVendida) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->codigoProducto = codigoProducto;
    nuevoNodo->cantidadVendida = cantidadVendida;
    nuevoNodo->siguiente = lista;
    lista = nuevoNodo;
}

// Función que une las dos listas y las ordena
Nodo* unificarListas(Nodo*& lista1, Nodo*& lista2) {
    Nodo* listaUnificada = NULL;
    Nodo** temp = &listaUnificada;

    while (lista1 != NULL && lista2 != NULL) {
        if (lista1->codigoProducto <= lista2->codigoProducto) {
            *temp = lista1;
            lista1 = lista1->siguiente;
        } else {
            *temp = lista2;
            lista2 = lista2->siguiente;
        }
        temp = &((*temp)->siguiente);
    }

    *temp = (lista1 == NULL) ? lista2 : lista1;

    return listaUnificada;
}

// Función para imprimir la lista enlazada
void imprimirLista(Nodo* lista) {
    while (lista != NULL) {
        cout << "Código de producto: " << lista->codigoProducto << ", Cantidad vendida: " << lista->cantidadVendida << endl;
        lista = lista->siguiente;
    }
}

// Ejemplo de uso
int main() {
    // Ejemplo de datos de entrada
    Nodo* lista1 = NULL;
    insertarNodo(lista1, 3, 50);
    insertarNodo(lista1, 6, 30);
    insertarNodo(lista1, 8, 20);

    Nodo* lista2 = NULL;
    insertarNodo(lista2, 2, 40);
    insertarNodo(lista2, 5, 25);
    insertarNodo(lista2, 9, 10);

    // Unificar las listas y ordenarlas
    Nodo* listaUnificada = unificarListas(lista1, lista2);

    // Imprimir la lista unificada
    cout << "Lista unificada:" << endl;
    imprimirLista(listaUnificada);

    return 0;
}


