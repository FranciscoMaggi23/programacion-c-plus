#include <iostream>

const int MAX = 12;

void contarOcurrencias(int arreglo[], int dlA) {
    int ocurrencias[MAX] = {0}; // Inicializa el arreglo de ocurrencias a 0

    // Contar las ocurrencias de cada elemento en el arreglo
    for (int i = 0; i < dlA; i++) {
        int elementoActual = arreglo[i];
        ocurrencias[elementoActual]++;
    }

    // Mostrar el resultado
    std::cout << "Las ocurrencias son:" << std::endl;
    for (int i = 0; i < MAX; i++) {
        if (ocurrencias[i] > 0) {
            std::cout << "El " << i << " aparece " << ocurrencias[i] << " veces." << std::endl;
        }
    }
}

int main() {
    int A[MAX] = {2,0,0, 8, 5, 2, 2, 7, 2, 7, 4, 2};
    int dlA = 12;

    contarOcurrencias(A, dlA);

    return 0;
}

