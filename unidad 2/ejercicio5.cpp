//Ejercicio 5.
//Implementar una funci�n llamada mas_uno que tiene como par�metro un arreglo est�tico de enteros y que
//incrementa en uno el valor de cada elemento de dicho arreglo. A�adir otros par�metros que se necesiten.

#include <iostream>
using namespace std;

void mas_uno(int arreglo[], int longitud){
	for(int x=0;x<longitud;x++){
		arreglo[x]+=1;
	}
}

int main(){
	
	int arreglo[] ={1,2,3,4,5}; 
	
	mas_uno(arreglo,5);
	
	for(int i = 0; i<5 ; i++){
	
	cout<<arreglo[i];
	}
	return 0;
}

//ok
