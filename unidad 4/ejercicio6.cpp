//Ejercicio 6.
//Escribir una función recursiva que calcule el producto de dos números naturales, usando sumas.
//Ejemplo: 2*3 se puede calcular como 2+2+2.


#include<iostream>
using namespace std;


int producto(int num1, int num2){
	if(num1==0|| num2==0){
		return 0;
	}else{
//		cout<<num1<<"+"; //esto es para 3+3
		return num1+producto(num1,num2-1);//esto es el resultado general de la suma
	}
}


int main(){
	cout<<producto(3,2);
	return 0;
}

//int producto(int num1, int num2){
//	int cont=0;
//	if(num1==0 || num2==0){//caso base
//		return 0;
//	}else{
//		cont++;
//		return num1+ producto(num1,num2-1);//caso general
//	}
//}
