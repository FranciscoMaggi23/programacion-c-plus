//Ejercicio 5.
//Se lee de teclado una secuencia de números enteros, finalizando cuando el usuario ingresa un cero (que no
//debe insertarse). Los números leídos deberán ser almacenados en una lista enlazada simple. Hacer tres
//versiones, insertando en cada una con diferente criterio, a saber:
//a) Al inicio de la lista.
//b) Al final de la lista.
//c) En la posición correcta para que la lista quede ordenada de menor a mayor. Si el número a insertar ya
//se encontraba en la lista, deberá quedar antes que todas sus repeticiones.
//Finalmente, imprimir la lista.



#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};

Nodo* cargarOrdenado(Nodo* inicio, int numero){
	Nodo* nuevo = new Nodo;
	nuevo->dato= numero;
	nuevo->siguiente= NULL;
	Nodo *aux= inicio;

	
	if(inicio==NULL || inicio->dato>numero){
		nuevo->siguiente= inicio;
		inicio = nuevo;
		
	}else{
		while(aux->siguiente!= NULL && aux->siguiente->dato<numero){
			aux = aux->siguiente;
		}
	}
	
	if(aux->siguiente!= NULL){
		nuevo->siguiente= aux->siguiente;
	}
	
	aux->siguiente=nuevo;
	
	return inicio;
	
}

Nodo* cargarListaFinal(Nodo* fin, int numero){
	Nodo* nuevo= new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente= NULL;
	
	if(fin==NULL){
		fin=nuevo; //fin(123) apunta a (123)nuevo(0) y nuevo apunta a null. fin indicara el primer elemento de la lista
	}else{
		Nodo* aux = fin;
		while(aux->siguiente!= NULL){
			aux= aux->siguiente;
		}
		aux->siguiente= nuevo;
	}
	return fin;
	
	
}




void mostrarLista(Nodo* inicio){
	for(Nodo* i=inicio; i!=NULL; i= i->siguiente){
		cout<<i->dato<<endl;
	}
}




Nodo* cargarLista(Nodo* inicio, int numero){
	Nodo* nuevo= new Nodo;
	nuevo->dato= numero;
	nuevo->siguiente= inicio;
	return nuevo;

}

int main(){
//	Nodo* inicio=NULL, *fin=NULL, *ordenado=NULL;
//	int numero;
//	
//	cout<<"ingrese numero: "<<endl;
//	cin>>numero;
//	
//	while(numero!=0){
//		inicio=cargarLista(inicio, numero);
//		fin= cargarListaFinal(fin, numero);
//		ordenado=cargarOrdenado(ordenado, numero);
//		
//		cout<<"ingrese numero: "<<endl;
//		cin>>numero;
//	}
//	
//	mostrarLista(inicio);
//	mostrarLista(fin);
//	mostrarLista(ordenado);
	string n="ab",l="abc";
	
	if(n>l){
		cout<<"ok";
	}else{
		cout<<"no";
	}

	
	return 0;
}







