
#include<iostream>
using namespace std;

void primeraFuncion(int x) {
	x = x+8;
	cout << "Valor de x luego de la primera funci�n:" << x << endl;
}
void segundaFuncion(int & x) {
	x = x+5;
	primeraFuncion(x);
	cout << "Valor de x luego de la segunda funci�n:" << x << endl;
}
int main() {
	int x = 2;
	segundaFuncion(x);
	return 0;
}

//ok
