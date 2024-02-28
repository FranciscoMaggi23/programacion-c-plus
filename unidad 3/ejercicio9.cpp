//Ejercicio 9.
//Desarrollar un programa que realice las siguientes operaciones en listas enlazadas simples de números enteros.
//A. Cargar una lista insertando los elementos ordenados en forma descendente. Finaliza luego de ingresar
//el cero, que también se debe agregar a la lista.
//B. Eliminar las ocurrencias de los números que son múltiplos de 3.
//C. Imprimir la lista antes y después de la eliminación.


#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};

void imprimirLista(Nodo* lista){
	for(Nodo* i=lista; i!=NULL; i= i->siguiente){
		cout<<i->dato<<endl;
	}
}

Nodo* eliminarOcurrencias(Nodo* lista){
	Nodo* aEliminar;
	Nodo* aux=lista;
	int contador=0;
	
	while(aux!=NULL){
		if(lista->dato%3==0){
			aEliminar= lista;
			lista= lista->siguiente;
			aux= aux->siguiente;
			delete aEliminar;
			contador++;
		} else{
			if(aux->siguiente!=NULL && aux->siguiente->dato%3==0){
				aEliminar=aux->siguiente;
				aux->siguiente=aux->siguiente->siguiente;
				delete aEliminar;
				contador++;
			}else{
				aux=aux->siguiente;
				}
			}
	}
	cout<<"las ocurrencias eliminadas son: "<<contador<<endl;
	return lista;

}


Nodo* cargarlistaOrdenadaDescendente(Nodo* lista){
	int numero;
	do{
		cout<<"ingrese numrto: "<<endl;
		cin>>numero;
		
		Nodo* nuevo=new Nodo;
		nuevo->dato=numero;
		nuevo->siguiente=NULL;
		
		if(lista==NULL || numero>lista->dato){
			nuevo->siguiente=lista;
			lista=nuevo;
		}else{
			Nodo* aux=lista;
			while(aux->siguiente != NULL && aux->siguiente->dato>numero){
				aux= aux->siguiente;
			}	
			if(aux->siguiente!=NULL){
				nuevo->siguiente=aux->siguiente;
			}
			aux->siguiente=nuevo;
			}
		}while(numero!=0);
	return lista;
}



int main(){
	Nodo* lista=NULL;
	
	lista=cargarlistaOrdenadaDescendente(lista);
	imprimirLista(lista);
	lista=eliminarOcurrencias(lista);
	imprimirLista(lista);

}
