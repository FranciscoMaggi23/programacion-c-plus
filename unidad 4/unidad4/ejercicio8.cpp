//Ejercicio 8.
//Escribir una funci�n recursiva que reciba un string y lo retorne con sus caracteres invertidos.
//Nota: Podr�a ser �til la funci�n substr que obtiene un substring a partir de un string.


#include<iostream>
using namespace std;


string palabra(string a){
	string b;
	if(a.length()==1){
		return a;
	}else{
		return b+ palabra(a.substr(a.length()-1,1))+ a.substr(a.length()-1,1);
	}
}


int main(){
	string a="hola";
	cout<<palabra(a);
	return 0;
}
