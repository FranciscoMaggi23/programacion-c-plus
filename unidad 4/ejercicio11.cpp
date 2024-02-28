//Ejercicio 11.
//Escribir una función recursiva que reciba un arreglo de int y su dimensión lógica, y retorne el primer número
//impar encontrado en el arreglo. En caso de no haber números impares, debe retornar 0.
//Ejemplo: Dado el arreglo [ 2, 0, 8, 7, 4, 3 ] retornará 3.
//
//#include<iostream>
//using namespace std;
//
//bool comprobar(int e){
//	if(e%2!=0){
//		return true;
//	}else
//		return false;
//}
//
//int impar(int a[], int dl){
//	if(dl==1){
//		return a[0];
//	}
//	if(comprobar){
//		return a[dl];
//	}
//	else{
//		dl--;
//		return comprobar(a[dl-1]) || impar(a, dl-1);
//	}
//	
//}
//
//
//int main(){
//	
//	int a[]={2, 0, 8, 7, 4, 3};
//	int dl=6;
//	
//	cout<<impar(a, dl-1);
//	
//	
//	return 0;
//}


//la version corregida del codigo anterior seria:

#include <iostream>
using namespace std;

bool esImpar(int numero) {
    return numero % 2 != 0;
}

int buscarImpar(int a[], int dl) {
    if (dl == 0) {
        return 0; // No se encontraron impares
    } else {
        if (esImpar(a[dl - 1])) {
            return a[dl - 1]; // Se encontró un impar
        } else {
            return buscarImpar(a, dl - 1); // Llamada recursiva con el tamaño del arreglo reducido
        }
    }
}

int main() {
    int a[] = {2, 0, 8, 7, 4, 3};
    int dl = 6;

    int resultado = buscarImpar(a, dl);

    if (resultado != 0) {
        cout << "El primer numero impar encontrado es: " << resultado << endl;
    } else {
        cout << "No se encontraron numeros impares en el arreglo." << endl;
    }

    return 0;
}



//fin



