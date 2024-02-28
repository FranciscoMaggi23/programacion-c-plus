//Ejercicio 18.
//Cargar en una lista circular, insertando al final, los títulos de las charlas que se darán en una conferencia de
//tecnología. Independientemente de cómo las ingrese el usuario, se deben almacenar con la primera letra en
//mayúscula y el resto en minúsculas.
//a) Imprimir la lista resultante.
//b) Solicitar al usuario el ingreso de un título e informar si existe en la lista. La búsqueda debe ser "case
//insensitive" (es decir, sin importar que se ingrese con diferentes mayúsculas y minúsculas, si el título
//coincide debe informarse que existe)


#include<iostream>
#include<string>
using namespace std;


struct Nodo{
	string titulos;
	Nodo* siguiente;
};

string validarTitulo(string titulo);


void existeTitulo(Nodo* lista, string titulo){
	titulo=validarTitulo(titulo);
	if(lista!=NULL){
		Nodo* aux=lista->siguiente;
		do{
			if(aux->titulos==titulo){
				cout<<"existe el titulo"<<endl;
				return;//sugerecia de chat gpt

			}
			aux=aux->siguiente;
		}while(aux != lista->siguiente);
	}
	cout << "No existe el título" << endl;

}


void imprimirLista(Nodo* lista){
	if(lista!=NULL){
		Nodo* aux=lista->siguiente;
		do{
			cout<<aux->titulos<<endl;
			aux=aux->siguiente;
		}while(aux != lista->siguiente);
	}
}

Nodo* cargarTitulos(Nodo* lista, string titulo){
	Nodo* nuevo=new Nodo;
	nuevo->titulos= titulo;
	nuevo->siguiente= NULL;
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente=lista->siguiente;
		lista->siguiente= nuevo;
		return nuevo;
	}
}
//devolucion de chat gpt . mi forma esta abajo comentada
string validarTitulo(string titulo) {
    titulo[0] = toupper(titulo[0]); // Convierte la primera letra a mayúscula
    for (int i = 1; i < titulo.length(); i++) {
        titulo[i] = tolower(titulo[i]); // Convierte las letras restantes a minúsculas
    }
    return titulo;
}



int main(){
	Nodo* lista=NULL;
	string titulo;
	
	for(int i=0; i<4; i++){
		cout<<"ingrese titulos: "<<endl;
		getline(cin>>ws,titulo);
		titulo=validarTitulo(titulo);
		lista=cargarTitulos(lista, titulo);
	}

	imprimirLista(lista);

	string consultarTitulo;
	
	cout<<"ingrese un titulo a consultal: "<<endl;
	cin>>consultarTitulo;
	
	existeTitulo(lista, consultarTitulo);
	
	
	return 0;
}



//string validarTitulo(string titulo){
//	string palabra;
////	int a= titulo.lentgh();
//	for(int i=0; i<titulo.length(); i++){
//		if(i==0){
//			palabra+=toupper(titulo[i]);
//		}else{
//			palabra+=tolower(titulo[i]);
//		}
//	}
//	return palabra;
//}
