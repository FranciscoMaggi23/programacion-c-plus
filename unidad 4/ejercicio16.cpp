//Ejercicio 16.
//Escribir una función recursiva que, dadas dos listas enlazadas simples, retorne true si ambas listas tienen la
//misma longitud (cantidad de nodos), false en caso contrario. Optimizar la función para que, en caso de que una
//lista sea más corta que la otra (por ejemplo, la lista A tiene 10000 nodos y la lista B tiene 5 nodos), no se
//continúe contabilizando la cantidad de nodos de la lista más larga.

#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};

bool funcion(Nodo* lista1, Nodo* lista2){
	if(lista1==NULL && lista2==NULL){
		return true;
	}else{
		if(lista1==NULL && lista2!=NULL){
			return false;
		}
		if(lista2==NULL && lista1!=NULL){
			return false;
		}
		Nodo* aux1=lista1->siguiente, *aux2=lista2->siguiente;
		return funcion(aux1,aux2);
	}
}


Nodo* cargarLista(Nodo* lista, int num){
	Nodo* nuevo= new Nodo;
	nuevo->dato=num;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevo;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	return lista;
	
}


int main(){
	Nodo* lista1=NULL, *lista2=NULL;
	bool a;
	lista1= cargarLista(lista1,1);
	lista1= cargarLista(lista1,2);
	lista1= cargarLista(lista1,3);

	lista2= cargarLista(lista2,4);
//	lista2= cargarLista(lista2,5);
	lista2= cargarLista(lista2,6);
	
	
	a=funcion(lista1,lista2);
	if(a){
		cout<<"tienen la misma longitud"<<endl;
	}else{
		cout<<"son distintas"<<endl;
	}
	return 0;
}


