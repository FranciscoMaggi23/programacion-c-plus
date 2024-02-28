//Ejercicio 4.
//Escribir una función recursiva que, dado un número entero, retorne la cantidad de dígitos que tiene.
//Ejemplo: si el número es 650, la función debe retornar 3.


#include<iostream>
using namespace std;


int cantDigitos(int num){
	if (num == 0) {
        return 0;
    } else {
        // Llamada recursiva con el resto de los dígitos
        return 1 + cantDigitos(num / 10);//la funcion solo retorna 1 y lo suma cada vez que saca el resto del num
	}
}


int main(){
	int num=3042;
	
	cout<<cantDigitos(num);
	
	return 0;
}

