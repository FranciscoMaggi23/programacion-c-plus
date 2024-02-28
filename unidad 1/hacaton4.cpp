//Desafío 1: “Potencia”.
//Escribir una función recursiva para calcular la potencia de un número. La función recibirá como parámetros al número y 
//un exponente (ambos enteros positivos), y retornará la potencia: int potencia (int numero, int exponente)
//Nota 1: cualquier número elevado a la 0, da como resultado 1. El 0 elevado a cualquier número positivo, dará siempre como resultado 0.
//Nota 2: puede definirse que X^n = X * X^n-1

//Desafío 2: “Igualdad de longitud”.
//
//Escribir una función recursiva que, dadas dos listas enlazadas simples, retorne true si ambas listas tienen la misma longitud (cantidad de nodos), 
//false en caso contrario. Optimizar la función para que, en caso de que una lista sea más corta que la otra (por ejemplo, la lista A tiene 10000 nodos 
//y la lista B tiene 5 nodos), no se continúe contabilizando la cantidad de nodos de la lista más larga.


#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};

//Desafío 2: “Igualdad de longitud”: la funcion recibe dos listas, recorre ambas lista y verifica si tienen la misma longitud o no

bool longitud(Nodo* lista1, Nodo* lista2){
	if(lista1==NULL && lista2==NULL){//caso base
		return true;
	}else{
		//se evaluan dos condiciones "especiales", si una lista u otra es de mayor longitud retornamos false
		if(lista1==NULL && lista2!=NULL){
			return false;
		}
		if(lista2==NULL && lista1!=NULL){
			return false;
		}
		//creamos nodos auxiliares para recorrer las listas
		Nodo* aux1=lista1->siguiente, *aux2=lista2->siguiente;
		return longitud(aux1,aux2);//caso recursivo
	}
}

//insertamos los elementos al final de la lista
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
//fin desafio 2


//Desafío 1: “Potencia”: la funcion recibe dos numero(uno como base y otro como exponente) y resuelve la operacion matematica usando la recursividad
int potencia(int base, int exponente){
	if(exponente==0){ //caso base retorna 1 
		if(base==0){
			return 0; //caso especial en caso que se ingrese base 0 y exponente 0;
		}else{
			return 1; 
		}
	}
	if(base==0){ //condicion especial
		return 0;
	}
	return base*potencia(base,exponente-1); //caso recursivo, 
}
//fin desafio 1

int main(){
	Nodo* lista1=NULL, *lista2=NULL;
	int base, exponente;
	
	do{
		cout<<"ingrese una base: "<<endl;
		cin>>base;
		
		cout<<"ingrese un exponente: "<<endl;
		cin>>exponente;
	}while(base<0 || exponente<0);
	
	
    cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << potencia(base, exponente) << endl;

	
	lista1=cargarLista(lista1,2);
	lista1=cargarLista(lista1,4);
	lista1=cargarLista(lista1,10);
	
	lista2=cargarLista(lista2,5);
	lista2=cargarLista(lista2,3);
	lista2=cargarLista(lista2,2);
	
	if(	longitud(lista1, lista2)){
		cout<<"tienen la misma longitud"<<endl;
	}else{
		cout<<"tienen distinta longitud"<<endl;
	}
	
	
	return 0;
}
