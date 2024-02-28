/*Ejercicio 10.
    Indicar qué imprime el siguiente programa (sin ejecutarlo en la máquina). ¿Cuál sería un nombre adecuado
    para la función llamada "f"?:*/

#include <iostream>

using namespace std;


int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}
int f(int arreglo[], int dl) {
    if (dl == 1)
        return arreglo[0];
    else
        return min(arreglo[dl-1], f(arreglo, dl-1));
}
int main() {
    int a[] = { 6,2,3,7,9,4 };
    int dl = 6;
    cout << f(a, dl);
}



