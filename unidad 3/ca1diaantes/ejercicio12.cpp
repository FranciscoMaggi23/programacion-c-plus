//Ejercicio 12.
//Generar una lista enlazada simple con la nómina de artículos de un supermercado. De cada artículo se conoce:
//código, descripción, precio y stock. La carga finaliza con el código -1. Se solicita:
//A. Leer de teclado un porcentaje e incrementar el precio de todos los artículos en esa cantidad.
//B. Incrementar el stock de un artículo. Se lee de teclado el código y la cantidad con la que se debe
//incrementar el stock. Si no existe el artículo en la lista se debe informar.
//C. Eliminar de la lista los artículos que no tienen stock.




#include<iostream>
using namespace std;


struct Articulos{
	int codigo;
	string descripcion;
	int precio;
	int stock;
};

struct Nodo{
	Articulos articulo;
	Nodo* siguiente;
};

void eliminarart(Nodo* &lista){
	Nodo* aux=lista, *aEliminar;
	while(aux!=NULL){
		if(aux->articulo.stock<=0){
			aEliminar=lista;
			lista=lista->siguiente;
			aux=aux->siguiente;
			delete aEliminar;
		}else{
			if(aux->siguiente!=NULL && aux->siguiente->articulo.stock<=0){
				aEliminar=aux->siguiente;
				aux->siguiente=aEliminar->siguiente;
	 			delete aEliminar;
			}
		}
		aux=aux->siguiente;
	}
}
void imprimir(Nodo* lista) {
    for (Nodo* i = lista; i != NULL; i = i->siguiente) {
        cout << i->articulo.codigo << endl;
        cout << i->articulo.descripcion << endl;
        cout << i->articulo.precio << endl;
        cout << i->articulo.stock << endl;
    }
}

void aumentarstock(Nodo* &lista, int stock, int codigo){
	bool bandera=false;
	for(Nodo* i=lista; i!=NULL; i=i->siguiente){
		if(i->articulo.codigo==codigo){
			i->articulo.stock+=stock;
			bandera=true;
			break;	
		}
	}
	if(!bandera){
		cout<<"el codigo no existe"<<endl;
	}
}


void aumentarprecios(Nodo* &lista,int porcentaje){
		for(Nodo* i=lista; i!=NULL; i=i->siguiente){
			i->articulo.precio *= (1+porcentaje/100);
		}
}


Nodo* insertaralfinal(Nodo* lista, Nodo* nuevo){
	if(lista==NULL){
		lista= nuevo;
		
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	return lista;
}

Nodo* cargardatos(Nodo* lista, Articulos art){
	Nodo* nuevo= new Nodo;
	nuevo->articulo=art;
	nuevo->siguiente=NULL;
	
	lista=insertaralfinal(lista, nuevo);
	
	return lista;
}


int main(){
	Articulos art;
	Nodo* lista=NULL;
	int porcentaje, stock, codigoabuscar;
	
	cout<<"ingrese codogo: "<<endl;
	cin>>art.codigo;
	
	while(art.codigo!=(-1)){
		cout<<"ingrese precio: "<<endl;
		cin>>art.precio;
		
		cout<<"ingrese stock: "<<endl;
		cin>>art.stock;
		
		cout<<"ingrese descripcion: "<<endl;
		cin.ignore();
		getline(cin,art.descripcion);
		
		lista=cargardatos(lista, art);
		
		
		cout<<"ingrese codogo: "<<endl;
		cin>>art.codigo;
	}
	cout<<"ingrese un porcentaje para aumentar los precios: "<<endl;
	cin>>porcentaje;
	
	aumentarprecios(lista,porcentaje);
	
	cout<<"ingrese un numero de codigo para aumentar el stock: "<<endl;
	cin>>codigoabuscar;
	cout<<"ingrese un numero para aumentar el stock: "<<endl;
	cin>>stock;
	
	aumentarstock(lista, stock,codigoabuscar);

	eliminarart(lista);
	
	cout<<endl;	
	imprimir(lista);
	return 0;
}

//ok
