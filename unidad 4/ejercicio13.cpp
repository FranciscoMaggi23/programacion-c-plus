//Ejerc icio 13.
//a) Suponer la existencia de una lista de n�meros enteros positivos cuyos nodos se definen como:
//struct Nodo {
// int dato;
// Nodo* siguiente;
//};
//Analizar la siguiente funci�n (sin ejecutarla en la m�quina) e indicar qu� retorna si la lista pasada por
//par�metro contiene los siguientes elementos: 6 - 2 - 8 - 1.
//int funcion(Nodo* inicio, int m = -1) {
//	 if (inicio == nullptr)
//		 return m;
//	 if (inicio->dato > m)
//		 m = inicio->dato;
//	 return funcion(inicio->siguiente, m);
//}
//b) �Qu� deber�a cambiarse en la funci�n anterior si se intentara obtener el resultado opuesto? En el
//ejemplo de la lista con los n�meros 6 - 2 - 8 - 1 se deber�a obtener el n�mero 1. Se asume que la lista
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


