//ejercicio 19 C

#include<iostream>
using namespace std;

char validarEleccion() {
	 char opcion;
	 do{
	 	cout << "Desea confirmar el pr�stamo? Ingrese S � N: ";
	 opcion = tolower(opcion);
	 } while (opcion != 's' and opcion != 'n');
	 return opcion;
}


int main() {
	 cout << " *** BIENVENIDO AL SISTEMA DEL BANCO MONEYMONEY *** " << endl;
	 cout << "Ingrese monto para obtener un pr�stamo: ";
	 float monto;
	 cin >> monto;
	 cout << "El inter�s es del 25%." << endl;
	 if (validarEleccion() == 's')
	 	cout << "Ahora usted nos debe " << monto + (monto*0.25) << endl;
	 else
	 	cout << "Lamentamos que no quiera hacer negocios con nosotros.";
	 return 0;
}

//terminar...
