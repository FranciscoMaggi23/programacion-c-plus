//Ejercicio 8.
//Leer una secuencia de caracteres que finaliza con la letra minúscula 'n', la
// cual debe ser procesada. Contabilizar
//la cantidad de cada una de las letras vocales minúsculas. También informar la cantidad
// de caracteres leídos en
//total y el porcentaje de letras vocales minúsculas encontradas en la secuencia.

#include<iostream>
#include<string>

using namespace std;

int main(){
	char caracter;
	char a='a', e='e', i='i', o='o', u='u';
	int canTa=0, canTe=0, canTi=0, canTo=0, canTu=0, consonante=0, totalCaracteres=0, porcentajeMinusculas=0;
	cout<<"Escriba un caracter de entrada:\n";
	cin>>caracter;
	
	while(caracter != 'n'){
		switch(caracter){
			case 'a':
				canTa++;
				break;
			case 'e':
				canTe++;
				break;
			case 'i':
				canTi++;
				break;
			case 'o':
				canTo++;
				break;
			case 'u':
				canTu++;
				break;
			default:     
		    	consonante++;
								
		}
		cout<<"Escriba un caracter de entrada:\n";
     	cin>>caracter;
	}
	totalCaracteres= canTa+canTe+canTi+canTo+canTu+consonante;
	porcentajeMinusculas= ((canTa+canTe+canTi+canTo+canTu)*100)/totalCaracteres;
	
	cout<<"total de caracteres: "<<totalCaracteres<<endl;
	cout<<"porcentaje de vocales: "<<porcentajeMinusculas<<"%"<<endl;
	cout<<"vocales minusculas=\n a: "<<canTa<<"\n e: "<<canTe<<"\n i: "<<canTi<<"\n o: "<<canTo<<"\n u: "<<canTu; 
	
	
	
	return 0;
}
