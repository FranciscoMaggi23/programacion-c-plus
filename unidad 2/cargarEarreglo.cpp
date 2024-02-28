

#include<iostream>
using namespace std;


const int DIMENSION_FISICA = 10; 

int cargar(int arreglo[], int dl) {
	 int numero;
	 cout << "Numero: (0 para cortar) ";
	 cin >> numero;
	 while (numero != 0 and dl < DIMENSION_FISICA) {
		 arreglo[dl] = numero;
		 dl++;
		 cout << "Numero: (0 para cortar) ";
		 cin >> numero;
	 }
 return dl;
} 
int main() {
	 int numeros[DIMENSION_FISICA];
	 int dimension_logica = 0;
	 dimension_logica = cargar(numeros, dimension_logica);
	 cout<<dimension_logica;
}

