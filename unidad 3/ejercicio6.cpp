//Ejercicio 6.
//Permitir al usuario guardar en una lista enlazada simple los nombres de los alumnos de un curso, insertando al
//final de la lista y cortando la carga cuando se inserte como nombre "x", ya sea en may�scula o en min�scula (el
//cual no debe insertarse en la lista).
//A continuaci�n, solicitar al usuario el nombre de un alumno e informar si se encuentra en la lista o no.
//Por �ltimo, eliminar a la alumna "Josefina Ortega" de la lista (se asume que no se han almacenado nombres
//repetidos).

#include<iostream>
#include <string>
using namespace std;

struct Nodo{
	string nombre;
	Nodo* siguiente;
};

Nodo* eliminarNombre(Nodo* lista, string eliminar){
	if(lista!=NULL){
		Nodo* aux = lista;
		
		if(lista->nombre == eliminar){
			lista = lista->siguiente;
			delete aux;
			
		}else{
			while(aux->siguiente != NULL && aux->siguiente->nombre != eliminar){
				aux = aux->siguiente;
			}
			if(aux->siguiente && aux->siguiente->nombre == eliminar){ //La expresi�n aux->siguiente verifica si hay un nodo siguiente a aux y si esta condici�n se cumple
				Nodo* aEliminar = aux->siguiente;
				aux->siguiente = aEliminar->siguiente;
				delete aEliminar;
/*Si ambas condiciones se cumplen, se procede a eliminar el nodo con el nombre espec�fico. 
Primero se guarda el nodo que se va a eliminar en la variable aEliminar. Luego, se actualiza 
el puntero siguiente del nodo actual para que apunte al nodo siguiente del nodo que se va a eliminar,
 efectivamente salt�ndose el nodo que se quiere eliminar de la lista. Finalmente, se libera la memoria
  ocupada por el nodo que se elimin� usando delete aEliminar		*/		
			}
		}
	}
	return  lista;
}


void mostrarLista(Nodo* inicio){
	for(Nodo* i=inicio; i!=NULL; i= i->siguiente){
		
		cout<<i->nombre<<endl;
	}
}

Nodo* cargardatos(Nodo* lista){
	string nombre; 
	cout<<"ingrese nombre: "<<endl;
	getline(cin>>ws,nombre);
	
	while(nombre!= "x"&& nombre!= "X"){
		
		Nodo* nuevo = new Nodo;
		nuevo->nombre=nombre;
		nuevo->siguiente= NULL;
		
		if(lista==NULL){
			lista=nuevo;
		}else{
			Nodo *aux = lista;
			while(aux->siguiente!=NULL){
				aux= aux->siguiente;
			}
			aux->siguiente= nuevo;
		}
		cout<<"ingrese nombre: "<<endl;
		getline(cin>>ws,nombre);		
	}
	return lista;
}


int main(){
	Nodo* lista = NULL;
	string eliminar= "Josefina Ortega";
	
	lista=cargardatos(lista);
		 
	lista= eliminarNombre(lista, eliminar);
	
	cout<<"lista actualizada:"<<endl;
	mostrarLista(lista);
	
	
	return 0;
}



