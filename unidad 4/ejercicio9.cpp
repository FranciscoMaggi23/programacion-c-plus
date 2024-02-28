//Ejercicio 9.
//Escribir una funci�n recursiva que reciba una palabra y retorne true si es pal�ndromo, false si no lo es
//(diferenciando may�sculas y min�sculas).
//Ejemplo: si la palabra es "radar" retorna true.
//Nota 1: Un pal�ndromo es una palabra que se lee igual en un sentido que en otro.
//Nota 2: Podr�a ser �til la funci�n substr que obtiene un substring a partir de un string.
//
//#include <iostream>
//
//// Funci�n auxiliar para verificar si dos caracteres son iguales (teniendo en cuenta may�sculas y min�sculas)
//bool sonIguales(char a, char b) {
//    return a == b;
//}
//
//// Funci�n recursiva para verificar si una palabra es un pal�ndromo
//bool esPalindromo(const std::string& palabra, int inicio, int fin) {
//    // Caso base: si los �ndices se cruzan o son iguales, es un pal�ndromo
//    if (inicio >= fin) {
//        return true;
//    } else {
//        // Comparar los caracteres en los �ndices y llamar recursivamente con �ndices actualizados
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
//        std::cout << "La palabra '" << palabra << "' es un pal�ndromo." << std::endl;
//    } else {
//        std::cout << "La palabra '" << palabra << "' no es un pal�ndromo." << std::endl;
//    }
//
//    return 0;
//}
////
#include <iostream>
using namespace std;

// Funci�n auxiliar para verificar si dos caracteres son iguales (ignorando may�sculas y min�sculas)
bool sonIguales(char a, char b) {
    return a==b;
}

// Funci�n recursiva para verificar si una palabra es un pal�ndromo
bool esPalindromo(string palabra) {//otra forma (const string & palabra)
    // Caso base: si la longitud de la palabra es 0 o 1, es un pal�ndromo
    if (palabra.length() <= 1) {
        return true;
    } else {
        // Comparar el primer y �ltimo car�cter y llamar recursivamente con el substring central
        return sonIguales(palabra.substr(0, 1)[0], palabra.substr(palabra.length() - 1, 1)[0]) &&
               esPalindromo(palabra.substr(1, palabra.length() - 2));
    }
}

int main() {
    // Ejemplo de uso
    string palabra = "RawaR";
    bool resultado = esPalindromo(palabra);

    if (resultado) {
        cout << "La palabra '" << palabra << "' es un pal�ndromo." << endl;
    } else {
        cout << "La palabra '" << palabra << "' no es un pal�ndromo." << endl;
    }

    return 0;
}

