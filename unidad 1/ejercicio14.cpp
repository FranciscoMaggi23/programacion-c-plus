//Ejercicio 14.
//Implementar un programa que solicite una palabra y verifique si es pal�ndromo. Una palabra es pal�ndromo si
//puede leerse igual de izquierda a derecha que de derecha a izquierda.
//Precondici�n: todos los caracteres son min�sculas y no se ingresar�n vocales acentuadas ni di�resis.

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



