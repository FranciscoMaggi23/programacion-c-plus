//Ejercicio 9.
//Escribir una función que, dado un arreglo de int y su dimensión lógica, invierta los elementos del arreglo.
//Ejemplos: Si el arreglo contiene los elementos [1,2,3,4,5] deberá quedar [5,4,3,2,1].
//Si el arreglo contiene [10,20] deberá quedar [20,10]
//Si el arreglo contiene [5] deberá quedar [5].

#include <iostream>
#include <string>
using namespace std;


void invertirArreglo(int arreglo[], int dimLogica) {
    int inicio = 0;
    int fin = dimLogica - 1;

    while (inicio < fin) {
        // Intercambia los elementos apuntados por 'inicio' y 'fin'
        int temp = arreglo[inicio];
        arreglo[inicio] = arreglo[fin];
        arreglo[fin] = temp;

        // Mueve los punteros hacia adentro
        inicio++;
        fin--;
    }
}

int main() {
    int arreglo1[] = {1, 2, 3, 4, 5};
    int dimLogica1 = 5;

    invertirArreglo(arreglo1, dimLogica1);

    std::cout << "Arreglo 1 invertido: ";
    for (int i = 0; i < dimLogica1; i++) {
        std::cout << arreglo1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}






//#include <iostream>
//
//void invertirArreglo(int arreglo[], int dimLogica) {
//    int arregloInvertido[dimLogica]; // Creamos un nuevo arreglo para almacenar el resultado
//
//    // Recorremos el arreglo original de adelante hacia atrás
//    for (int i = 0; i < dimLogica; i++) {
//        arregloInvertido[i] = arreglo[dimLogica - 1 - i];
//    }
//
//    // Copiamos los elementos invertidos al arreglo original
//    for (int i = 0; i < dimLogica; i++) {
//        arreglo[i] = arregloInvertido[i];
//    }
//}
//
//int main() {
//    int arreglo1[] = {1, 2, 3, 4, 5};
//    int dimLogica1 = 5;
//
//    invertirArreglo(arreglo1, dimLogica1);
//
//    std::cout << "Arreglo 1 invertido: ";
//    for (int i = 0; i < dimLogica1; i++) {
//        std::cout << arreglo1[i] << " ";
//    }
//    std::cout << std::endl;
//
//    int arreglo2[] = {10, 20};
//    int dimLogica2 = 2;
//
//    invertirArreglo(arreglo2, dimLogica2);
//
//    std::cout << "Arreglo 2 invertido: ";
//    for (int i = 0; i < dimLogica2; i++) {
//        std::cout << arreglo2[i] << " ";
//    }
//    std::cout << std::endl;
//
//    int arreglo3[] = {5};
//    int dimLogica3 = 1;
//
//    invertirArreglo(arreglo3, dimLogica3);
//
//    std::cout << "Arreglo 3 invertido: ";
//    for (int i = 0; i < dimLogica3; i++) {
//        std::cout << arreglo3[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}

