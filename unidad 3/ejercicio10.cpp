 //Ejercicio 10.
//Cargar una lista enlazada simple con palabras ingresadas por el usuario, las cuales deben almacenarse en
//minúsculas independientemente de cómo las ingrese. Luego, a partir de esa lista, generar una nueva lista con
//las palabras que se encuentran repetidas. Finalmente, imprimir ambas listas.

#include<iostream>
#include<string>
using namespace std;

struct Nodo{
	string palabra;
	Nodo* siguiente;
};



void mostrarlista(Nodo* lista){
	for(Nodo* i=lista; i!= NULL; i= i->siguiente){
		cout<<i->palabra<<endl;
	}
} 

Nodo* insertarAlFinal(Nodo*lista, string palabra);

void palabrasrepetidas(Nodo* &listaRepetidas, Nodo* lista){
	Nodo* i=lista;
	while(i!=NULL&&i->siguiente!=NULL){
		Nodo* j=i->siguiente;  //guardo en un puntero de tipo nodo SOLO el elemento de de i->siguiente
		while(j!=NULL){
			if(i->palabra.compare(j->palabra)==0){//si palabra en i es igual a la palabra en j
				listaRepetidas= insertarAlFinal(listaRepetidas, i->palabra);
				break;
			}	
			j=j->siguiente;
		}
		i=i->siguiente;	
	}
	//otro codigo que tambien funciona pero sin usar "compare()":
	
	//	while(i!=NULL&&i->siguiente!=NULL){
//		Nodo* j=i->siguiente;
//		while(j!=NULL){
//			if(i->palabra==j->palabra){
//				listaRepetidas= insertarAlFinal(listaRepetidas, i->palabra);
//				break;
//			}
//			j=j->siguiente;
//		}
//		i=i->siguiente;
//	}
}


string convertirMinuscula(string palabra){
	int letras;
	string nuevaP;
	letras= palabra.length();
	
	for(int i=0; i<letras; i++){
		nuevaP+=tolower(palabra[i]);
	
	}
	return nuevaP;
}

Nodo* insertarAlFinal(Nodo*lista, string palabra){
	Nodo* nuevo= new Nodo;
	nuevo->palabra=palabra;
	nuevo->siguiente= NULL;
	nuevo->palabra= convertirMinuscula(palabra);

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

Nodo* cargarlista(Nodo* lista, string palabra){//insertar al principio
	Nodo* nuevo= new Nodo;
	nuevo->palabra= palabra;
	nuevo->siguiente=lista;
	nuevo->palabra= convertirMinuscula(palabra);
	return nuevo;
	
	
}


int main(){
	Nodo* lista=NULL, *listaFinal=NULL, *listaRepetidas=NULL;
	string palabra;
	
	cout<<"ingrese palabra: "<<endl;
	getline(cin>>ws,palabra);
	
	while(palabra!="x"){
		lista=cargarlista(lista, palabra);
		listaFinal= insertarAlFinal(listaFinal,palabra);
				
		cout<<"ingrese palabra: "<<endl;
		getline(cin>>ws,palabra);
	}
	palabrasrepetidas(listaRepetidas,lista);


	mostrarlista(lista);
	cout<<"  "<<endl;
	
	mostrarlista(listaFinal);
		cout<<"  "<<endl;
		
	mostrarlista(listaRepetidas);

	return 0;
}

