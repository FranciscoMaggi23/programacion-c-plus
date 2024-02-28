//Ejercicio 5.
//Escribir una función recursiva que calcule la suma de los cuadrados de los N primeros números positivos.
//Ejemplo: si N=4 la suma es 12 + 22 + 32 + 42 = 30.
//suma(N) = {
//1 si N = 1
//N
//2 + suma(N-1) en caso contrario


#include<iostream>
using namespace std;


int sumaCuadrados(int num){
	if(num==1){
		return 1;
	}else{
		return num*num+sumaCuadrados(num-1);
	}
}


int main(){
	int num=4;
	
	cout<<sumaCuadrados(num);
	
	
	return 0;
}
//ok

