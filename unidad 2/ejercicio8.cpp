//Ejercicio 8.
//Escribir una funci�n llamada cantidad_ocurrencias que reciba como par�metro un arreglo de tipo int, un
//par�metro con la dimensi�n l�gica del arreglo y un par�metro con un valor de tipo int. La funci�n debe retornar
//la cantidad de ocurrencias del valor int encontradas en el arreglo.
//Nota: como en todo algoritmo, se debe probar si la funci�n hace lo esperado pas�ndole como argumentos
//diferentes casos posibles (por ejemplo: arreglo vac�o, arreglo con un solo elemento, arreglo donde todos los
//elementos coinciden con el buscado, arreglo donde no se encuentra el elemento buscado, arreglo donde el
//elemento se encuentra al principio y al final, arreglo con repeticiones del elemento en posiciones consecutivas).
//Como ejemplo, se puede utilizar el siguiente programa para probar la funci�n:
#include <iostream>
#include <string>
using namespace std;
const int MAX = 10;
//Colocar ac� la funci�n cantidad_ocurrencias
int cantidad_ocurrencias(int arreglo[], int dlA, int numero){
	int i=0,cant=0;
	
	while(i<dlA){
		if(arreglo[i]==numero){
			cant++;
		}
		i++;
	}
	return cant;
}


int main() {
	int A[MAX] = {2,8,5,2,2,7,2,7,4,2};
	int B[MAX];
	int C[MAX] = {2};
	int D[MAX] = {2,2,2};
	int E[MAX] = {1,3,5,7,9};
	int dlA=10, dlB=0, dlC=1, dlD=3, dlE=5;
	cout << cantidad_ocurrencias(A, dlA, 2) << endl;
	cout << cantidad_ocurrencias(B, dlB, 2) << endl;
	cout << cantidad_ocurrencias(C, dlC, 2) << endl;
	cout << cantidad_ocurrencias(D, dlD, 2) << endl;
	cout << cantidad_ocurrencias(E, dlE, 2) << endl;
	return 0;
}


//terminado



