#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validar_c(const string &c) {
    string numeros = "0123456789", especiales = "+-¿'?*";
    bool cumpleNumero = false, cumpleEspecial = false, cumpleMayuscula = false;

    if (c.length() >= 8) {
        for (size_t i = 0; i < c.length(); i++) {
            if (isupper(c[i])) {
                cout << "Tiene mayúscula: " << c[i] << endl;
                cumpleMayuscula = true;
            }
            for (size_t n = 0; n < numeros.length(); n++) {
                if (c[i] == numeros[n]) {
                    cout << "Tiene número: " << c[i] << endl;
                    cumpleNumero = true;
                    break;
                }
            }
            for (size_t e = 0; e < especiales.length(); e++) {
                if (c[i] == especiales[e]) {
                    cout << "Tiene caracter especial: " << c[i] << endl;
                    cumpleEspecial = true;
                    break;
                }
            }
        }
        if (cumpleEspecial && cumpleNumero && cumpleMayuscula) {
            cout << "Contraseña apta" << endl;
            return true;
        } else {
            cout << "Contraseña no apta" << endl;
            return false;
        }
    } else {
        cout << "La contraseña debe tener al menos 8 caracteres" << endl;
        return false;
    }
}

int main() {
    string contrasena;
    int menu;
    cout << "Menú:\n"
         << "  0: Salir\n"
         << "  1: Validar contraseña\n"
         << "Ingrese una opción: ";
    cin >> menu;

    switch (menu) {
        case 0:
            break;
        case 1:
            cout << "Ingrese contraseña: ";
            cin >> contrasena;
            validar_c(contrasena);
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
    }

    return 0;
}

//  size_t:

//El tipo size_t se utiliza comúnmente en C++ para representar
// tamaños y desplazamientos en memoria. En el contexto de un bucle 
// for, se usa para representar el índice de un elemento en un 
// contenedor, como una cadena (string) o un arreglo (array), o
//  para representar la longitud de un contenedor.
//size_t se elige para garantizar que el tipo sea lo suficientemente
// grande como para contener la mayor cantidad de elementos o bytes 
// posibles en la plataforma en la que se está compilando. Esto lo
//  hace útil para evitar desbordamientos de memoria y otros problemas
//   relacionados con el tamaño en plataformas diferentes.

// &:

//El símbolo "&" en el argumento de la función validar_c indica que se está pasando la 
//variable c por referencia en lugar de por valor. Esto significa que dentro de la función, 
//cualquier cambio realizado en c afectará a la variable original que se pasó como argumento.
//
//Cuando una función recibe un argumento por valor, se crea una copia local de ese argumento
// dentro de la función, y cualquier modificación realizada en esa copia no afecta a la variable
//  original fuera de la función. Sin embargo, cuando se pasa por referencia usando "&", la función
//   trabaja directamente con la variable original, lo que permite modificarla y mantener esos cambios fuera de la función.

//En tu código, se utiliza const string &c como argumento de la función validar_c. El const indica que la función
// no modificará la cadena c pasada como argumento, pero aún permite a la función acceder a la cadena sin hacer una
//  copia de ella, lo que puede ser más eficiente en términos de uso de memoria y velocidad.
//
//En resumen, el "&" en const string &c permite a la función validar_c acceder a la cadena c sin 
//copiarla y garantiza que no la modificará. Esto es útil cuando deseas trabajar con datos existentes sin crear copias innecesarias.

// diferencia entre: isupper() y toupper():

//Para resolver el problema de manera efectiva, debes usar isupper() para verificar si un carácter es mayúscula en lugar de
// intentar convertirlo con toupper(). De esta manera, evitarás falsos positivos al identificar mayúsculas en caracteres que no son letras.
