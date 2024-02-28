//Ejercicio 7.
//A pesar de que el programa a continuación no tiene errores de sintaxis, sí tiene varios otros problemas. ¿Cuáles
//son? ¿Cómo podrían corregirse?


#include<iostream>
using namespace std;


const int MAX=10;

int cargar(float arreglo[], int dl){//dl no se esta usando, se puede quitar
	for (int i=0; i<MAX; i++){
	cout << "Número para almacenar: ";
	cin >> arreglo[i];
	}
	return dl;//deberia retornar otra cosa, como max
}
int main(){
	float numeros[MAX];
	int cantidad = 0;//variable sin uso, puede quitarse
	cargar(numeros, cantidad);
}

