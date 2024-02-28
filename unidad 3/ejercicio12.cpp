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
	Articulos* siguiente;
};


void incrementarPrecio(Articulos* &lista, int porcentaje){
	for (Articulos* actual = lista; actual != NULL; actual = actual->siguiente) {
        actual->precio *= (1 + porcentaje / 100.0);
    }
}

void incrementarStock(Articulos* &lista, int codigo, int cantidad){
	bool bandera=false;
	
	while(lista!=NULL){
		if(lista->codigo==codigo){
			lista->stock+=cantidad;
			bandera=true;
			break;
		}
		lista=lista->siguiente;	
	}
	if(bandera==false){
		cout<<"no existe el producto con dicho codigo"<<endl;
	}
	
}

Articulos* insertar_al_principio(Articulos* inicio, int codigo, int precio, int stock, string descripcion){
	Articulos* nuevo= new Articulos;
	nuevo->codigo=codigo;
	nuevo->descripcion=descripcion;
	nuevo->precio=precio;
	nuevo->stock=stock;
	nuevo->siguiente= inicio;
	
	return nuevo;
}

void mostrarLista(Articulos* inicio){
	for(Articulos* actual=inicio; actual!=NULL; actual= actual->siguiente){
		cout<<actual->codigo<<endl;
		cout<<actual->descripcion<<endl;
		cout<<actual->precio<<endl;
		cout<<actual->stock<<endl;
	}
}

void eliminarArticulos(Articulos* &lista){
	Articulos* aux1=lista, *aEliminar;
	
	while(aux1!=NULL){
		if(aux1->stock<=0){
			aEliminar=lista;
			lista= lista->siguiente;
			aux1=aux1->siguiente;
			delete aEliminar;
		}else{
			if(aux1->siguiente!=NULL && aux1->siguiente->stock<=0){
				aEliminar=aux1->siguiente;
				aux1->siguiente= aux1->siguiente->siguiente;
				delete aEliminar;
			}
			aux1=aux1->siguiente;
		}
	}
 }


int main(){
	int codigo, precio,stock,cantidad,porcentaje ;
	Articulos* inicio= NULL;
	string descripcion;
	
	cout<<"ingrese un codigo: "<<endl;
	cin>>codigo;
	
	while(codigo!=(-1)){
		cout<<"ingrese un precio: "<<endl;
		cin>>precio;
		cout<<"ingrese un stock: "<<endl;
		cin>>stock;
		cout<<"ingrese un descripcion: "<<endl;
		cin>>descripcion;
	
		inicio =insertar_al_principio(inicio, codigo, precio,stock,descripcion);
		
		cout<<"ingrese un codigo: "<<endl;
		cin>>codigo;	
	}
		mostrarLista(inicio);

	
	cout<<"ingrese el codigo del articulo a incrementar: "<<endl;
	cin>>codigo;
	cout<<"ingrese la cantidad a incrementar de stock: "<<endl;
	cin>>cantidad;
	incrementarStock(inicio, codigo, cantidad);
	cout<<endl;
		
	cout<<"ingrese el porcentaje a incrementar: "<<endl;
	cin>>porcentaje;
	incrementarPrecio(inicio, porcentaje);
	
	cout<<endl;
//	mostrarLista(inicio);
	eliminarArticulos(inicio);
	
	cout<<endl;
	mostrarLista(inicio);

	
	return 0;
}

