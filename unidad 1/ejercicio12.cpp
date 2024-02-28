//Ejercicio 12.
//Leer una frase de teclado e informar la longitud de la última palabra. Se considera al espacio como separador
//de palabras.
//Precondición: el string no finaliza con espacios.

#include<iostream>

using namespace std;


int longitud(string frase){
	string palabra, nueva;
	
	
	
	for(int x=frase.length();x<=frase.length();x--){
		if(frase[x]== ' '){
			break;
		}
		palabra = palabra+frase[x];
	}
//	cout<<palabra<<endl;

	for( int i=palabra.length();i<=palabra.length();i--){
		nueva= nueva+palabra[i];
	}
	getline(cin>>ws,nueva);
//	cout<<"la palabra es:"<<nueva;

	
	return nueva.length();
	
}




int main(){
	string frase;
	
	cout<<"ingrese texto: ";
	getline(cin,frase);
	
	cout<<longitud(frase);
	
	
	return 0;
}


//terminado
