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

Nodo* cargarOrdenado(Nodo* lista, int num){
	Nodo* nuevo=new Nodo;
	nuevo->dato=num;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevo;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL&&aux->siguiente->dato<num){
			aux=aux->siguiente;
		}
		nuevo->siguiente=aux->siguiente;
		aux->siguiente=nuevo;
	}
	return lista;
}

int main(){
	Nodo* lista=NULL;
	
	lista=cargarOrdenado(lista,9);
	lista=cargarOrdenado(lista,3);
	lista=cargarOrdenado(lista,10);
	lista=cargarOrdenado(lista,11);
	lista=cargarOrdenado(lista,1);
	
	
	for(Nodo* i=lista; i!= NULL; i=i->siguiente){
		cout<<i->dato<<"-";
	}
	
	
	return 0;
}
