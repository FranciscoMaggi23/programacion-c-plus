//Ejercicio 11.
//Leer una cadena de caracteres (string) de teclado e imprimirla en orden inverso.


#include<iostream>
//#include<string>
using namespace std;


string invertir(string cadena){
	cadena.length();

	for(int i = cadena.length(); i<=cadena.length();i--){
		cout<<cadena[i];
	}
	return cadena;
}



int main(){
	string oracion;
	cout<<"ingrese cadena: "<<endl;
	getline(cin,oracion); //getline() imprime todas las palabras contando espacios
	
	invertir(oracion);
	return 0;
}



