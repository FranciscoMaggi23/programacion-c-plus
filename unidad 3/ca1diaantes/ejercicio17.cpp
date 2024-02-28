//Ejercicio 17.
//Dada una lista circular que contiene palabras, solicitar al usuario el ingreso de una posici�n (num�rica, mayor a
//0 y menor o igual que N, siendo N la cantidad de nodos en la lista) y luego el ingreso de una nueva palabra para
//insertarla en la posici�n indicada. Ejemplo: si la lista contiene las siguientes palabras, en este orden: "chocolate"
//- "merengue" - "frutilla" - "caramelo", y el usuario quiere insertar la palabra "menta" en la posici�n 4, la lista
//quedar�: "chocolate" - "merengue" - "frutilla" - "menta" - "caramelo". Para ello, realizar dos funciones:
//a) Nodo* buscar_posicion(Nodo* fin, int posicion)
//Par�metros: el puntero al final de la lista y un n�mero que indica la posici�n dada por el usuario.
//Retorno: puntero al nodo anterior a la posici�n (si es que existe). En el ejemplo dado, el puntero
//apuntar� al nodo con la palabra �frutilla�. Si no existe la posici�n, retornar� nullptr.
//b) void insertar_despues(Nodo* anterior, string palabra)
//Par�metros: puntero al nodo anterior (el retornado por la funci�n buscar_posicion) y la palabra a
//insertar en un nuevo nodo (a continuaci�n de anterior).


#include<iostream>
using namespace std;

struct Nodo {
    string palabra;
    Nodo* siguiente;
};

void imprimir(Nodo* lista){
	if(lista!=NULL){
		Nodo* aux=lista->siguiente;
		do{
			cout<<aux->palabra<<endl;
			aux=aux->siguiente;
		}while(aux!=lista->siguiente);
	}
}

void insertar_despues(Nodo* anterior, string palabra){
	if(anterior!=NULL){
		Nodo* nuevo=new Nodo;
		nuevo->palabra=palabra;
		nuevo->siguiente=anterior->siguiente;
		anterior->siguiente=nuevo;
	}
}

Nodo* buscarPosicion(Nodo* lista, int posicion){
	int buscar=	1;
	Nodo* aux=lista->siguiente;
	Nodo* anterior = NULL;
	do{
		if(buscar==posicion){
			return anterior;
		}
		buscar++;
		anterior=aux;
		aux=aux->siguiente;
	}while(aux!=lista->siguiente);
	return NULL;
	
}

Nodo* cargardatos(Nodo* lista, string palabra){
	Nodo* nuevo= new Nodo;
	nuevo->palabra=palabra;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevo;
		return lista;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
		return lista;
	}
}

int main(){
	Nodo* lista=NULL, *anterior=NULL;
	int posicion;
	string palabraAbuscar, palabra;
	
	for(int i=0; i<5; i++){
		cout<<"ingrese palabra: "<<endl;
		getline(cin>>ws,palabra);
		lista=cargardatos(lista, palabra);
	}
	do{
		cout<<"ingrese posicion a insertar la palabra: "<<endl;
		cin>>posicion;
	}while(posicion<1 || posicion>7);
	
	cout<<"ingrese la palabra a buscar: "<<endl;
	getline(cin>>ws,palabraAbuscar);

	anterior=buscarPosicion(lista,posicion);
	
	insertar_despues(anterior,palabraAbuscar);
	cout<<endl;
	imprimir(lista);
	
	return 0;
}
