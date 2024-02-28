 //Ejercicio 4.
//Cargar un arreglo con 20 números enteros ingresados por teclado de manera que el arreglo siempre se
//encuentre ordenado en forma ascendente. El arreglo se cargará por completo.
//Hacer tres variantes, suponiendo que el usuario carga los datos de las siguientes formas:
//a) El usuario ingresa los números en orden ascendente.
//b) El usuario ingresa los números en orden descendente.
//c) El usuario ingresa los números sin un orden en particular.

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int arreglo[20];
//    
//    cout << "Ingrese 20 números en orden descendente:" << endl;
//    for (int i = 0; i < 20; i++) {
//        cin >> arreglo[i];
//    }
//
//    // Invertir el arreglo para que quede en orden ascendente.
////    for (int i = 0; i < 10; i++) {
////        int temp = arreglo[i];
////        arreglo[i] = arreglo[19 - i];
////        arreglo[19 - i] = temp;
////    }
//
//    cout << "Arreglo ordenado en forma ascendente:" << endl;
//    for (int i = 19; i >=0; i--) {
//        cout << arreglo[i] << " ";
//    }
//    
//    return 0;
//}
//



#include <iostream>
using namespace std;

// Función para ordenar un arreglo en forma ascendente usando el algoritmo de burbuja.
void ordenarAscendente(int arreglo[], int longitud) {
    for (int i = 0; i < longitud - 1; i++) {
        for (int j = 0; j < longitud - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto.
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arreglo[20];
    
    cout << "Ingrese 20 números en cualquier orden:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> arreglo[i];
    }

    // Llamar a la función para ordenar el arreglo en forma ascendente.
    ordenarAscendente(arreglo, 20);

    cout << "Arreglo ordenado en forma ascendente:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arreglo[i] << " ";
    }
    
    return 0;
}











