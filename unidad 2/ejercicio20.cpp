//Ejercicio 20.
//Realizar un algoritmo que almacene información de, como máximo, 500 libros en un arreglo estático. Un libro
//se define como un struct con los siguientes campos: titulo, autor, ISBN, editorial, cantidadHojas. El algoritmofinaliza luego de cargar 
//el libro "El hobbit", el cual debe procesarse o cuando ya no quede espacio en el arreglo
//(lo que suceda primero). Finalmente, imprimir el arreglo resultante mostrando todos los datos de cada libro.

#include<iostream>
using namespace std;


struct Libro{
	string titulo;
	string autor;
	string isdn;
	string editorial;
	int cantHojas;
};

const int dimF=1;

void cargarLibros(Libro libros[], int & dimL){
	do{
		cout<<"ingrese titulo: ";
		getline(cin>>ws, libros[dimL].titulo);
		cout<<"ingrese autor: ";
		getline(cin>>ws, libros[dimL].autor);
		cout<<"ingrese isdn: ";
		getline(cin>>ws, libros[dimL].isdn);
		cout<<"ingrese editorial: ";
		getline(cin>>ws, libros[dimL].editorial);
		cout<<"ingrese cantidad de hojas: ";
		cin>> libros[dimL].cantHojas;
		dimL++;
	}while(libros[dimL-1].titulo != "el hobit" and dimL<dimF);
	}

void imprimirLibros(Libro libros[], int dimL){
	for(int i=0; i<dimL;i++){
		cout<<"titulo: "<<libros[i].titulo<<endl;
		cout<<"autor: "<<libros[i].autor<<endl;
		cout<<"ISDN: "<<libros[i].isdn<<endl;
		cout<<"editorial: "<<libros[i].editorial<<endl;
		cout<<"cantidad de hojas: "<<libros[i].cantHojas<<endl;
		cout<<endl;


	}
}


int main(){
	Libro libros[dimF];
	int dimL;
	cargarLibros(libros,dimL);
	imprimirLibros(libros, dimL);
	
	return 0;
}


