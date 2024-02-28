//Ejercicio 1.
//Dado el siguiente programa, analizarlo (sin ejecutarlo en la máquina) e indicar qué calcula. ¿Cuál es el caso
//base de este algoritmo? ¿Y el caso recursivo?
#include <iostream>
using namespace std;
int funcion(int m, int n) {
 if (n == 0) {//caso base
 return 0;
 }
 return m + funcion(m, n-1);//caso recursivo
}
int main() {
 cout << funcion(20, 3);
 return 0;
}
