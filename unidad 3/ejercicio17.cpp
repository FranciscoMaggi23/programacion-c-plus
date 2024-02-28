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


struct Nodo{
	string palabra;
	Nodo* siguiente;
};


void imprimirlista(Nodo* lista){
	if(lista!=NULL){
		Nodo* aux=lista->siguiente;
		do{
			cout<<aux->palabra<<endl;
			aux=aux->siguiente;
		}while(aux!=lista->siguiente);
	}
}



void insertarDespuesDe(Nodo* nodoanterior, string palabra){
	if (nodoanterior != NULL) {
        Nodo* nuevo = new Nodo{palabra, NULL};
        nuevo->siguiente = nodoanterior->siguiente;
        nodoanterior->siguiente = nuevo;
    }
}

Nodo* buscarPosicion(Nodo* listaCircular, int posicion){
	if (listaCircular == NULL || posicion <= 0) {
        return NULL;  // La lista est� vac�a o la posici�n no es v�lida
    }
	int buscar=1;
	Nodo* aux= listaCircular->siguiente;
	Nodo* anterior = NULL;

	do{
		if(buscar==posicion){
			return anterior;
		}
		anterior = aux;
        aux = aux->siguiente;
        buscar++;
	}while(aux!=listaCircular->siguiente);
	
	return NULL;
}



Nodo* insertarAlFinal(Nodo* listaCircular, string dato){
	Nodo* nuevo= new Nodo;
	nuevo->palabra=dato;
	nuevo->siguiente= NULL;
	
	if(listaCircular==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente=listaCircular->siguiente;
		listaCircular->siguiente=nuevo;
		listaCircular=nuevo;
	}
	return listaCircular;
	
}


int main(){
	Nodo* listaCircular=NULL;
	
	listaCircular = insertarAlFinal(listaCircular, "merengue");
    listaCircular = insertarAlFinal(listaCircular,"frutilla");
    listaCircular = insertarAlFinal(listaCircular, "caramelo");
    listaCircular = insertarAlFinal(listaCircular, "chocolate");
	
	int nuevoNum;
	Nodo* nodoAnterior;
	cout << "Ingrese la posicion: ";
    cin >> nuevoNum;
	
	nodoAnterior=buscarPosicion(listaCircular, nuevoNum);
	
	 if (nodoAnterior != NULL) {
        string nuevaPalabra;
        cout << "Ingrese la nueva palabra: ";
        cin >> nuevaPalabra;

        // Insertar la nueva palabra despu�s del nodo encontrado
        insertarDespuesDe(nodoAnterior, nuevaPalabra);

        // Imprimir la lista actualizada
        cout << "Lista Circular despu�s de la inserci�n: ";
		imprimirlista(listaCircular);
			} else {
        cout << "La posici�n ingresada no es v�lida." << endl;
    }
	
	

	
	
	return 0;
}
//ok
