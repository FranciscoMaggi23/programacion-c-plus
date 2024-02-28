//Ejercicio 10.
//Indicar qué imprime el siguiente programa (sin ejecutarlo en la máquina). ¿Cuál sería un nombre adecuado
//para la función llamada "f"?:

#include<iostream>
using namespace std;


int min(int a, int b) {
	 if (a < b)
	 return a;
	 else
	 return b;
}

int f(int arreglo[], int dl) { 
	if (dl == 1)
	 return arreglo[0];
	 else
	 return min(arreglo[dl-1], f(arreglo, dl-1));
}

int main() {
	 int a[] = { 6,2,3,7,9,4 };
	 int dl = 6;
	 cout << f(a, dl);
	 return 0;
}



//explicacion:


//Primera llamada: f(a, 6)
//
//No es un caso base, así que se compara el último elemento a[5] (que es 4) con el resultado de la llamada recursiva f(a, 5).
//Llamada recursiva 1: f(a, 5)
//Segunda llamada: f(a, 5)
//
//No es un caso base, así que se compara a[4] (que es 9) con el resultado de la llamada recursiva f(a, 4).
//Llamada recursiva 2: f(a, 4)
//Tercera llamada: f(a, 4)
//
//No es un caso base, así que se compara a[3] (que es 7) con el resultado de la llamada recursiva f(a, 3).
//Llamada recursiva 3: f(a, 3)
//Cuarta llamada: f(a, 3)
//
//No es un caso base, así que se compara a[2] (que es 3) con el resultado de la llamada recursiva f(a, 2).
//Llamada recursiva 4: f(a, 2)
//Quinta llamada: f(a, 2)
//
//No es un caso base, así que se compara a[1] (que es 2) con el resultado de la llamada recursiva f(a, 1).
//Llamada recursiva 5: f(a, 1)
//Sexta llamada: f(a, 1)
//
//Es un caso base (cuando dl es 1), retorna a[0] que es 6.
//Ahora, vamos retrocediendo en las llamadas recursivas:
//
//La quinta llamada (f(a, 2)) retorna el mínimo entre a[1] (2) y el resultado de la cuarta llamada (f(a, 1), que es 6), por lo que retorna 2.
//La cuarta llamada (f(a, 3)) retorna el mínimo entre a[2] (3) y el resultado de la quinta llamada (2), por lo que retorna 2.
//La tercera llamada (f(a, 4)) retorna el mínimo entre a[3] (7) y el resultado de la cuarta llamada (2), por lo que retorna 2.
//La segunda llamada (f(a, 5)) retorna el mínimo entre a[4] (9) y el resultado de la tercera llamada (2), por lo que retorna 2.
//La primera llamada (f(a, 6)) retorna el mínimo entre a[5] (4) y el resultado de la segunda llamada (2), por lo que retorna 2.
//Finalmente, el programa imprime 2, que es el mínimo elemento en el arreglo a[].

