//Ejercicio 14.
//Implementar un programa que solicite una palabra y verifique si es palíndromo. Una palabra es palíndromo si
//puede leerse igual de izquierda a derecha que de derecha a izquierda.
//Precondición: todos los caracteres son minúsculas y no se ingresarán vocales acentuadas ni diéresis.

#include<iostream>
#include<string>
using namespace std;

int main(){
	std::string palabra, derecha, izquierda;
	
	cout<<"ingrese palabra: ";
	getline(cin,palabra);
	palabra.length();
	
	for(int i = palabra.length(); i<=palabra.length();i--){
		izquierda += palabra[i];

	}
	
	cout<<"izquierda es: "<<izquierda<<endl;
	
	for(int x=0; x<=palabra.length(); x++){
		derecha += palabra[x];
	}
	cout<<"derecha: "<<derecha<<endl;
	
	
	return 0;
}

//falta terminar



