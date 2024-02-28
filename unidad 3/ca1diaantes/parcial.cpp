#include<iostream>
using namespace std;

struct Cliente{
	int dato;
	float tarjeta[2];
};

struct Nodo{
	Cliente cliente;
	Nodo* siguiente;
};

void imprimir(Nodo* lista){
	int suma, contador=0;
	for(Nodo* i=lista; i!=NULL; i=i->siguiente){
		suma= i->cliente.tarjeta[0]+i->cliente.tarjeta[1];
		if(suma>100){
			contador++;
		}
	}
	cout<<"el contador es: "<<contador<<endl;
}

Nodo* cargar(Nodo* lista, Cliente cliente){
	Nodo* nuevo= new Nodo;
	nuevo->cliente=cliente;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevo;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
	}
	return lista;
}

int main(){
	Nodo* lista=NULL;
	Cliente cliente;
	
	cout<<"ingrese numero: "<<endl;
	cin>>cliente.dato;
	
	cout<<"ingrese tarjeta master: "<<endl;
	cin>>cliente.tarjeta[0];
	cout<<"ingrese tarjeta visa: "<<endl;
	cin>>cliente.tarjeta[1];
	
	lista=cargar(lista, cliente);
	
	imprimir(lista);
	
}

