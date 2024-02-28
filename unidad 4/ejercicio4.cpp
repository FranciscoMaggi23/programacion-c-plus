//Ejercicio 4.
//Escribir una funci�n recursiva que, dado un n�mero entero, retorne la cantidad de d�gitos que tiene.
//Ejemplo: si el n�mero es 650, la funci�n debe retornar 3.


#include<iostream>
using namespace std;


int cantDigitos(int num){
	if (num == 0) {
        return 0;
    } else {
        // Llamada recursiva con el resto de los d�gitos
        return 1 + cantDigitos(num / 10);//la funcion solo retorna 1 y lo suma cada vez que saca el resto del num
	}
}


int main(){
	int num=3042;
	
	cout<<cantDigitos(num);
	
	return 0;
}

