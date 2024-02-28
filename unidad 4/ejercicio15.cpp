//Ejercicio 15.
//Escribir una función recursiva que, dada una lista de enteros, retorne la suma de todos sus elementos. En caso
//de que la lista esté vacía, deberá retornar 0.
//Ejemplo: si la lista contiene 5 - 2 - 1 - 9 retornará 17.



#include<iostream>
using namespace std;


struct Nodo{
	int dato;
	Nodo* siguiente;
};

int suma(Nodo* lista){
	int cont=0;
	if(lista==NULL){
		return cont;
	}else{
		cont=lista->dato;
		Nodo* aux=lista->siguiente;
		cont+=suma(aux); 
	}
	return cont;
}


Nodo* cargarLista(Nodo* lista, int numero){
	Nodo* nuevo= new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevo;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente= nuevo;
	}
	return lista;
	
}


int main(){
	Nodo* lista=NULL;
	
	lista=cargarLista(lista, 5);
	lista=cargarLista(lista, 2);
	lista=cargarLista(lista, 1);
	lista=cargarLista(lista, 9);
	
	cout<<suma(lista);
	
	return 0;
}
