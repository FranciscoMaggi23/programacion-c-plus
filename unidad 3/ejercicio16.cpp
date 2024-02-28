//Ejercicio 16.
//Se lee de teclado una secuencia de números enteros, finalizando cuando el usuario ingresa un cero (que no
//debe insertarse). Los números leídos deberán ser almacenados en una lista circular. Hacer dos versiones,
//insertando en cada una con diferente criterio, a saber:
//a) Al inicio de la lista.
//b) Al final de la lista.
//Finalmente, imprimir la lista.


#include<iostream>
using namespace std;


struct Num{
	int dato;
	Num* siguiente;
};


void imprimirListas(Num* lista){
	if(lista!=NULL){
		Num* aux= lista->siguiente;
		do{
			cout<<aux->dato<<endl;
			aux= aux->siguiente;
		}while(aux!=lista->siguiente);
	}
}
//crear nodo
Num* crearNodo(int numero){
	Num* nuevo= new Num;
	nuevo->dato=numero;
	nuevo->siguiente=NULL;
	return nuevo;
}
//b) Al final de la lista.
Num* insertarAlFinal(Num* lista, int numero){
	Num* nuevo= crearNodo(numero);
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente= lista->siguiente;
		lista->siguiente=nuevo;
		lista=nuevo;
	}
	return nuevo;

}

//a) Al inicio de la lista.
Num* insertarAlInicio(Num* lista, int numero){
	Num* nuevo= crearNodo(numero);
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente= lista->siguiente;
		lista->siguiente=nuevo;
		return lista;
	}
}

int main(){
	Num* listaCircular=NULL, *listaAlFinal=NULL;
	int numero;
	
	cout<<"ingrese numero: "<<endl;
	cin>>numero;
	while(numero!=0){
		listaCircular=insertarAlInicio(listaCircular,numero);
		listaAlFinal=insertarAlFinal(listaAlFinal,numero);
		
		cout<<"ingrese numero: "<<endl;
		cin>>numero;	
	}
	imprimirListas(listaCircular);
	cout<<endl<<endl;
	imprimirListas(listaAlFinal);
		
	return 0;
}
