#include <iostream>
using namespace std;
int main() {
    int arreglo[] = {1, 2, 3, 2, 4, 3, 5, 6, 7, 1};
    int tamanoArreglo = 10;

    // Creamos un arreglo para almacenar las ocurrencias
    int ocurrencias[10] = {0}; // Suponemos que los elementos van de 1 a 10

    // Contamos las ocurrencias
    for (int i = 0; i < tamanoArreglo; ++i) {
        int elemento = arreglo[i];
        ocurrencias[elemento - 1]++;
    }

    // Mostramos los resultados
    for (int i = 0; i < 10; ++i) {
        if (ocurrencias[i] > 0) {
            std::cout << "El " << i + 1 << " apareció " << ocurrencias[i] << " veces." << std::endl;
        }
    }

    return 0;
}

