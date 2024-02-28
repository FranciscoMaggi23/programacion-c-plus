//Ejercicio 19.
//Considerando la siguiente definici�n de struct:


#include<iostream>
using namespace std;



struct TipoZapato {
string estilo;
double precio;
};

int main(){
	//�Qu� salidas producir� el siguiente c�digo?
	TipoZapato zapato1, zapato2;
	zapato1.estilo = "Sandalia";
	zapato1.precio = 9.99;
	cout << zapato1.estilo << " $" << zapato1.precio << endl;
	
	zapato2 = zapato1;
	
	zapato2.precio = zapato2.precio / 9;
	cout << zapato2.estilo << " $" << zapato2.precio << endl;
	
	return 0;
}


//Luego, se asigna zapato1 a zapato2. Esto copia todos los miembros de zapato1 a zapato2, por lo que zapato2 tendr� 
//el mismo estilo ("Sandalia") y precio (9.99) que zapato1.
//Se modifica el precio de zapato2 dividi�ndolo por 9. Esto hace que el precio de zapato2 sea 9.99 / 9 = 1.11.
