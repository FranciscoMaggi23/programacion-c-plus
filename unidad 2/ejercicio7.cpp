//Ejercicio 7.
//A pesar de que el programa a continuaci�n no tiene errores de sintaxis, s� tiene varios otros problemas. �Cu�les
//son? �C�mo podr�an corregirse?


#include<iostream>
using namespace std;


const int MAX=10;

int cargar(float arreglo[], int dl){//dl no se esta usando, se puede quitar
	for (int i=0; i<MAX; i++){
	cout << "N�mero para almacenar: ";
	cin >> arreglo[i];
	}
	return dl;//deberia retornar otra cosa, como max
}
int main(){
	float numeros[MAX];
	int cantidad = 0;//variable sin uso, puede quitarse
	cargar(numeros, cantidad);
}

