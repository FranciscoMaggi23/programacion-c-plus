//Ejercicio 11.
//Implementar una función que reciba dos listas enlazadas simples con datos de tipo string ordenadas según el
//alfabeto y retorne una tercera lista ordenada por el mismo criterio, conformada por todos los elementos de las
//listas originales (merge). Agregar las funciones auxiliares que sean necesarias para cumplir con este propósito.

#include<iostream>
using namespace std;


struct Nodo{
	string cadena;
	Nodo* siguiente; 
};

void imprimirLista(Nodo* lista){
	for(Nodo* i=lista; i!=NULL; i= i->siguiente){
		cout<<i->cadena<<" ";
	}
}

Nodo* cargarlistaordenada(Nodo* lista, string cadena);


Nodo* ordenarlistas(Nodo* lista1, Nodo* lista2){
	Nodo* nuevo= NULL;
	while(lista1!=NULL && lista2!=NULL){//en este bloque comparas un elemento de lista 1 con la otra lista y vas aumentando la posicion hasta que sea null
		if(lista1->cadena<=lista2->cadena){
			nuevo=cargarlistaordenada(nuevo, lista1->cadena);
			lista1=lista1->siguiente;
		}else{
			nuevo=cargarlistaordenada(nuevo, lista2->cadena);
			lista2=lista2->siguiente;
		}
	}//al final uno estara apuntando al vacio y el otro no! para eso son los otros dos while que les sigue!
	
	//si lista 1 todavia tiene elemntos entonces vamos a cargar esos elementos de forma ordenada y sino pasara con la lista 2(pasa solo con uno de ellos)
	while(lista1!=NULL){
		nuevo=cargarlistaordenada(nuevo, lista1->cadena);
		lista1=lista1->siguiente;
	}
	
	while(lista2!=NULL){
		nuevo=cargarlistaordenada(nuevo, lista2->cadena);
		lista2=lista2->siguiente;
	}
	
	return nuevo;
	
}

Nodo* cargarlistaordenada(Nodo* lista, string cadena){
	Nodo* nuevo= new Nodo;
	nuevo->cadena=cadena;
	nuevo->siguiente=NULL;
	
	Nodo* aux1=lista;
	Nodo* aux2=NULL;
	
	while(aux1!=NULL&&aux1->cadena<cadena){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(aux2==NULL){
		nuevo->siguiente=lista;
		lista=nuevo;
	}else{
		nuevo->siguiente = aux1;
        aux2->siguiente = nuevo;
	}
	return lista;
}

int main(){
	Nodo* lista1=NULL, *lista2=NULL, * lista3=NULL;
	string cadena;
	
	cout<<"ingrese cadena: "<<endl;
	getline(cin>>ws,cadena);
	
	while(cadena!="x"){
		lista1=cargarlistaordenada(lista1,cadena);
		
		cout<<"ingrese cadena: "<<endl;
		getline(cin>>ws,cadena);		
		
	}
	cout<<"ingrese cadena: "<<endl;
	getline(cin>>ws,cadena);
	while(cadena!="n"){
		
		lista2=cargarlistaordenada(lista2,cadena);
		cout<<"ingrese cadena: "<<endl;
		
		getline(cin>>ws,cadena);
	}
	
	lista3=ordenarlistas(lista1,lista2);
	
	imprimirLista(lista3);
	
	return 0;
}

//okk


//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Nodo {
//    string palabra;
//    Nodo* siguiente;
//};
//
//void insertarAlFinal(Nodo* &lista, string palabra) {
//    Nodo* nuevo = new Nodo;
//    nuevo->palabra = palabra;
//    nuevo->siguiente = NULL;
//
//    if (lista == NULL) {
//        lista = nuevo;
//    } else {
//        Nodo* temp = lista;
//        while (temp->siguiente != NULL) {
//            temp = temp->siguiente;
//        }
//        temp->siguiente = nuevo;
//    }
//}
//
//Nodo* mergeListas(Nodo* lista1, Nodo* lista2) {
//    Nodo* mergedList = NULL;
//    Nodo* temp = NULL;
//
//    while (lista1 != NULL && lista2 != NULL) {
//        if (lista1->palabra <= lista2->palabra) {
//            insertarAlFinal(mergedList, lista1->palabra);
//            lista1 = lista1->siguiente;
//        } else {
//            insertarAlFinal(mergedList, lista2->palabra);
//            lista2 = lista2->siguiente;
//        }
//    }
//
//    while (lista1 != NULL) {
//        insertarAlFinal(mergedList, lista1->palabra);
//        lista1 = lista1->siguiente;
//    }
//
//    while (lista2 != NULL) {
//        insertarAlFinal(mergedList, lista2->palabra);
//        lista2 = lista2->siguiente;
//    }
//
//    return mergedList;
//}
//
//void mostrarLista(Nodo* lista) {
//    while (lista != NULL) {
//        cout << lista->palabra << " ";
//        lista = lista->siguiente;
//    }
//    cout << endl;
//}
//
//int main() {
//    Nodo* lista1 = NULL;
//    Nodo* lista2 = NULL;
//
//    insertarAlFinal(lista1, "apple");
//    insertarAlFinal(lista1, "banana");
//    insertarAlFinal(lista1, "grape");
//
//    insertarAlFinal(lista2, "cherry");
//    insertarAlFinal(lista2, "mango");
//    insertarAlFinal(lista2, "orange");
//    insertarAlFinal(lista2, "pineapple");
//
//    Nodo* mergedList = mergeListas(lista1, lista2);
//
//    cout << "Lista 1: ";
//    mostrarLista(lista1);
//
//    cout << "Lista 2: ";
//    mostrarLista(lista2);
//
//    cout << "Lista combinada y ordenada: ";
//    mostrarLista(mergedList);
//
//    return 0;
//}

