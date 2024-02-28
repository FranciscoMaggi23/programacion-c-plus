 //Ejercicio 9.
//Escribir una funci�n recursiva que reciba una palabra y retorne true si es pal�ndromo, false si no lo es
//(diferenciando may�sculas y min�sculas).
//Ejemplo: si la palabra es "radar" retorna true.
//Nota 1: Un pal�ndromo es una palabra que se lee igual en un sentido que en otro.
//Nota 2: Podr�a ser �til la funci�n substr que obtiene un substring a partir de un string.



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
