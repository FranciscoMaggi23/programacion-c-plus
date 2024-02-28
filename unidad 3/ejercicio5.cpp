//Ejercicio 5.
//Se lee de teclado una secuencia de n�meros enteros, finalizando cuando el usuario ingresa un cero (que no
//debe insertarse). Los n�meros le�dos deber�n ser almacenados en una lista enlazada simple. Hacer tres
//versiones, insertando en cada una con diferente criterio, a saber:
//a) Al inicio de la lista.
//b) Al final de la lista.
//c) En la posici�n correcta para que la lista quede ordenada de menor a mayor. Si el n�mero a insertar ya
//se encontraba en la lista, deber� quedar antes que todas sus repeticiones.
//Finalmente, imprimir la lista.


#include<iostream>
using namespace std;


struct Nodo{
	int numero;
	Nodo* siguiente;
};


Nodo* insertar_al_principio(Nodo* inicio, int dato);

void mostrarLista(Nodo* inicio);

void NewFunction();

Nodo *insertarOrdenado(Nodo *lista, int dato);

Nodo *insertarFinal(Nodo *final, int dato);

int main(){
	int dato;
	Nodo* inicio= NULL;
	Nodo *lista=NULL, *final= NULL;
	
	
	cout<<"ingrese un numero: "<<endl;
	cin>>dato;
	
	while(dato!=0){
		inicio =insertar_al_principio(inicio, dato);
		lista= insertarOrdenado(lista, dato);
		final= insertarFinal(final, dato);
		cout<<"ingrese un numero: "<<endl;
		cin>>dato;	
	}
	//mostrar al inicio
	mostrarLista(inicio);
	cout<<endl;
	//mostrar ordenado
	mostrarLista(lista);
	cout<<endl;
	mostrarLista(final);


	
	
	return 0;
}
//funciones:


Nodo* insertar_al_principio(Nodo* inicio, int dato){
    Nodo* nuevo = new Nodo;
	nuevo->numero=dato;
	nuevo->siguiente= inicio;
	return nuevo;
}

void mostrarLista(Nodo* inicio){
	for(Nodo* actual=inicio; actual!=NULL; actual= actual->siguiente){
		cout<<actual->numero<<endl;
	}
}


Nodo* insertarOrdenado(Nodo* lista, int dato){
	Nodo* nuevo= new Nodo;
	nuevo->numero= dato;
	nuevo->siguiente= NULL;
	
	Nodo* aux1= lista;
	Nodo* aux2=NULL;
	
	while(aux1!=NULL && aux1->numero<dato){
		aux2= aux1;
		aux1 = aux1->siguiente;
	}  
	if(aux2==NULL){
		nuevo->siguiente = lista;
        lista = nuevo;
	}else{
		nuevo->siguiente = aux1;
        aux2->siguiente = nuevo;

	}
	return lista;
	
}


Nodo* insertarFinal(Nodo* final, int dato){
	Nodo* nuevo= new Nodo;
	nuevo->numero = dato;
	nuevo->siguiente = NULL;
	
	if(final == NULL){
		final = nuevo;
	}else{
		Nodo* aux = final;
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	return final;

}





//	while(aux1!=NULL && aux1->numero<dato){
//		aux2= aux1;
//		aux1 = aux1->siguiente;
//	}
//	if(lista==aux1){
//		lista= nuevo;
//	}else{
//		aux2->siguiente = nuevo;
//	}
//	return nuevo->siguiente= aux1;
