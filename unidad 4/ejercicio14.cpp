//Ejercicio 14.
//Analizar el programa siguiente (sin ejecutarlo en la máquina) e indicar cómo queda la lista luego de la
//ejecución.

#include<iostream>
using namespace std;

struct Nodo {
	 int dato;
	 Nodo* siguiente;
};
Nodo* e(Nodo* inicio, int k) {
	if (k < 1)
	 	return inicio;
	if (inicio == NULL)
		return NULL;
	if (k == 1) {
		Nodo *aux = inicio->siguiente;
	 	delete(inicio);
		return aux;
 	}	
	 else {
		 inicio->siguiente = e(inicio->siguiente, k-1);//inicio->siguiente=6, k-1=1;
		 return inicio;
	 }
} 
Nodo* a(Nodo* inicio, int d) {
	 if (inicio == NULL) {
		 Nodo* nuevo = new Nodo;
		 nuevo->dato = d;
		 nuevo->siguiente = NULL;
		 return nuevo;
 	}
	 else {
		 inicio->siguiente = a(inicio->siguiente, d);
	 }
 	return inicio;
}

void imprimir(Nodo* inicio){
	Nodo* aux=inicio;
	do{
		
		cout<<aux->dato;
		aux=aux->siguiente;
	}while(aux!=inicio);
}

int main() {
	 Nodo* inicio=NULL;
	 inicio = a(inicio, 9);
	 inicio = a(inicio, 6);
	 inicio = a(inicio, 4);
	 inicio = a(inicio, 7);//hasta aca carga la lista al final= 9-6-4-7
	 inicio = e(inicio, 2);//aca elimina un elemento,(el de la posicion 2 osea 6)
	 
	 imprimir(inicio);
}

