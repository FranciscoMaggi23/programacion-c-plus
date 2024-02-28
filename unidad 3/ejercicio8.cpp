//Ejercicio 8.
//Implementar una funci�n que reciba dos par�metros: una lista enlazada simple de n�meros enteros y un
//n�mero entero. La funci�n debe eliminar todas las ocurrencias del n�mero indicado en el segundo par�metro.
//Retornar la cantidad de ocurrencias eliminadas. Nota: se debe pasar una sola vez por cada uno de los
//elementos de la lista.

#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};
void mostrarLista(Nodo* inicio){
	cout<<"ingresa al for"<<endl;
	for(Nodo* i=inicio; i!=NULL; i= i->siguiente){
		
		cout<<"el numero de la lista es: "<<i->dato<<endl;
	}
}

Nodo* eliminarOcurrencias(Nodo* lista, int numero){
	Nodo* aEliminar;
	Nodo* aux=lista;
	int contador=0;
	
	while(aux!=NULL){
		if(lista->dato==numero){
			aEliminar= lista;
			lista= lista->siguiente;
			aux= aux->siguiente;
			delete aEliminar;
			contador++;
	} else{
		if(aux->siguiente!=NULL && aux->siguiente->dato==numero){
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


Nodo* insertarFin(Nodo* lista, Nodo* nuevo){
	if(lista==NULL){
			lista=nuevo;
		}else{
			Nodo * aux=lista;
			while(aux->siguiente!= NULL){
				aux= aux->siguiente;
			}
			aux->siguiente= nuevo;
		}
	return lista;
}

Nodo* cargarlista(Nodo* lista){
	int numero;
	
	cout<<"ingrese numero: "<<endl;
	cin>>numero;
	
	while(numero>=0){
		Nodo* nuevo= new Nodo;
		nuevo->dato=numero;
		nuevo->siguiente=NULL;
		lista=insertarFin(lista, nuevo);
		cout<<"ingrese numero: "<<endl;
		cin>>numero;
		
	}
	return lista;
}




int main(){
	Nodo *lista=NULL;
	int entero=6;
	
	lista=cargarlista(lista);
	mostrarLista(lista);
	lista=eliminarOcurrencias(lista,entero);
	
	mostrarLista(lista);
}



