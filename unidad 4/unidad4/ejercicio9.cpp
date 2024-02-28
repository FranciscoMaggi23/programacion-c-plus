 //Ejercicio 9.
//Escribir una función recursiva que reciba una palabra y retorne true si es palíndromo, false si no lo es
//(diferenciando mayúsculas y minúsculas).
//Ejemplo: si la palabra es "radar" retorna true.
//Nota 1: Un palíndromo es una palabra que se lee igual en un sentido que en otro.
//Nota 2: Podría ser útil la función substr que obtiene un substring a partir de un string.



#include<iostream>
using namespace std;

bool comprobar(char a, char b){
	if(a==b){
		return true;
	}else{
		return false;
	}
}

bool palindromo(string a){
	if(a.length()<=1){
		return true;
	}else{
		return comprobar(a.substr(0,1)[0],a.substr(a.length()-1,1)[0]) && palindromo(a.substr(1,a.length()-2));
	}
}


int main(){
	string a="laal";
	bool v=palindromo(a);
	cout<<v;
	
	return 0;
}
