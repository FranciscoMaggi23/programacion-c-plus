//Ejercicio 2.
//Graficar la pila de llamadas (colocando parámetros y valores de retorno):

#include<iostream>
using namespace std;

int sumatoria(int num) {
	 if (num == 0)
		 return 0;
		 return sumatoria(num-1) + num;
	}
int main() {
	 cout << sumatoria(5);
	 return 0;
}

