//Ejercicio 19.
//Cargar en una lista circular, insertando al inicio, los n�meros de CUIT de los proveedores de un comercio.
//a) Dado un n�mero de CUIT, eliminarlo de la lista.
//b) Informar cu�ntos elementos hay en la lista despu�s de la eliminaci�n.



#include<iostream>
using namespace std;


struct Nodo{
	int cuit;
	Nodo* siguiente;
};

void imprimirlista(Nodo* lista){
	if(lista!=NULL){
		Nodo* aux=lista->siguiente;
		do{
			cout<<aux->cuit<<endl;
			aux=aux->siguiente;
		}while(aux!=lista->siguiente);
	}
}


Nodo* borrarCuit(Nodo* lista, int borrar){
	if(lista!=NULL){
		Nodo* aux=lista;
		Nodo* aEliminar;
		do{
			if(aux->siguiente->cuit==borrar){
				aEliminar=aux->siguiente;
				if(aEliminar==lista){
					lista=aux;
				}
				aux->siguiente=aEliminar->siguiente;
				delete aEliminar;
				break;
			}else{
				aux=aux->siguiente;
			}
		}while(aux!=lista);
	}
	return lista;
}


Nodo* cargarNodo(Nodo* lista, int cuit){
	Nodo* nuevo= new Nodo;
	nuevo->cuit=cuit;
	nuevo->siguiente=NULL;
	//insertamos al inicio:
	if(lista==NULL){
		nuevo->siguiente= nuevo;
		return nuevo;
	}else{
		nuevo->siguiente=lista->siguiente;
		lista->siguiente=nuevo;
//		lista=nuevo; //esta linea hace la diferencia para insertar al final
		return nuevo;
	}
}

int main(){
	Nodo* lista= NULL;
	int cuit;
	for(int i=0; i<4; i++){
		cout<<"ingrese cuit: "<<endl;
		cin>>cuit;
		
		lista=cargarNodo(lista,cuit);
	}
	int cuitAborrar;
	cout<<"ingrese cuit que desea borrar: "<<endl;
	cin>>cuitAborrar;
	
	lista=borrarCuit(lista, cuitAborrar);
	imprimirlista(lista);
	
	return 0;
}
