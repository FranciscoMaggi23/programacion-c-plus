//ejercicio 20 B
#include<iostream>
using namespace std;

void funcion(int a, int & y, int & z) {
	int b = 1;
	y = y+1;
	z = z+a; z = z + a;// Añade el valor de a (que es 2) al valor de z (que también es a).
	 //Después de esta operación, z se convierte en 4.
	b = 4;
}
int main() {
	int a = 2;
	int b = 3;
	funcion(a+b, a, a);
	cout<< "Variable a:" << a <<endl;
	cout << "Variable b:" << b <<endl;
	return 0;
}

//explicar...
