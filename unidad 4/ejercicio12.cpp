//Ejercicio 12.
//Escribir una función recursiva que reciba un arreglo de int y su dimensión lógica, y retorne la suma de los
//elementos pares almacenados en el arreglo. En caso de no haber números pares, debe retornar 0.
//Ejemplo: Dado el arreglo [ 4, 5, 10, 17, 2, 3 ] retornará 16.


#include<iostream>
using namespace std;


bool esPar(int e){
	return e%2==0;
}

int pares(int a[], int dl){
	int suma=0;
	if(dl==0){
		return 0;
	}else{
		if(esPar(a[dl-1])){
			suma+= a[dl-1];
		}
		return suma+ pares(a, dl-1);
	}
}


int main(){
	int arreglo[]={ 4, 5, 10, 17, 2, 3 };
	int dl=6;
	
	int suma= pares(arreglo, dl);
	
	cout<<suma;
	
	
	
	return 0;
}


//ok
