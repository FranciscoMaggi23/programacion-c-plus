//Ejercicio 1.
//Identificar los errores, si los hay, de las siguientes declaraciones
// de arreglos. Para aquellos que son correctos
//especificar: la cantidad de elementos ocupados y los valores 
//almacenados.
//int a[4] = {8, 7, 6, 4, 3};
//int b[] = {8, 7, 6, 4};
//const int MAX = 4;
//int c[MAX];
//int d[5];


#include<iostream>
using namespace std;

int main(){
//	int a[4]={8,7,6,4,3}; esta mal pq hay mas elementos que lo definido[4]
	int b[] = {8, 7, 6, 4};//bienn
	const int MAX = 4;//mal, no es un arreglo
	int c[MAX];//bien
	int d[5];
	
	cout<<d;
	
	return 0;
}
