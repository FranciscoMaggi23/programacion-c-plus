//Ejercicio 12.
//Leer una frase de teclado e informar la longitud de la última palabra. Se considera al espacio como separador
//de palabras.
//Precondición: el string no finaliza con espacios.

#include<iostream>
#include<string>

using namespace std;


string ultimapalabra(string palabra){
	int index;
	std::string nueva;
	for(int x=0;x<=palabra.length();x++){
		if(palabra[x]==' '){
			index= palabra.find(x);
		}
	}
	for(int i=palabra[index];i<=palabra.length();i++){
		nueva = nueva+nueva[i];
	}
	
	return nueva;
}






int main(){
	std::string letra;
	
	int index = letra.find(" ");
	
	cout<<"ingrese palabra: ";
	cin>>letra;
	
	cout<<index<<endl;
	cout<<ultimapalabra(letra);
	
	return 0;
}









