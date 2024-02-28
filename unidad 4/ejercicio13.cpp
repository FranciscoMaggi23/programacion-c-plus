//Ejerc icio 13.
//a) Suponer la existencia de una lista de números enteros positivos cuyos nodos se definen como:
//struct Nodo {
// int dato;
// Nodo* siguiente;
//};
//Analizar la siguiente función (sin ejecutarla en la máquina) e indicar qué retorna si la lista pasada por
//parámetro contiene los siguientes elementos: 6 - 2 - 8 - 1.
//int funcion(Nodo* inicio, int m = -1) {
//	 if (inicio == nullptr)
//		 return m;
//	 if (inicio->dato > m)
//		 m = inicio->dato;
//	 return funcion(inicio->siguiente, m);
//}
//b) ¿Qué debería cambiarse en la función anterior si se intentara obtener el resultado opuesto? En el
//ejemplo de la lista con los números 6 - 2 - 8 - 1 se debería obtener el número 1. Se asume que la lista
//no contiene valores mayores que 99
//
//a)  retornara 8
//
//b) deberia de cambiarse la condicion en el segundo if "<";


#include<iostream>
using namespace std;


struct Nodo {
 int dato;
 Nodo* siguiente;
};

int funcion(Nodo* inicio, int m = -1) {
	 if (inicio == NULL)
		 return m;
	 if (inicio->dato > m)
		 m = inicio->dato;
	 return funcion(inicio->siguiente, m);
}


