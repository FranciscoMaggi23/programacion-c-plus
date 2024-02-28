//Ejercicio 9.
//Escribir una función recursiva que reciba una palabra y retorne true si es palíndromo, false si no lo es
//(diferenciando mayúsculas y minúsculas).
//Ejemplo: si la palabra es "radar" retorna true.
//Nota 1: Un palíndromo es una palabra que se lee igual en un sentido que en otro.
//Nota 2: Podría ser útil la función substr que obtiene un substring a partir de un string.
//
//#include <iostream>
//
//// Función auxiliar para verificar si dos caracteres son iguales (teniendo en cuenta mayúsculas y minúsculas)
//bool sonIguales(char a, char b) {
//    return a == b;
//}
//
//// Función recursiva para verificar si una palabra es un palíndromo
//bool esPalindromo(const std::string& palabra, int inicio, int fin) {
//    // Caso base: si los índices se cruzan o son iguales, es un palíndromo
//    if (inicio >= fin) {
//        return true;
//    } else {
//        // Comparar los caracteres en los índices y llamar recursivamente con índices actualizados
//        return sonIguales(palabra[inicio], palabra[fin]) && esPalindromo(palabra, inicio + 1, fin - 1);
//    }
//}
//
//int main() {
//    // Ejemplo de uso
//    std::string palabra = "radaR";
//    bool resultado = esPalindromo(palabra, 0, palabra.length() - 1);
//
//    if (resultado) {
//        std::cout << "La palabra '" << palabra << "' es un palíndromo." << std::endl;
//    } else {
//        std::cout << "La palabra '" << palabra << "' no es un palíndromo." << std::endl;
//    }
//
//    return 0;
//}
////
#include <iostream>
using namespace std;

// Función auxiliar para verificar si dos caracteres son iguales (ignorando mayúsculas y minúsculas)
bool sonIguales(char a, char b) {
    return a==b;
}

// Función recursiva para verificar si una palabra es un palíndromo
bool esPalindromo(string palabra) {//otra forma (const string & palabra)
    // Caso base: si la longitud de la palabra es 0 o 1, es un palíndromo
    if (palabra.length() <= 1) {
        return true;
    } else {
        // Comparar el primer y último carácter y llamar recursivamente con el substring central
        return sonIguales(palabra.substr(0, 1)[0], palabra.substr(palabra.length() - 1, 1)[0]) &&
               esPalindromo(palabra.substr(1, palabra.length() - 2));
    }
}

int main() {
    // Ejemplo de uso
    string palabra = "RawaR";
    bool resultado = esPalindromo(palabra);

    if (resultado) {
        cout << "La palabra '" << palabra << "' es un palíndromo." << endl;
    } else {
        cout << "La palabra '" << palabra << "' no es un palíndromo." << endl;
    }

    return 0;
}

