//Ejercicio 7.
//Se lee de teclado una secuencia de números que finaliza con la primera ocurrencia de un número negativo, el
//cual no debe ser procesado. Los números deben ser almacenados en una lista enlazada simple. Se solicita:
//A. Leer de teclado un número e informar si existe en la lista.
//B. Leer de teclado un número e informar la cantidad de ocurrencias del número en la lista.
//C. Implementar una función que reciba la lista de números y genere dos nuevas listas, una con los
//números pares y otra con los impares. Las nuevas listas deberán estar formadas con los nodos de la lista
//original, la que quedará vacía después de invocar a la función. Imprimir las listas resultantes.

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

Nodo* insertarFinal(Nodo* lista, Nodo* nuevo){
	if(lista==NULL){
			lista=nuevo;
		}else{
			Nodo *aux;
			while(aux->siguiente!=NULL){
				aux= aux->siguiente;
			}
			aux->siguiente= nuevo;
		}
	return lista;
}

//esta funcion reparte los nodos de la lista original segun sean pares o impares, al final la lista original queda vacia
void Realizarlistas(Nodo* &lista, Nodo* &listaPar, Nodo* &listaImpar){
	
	Nodo* p= lista;
	Nodo* anterior;
	while(p!=NULL){
		anterior=p;
		p= p->siguiente;
		anterior->siguiente = NULL;
		if(anterior->dato%2==0){
			listaPar=insertarFinal(listaPar, anterior);
		}else{
			listaImpar=insertarFinal(listaImpar, anterior);
		}
	}
	lista=NULL;
	
}

void ocurrencias(Nodo* lista){
	int numero, ocurrencias=0;
	
	cout<<"ingrese numero a para ocurrencias: "<<endl;
	cin>>numero;
	for(Nodo* aux=lista; aux!=NULL; aux = aux->siguiente){
		if(aux->dato==numero){
			ocurrencias++;
		}
	}
	if(ocurrencias!=0){
		cout<<"la cantidad de ocurrencias es: "<<ocurrencias<<endl;
	}else{
		cout<<"no existe ese numero"<<endl;
	}
	
}

void SiexisteNumero(Nodo* lista){
	int numero;
	bool bandera=false;
	
	cout<<"ingrese numero a buscar: "<<endl;
	cin>>numero;
	
	for(Nodo* aux=lista; aux!=NULL; aux = aux->siguiente){
		if(aux->dato==numero){
			bandera= true;
		}
	}
	if(bandera==true){
		cout<<"existe"<<endl;
	}else{
		cout<<"no existe"<<endl;
	}
}
	

Nodo* cargarLista(Nodo* lista){
	int numero;
	cout<<"ingrese numero: "<<endl;
	cin>>numero;
	
	while(numero>=0){
		Nodo* nuevo = new Nodo;
		nuevo->dato= numero;
		nuevo->siguiente= NULL;
		lista=insertarFinal(lista,nuevo);
		cout<<"ingrese numero: "<<endl;
		cin>>numero;
	}
	return lista;
}

int main(){
	Nodo* lista=NULL, *listaPares=NULL, *listaImpares=NULL;
	
	lista=cargarLista(lista);
	SiexisteNumero(lista);	
	ocurrencias(lista);
	
	Realizarlistas(lista, listaPares, listaImpares);
	cout<<"las lista pares:"<<endl;
	imprimirLista(listaPares);	
	cout<<"lista impares: "<<endl;	
	imprimirLista(listaImpares);	
	
	
	return 0;
} 





//			while(aux->siguiente != NULL && aux->siguiente->dato%2==0){
//				aux = aux->siguiente;
//			}
//			if(aux->siguiente->dato%2!=0){
//				Nodo* aEliminar = aux->siguiente;
//				aux->siguiente = aEliminar->siguiente;
//				delete aEliminar;
//			}


//	Nodo* aux= lista;
//	while(aux!=NULL && aux->dato!= numero){
//		aux = aux->siguiente;
//	}
//	return !(aux==NULL);
//}


//	for(Nodo* aux=lista; aux!=NULL; aux = aux->siguiente){
//		Nodo* aux2=lista; 
//		if(aux2->dato%2!=0){
//			listaPar= insertarFinal(listaPar, aux2);
//			
//		}else{
//			listaImpar=insertarFinal(listaImpar, aux2);
//		}
//	}

