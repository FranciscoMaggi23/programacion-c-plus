//Ejercicio 3.
//Escribir una funci�n recursiva que, dado un n�mero entero, lo imprima en orden inverso.
//Ejemplo: si el n�mero es 5182, la fu nci�n debe imprimir 2815.


#include<iostream>
using namespace std;


int inverso(int num){
	if(num==0){
		return 0;
	}else{
		cout<<num%10;
	}
	inverso(num/10);
}


int main(){
	
	inverso(5100);
	return 0;
}

