//Ejercicio 16.
//Se lee de teclado una secuencia de números enteros, finalizando cuando el usuario ingresa un cero (que no
//debe insertarse). Los números leídos deberán ser almacenados en una lista circular. Hacer dos versiones,
//insertando en cada una con diferente criterio, a saber:
//a) Al inicio de la lista.
//b) Al final de la lista.
//Finalmente, imprimir la lista.


#include<iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void imprimir(Nodo* lista) {
	if(lista!= NULL){
		Nodo* aux=lista->siguiente;
	    do{
	    	cout<<aux->dato<<endl;
	    	aux=aux->siguiente;
	    }while(aux!=lista->siguiente);
	}

}

Nodo* cargarPrincipio(Nodo* lista, int numero){
	Nodo* nuevo =new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente= NULL;
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente= lista->siguiente;
		lista->siguiente=nuevo;
	}
	return lista;//si return nuevo seria insertal al final
	
}

int main(){
	Nodo* lista=NULL, *lista2=NULL;
	int numero;
	
	cout<<"ingrese numero(0 para terminar): "<<endl;
	cin>>numero;
	while(numero!=0){
		lista=cargarPrincipio(lista, numero);
		cout<<"ingrese numero(0 para terminar): "<<endl;
		cin>>numero;	
	}
	cout<<endl;
	imprimir(lista);
	cout<<endl;
	return 0;
}
