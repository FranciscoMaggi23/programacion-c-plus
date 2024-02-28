#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validar_c(const string &c) {
    string numeros = "0123456789", especiales = "+-�'?*";
    bool cumpleNumero = false, cumpleEspecial = false, cumpleMayuscula = false;

    if (c.length() >= 8) {
        for (size_t i = 0; i < c.length(); i++) {
            if (isupper(c[i])) {
                cout << "Tiene may�scula: " << c[i] << endl;
                cumpleMayuscula = true;
            }
            for (size_t n = 0; n < numeros.length(); n++) {
                if (c[i] == numeros[n]) {
                    cout << "Tiene n�mero: " << c[i] << endl;
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
            cout << "Contrase�a apta" << endl;
            return true;
        } else {
            cout << "Contrase�a no apta" << endl;
            return false;
        }
    } else {
        cout << "La contrase�a debe tener al menos 8 caracteres" << endl;
        return false;
    }
}

int main() {
    string contrasena;
    int menu;
    cout << "Men�:\n"
         << "  0: Salir\n"
         << "  1: Validar contrase�a\n"
         << "Ingrese una opci�n: ";
    cin >> menu;

    switch (menu) {
        case 0:
            break;
        case 1:
            cout << "Ingrese contrase�a: ";
            cin >> contrasena;
            validar_c(contrasena);
            break;
        default:
            cout << "Opci�n no v�lida" << endl;
            break;
    }

    return 0;
}

//  size_t:

//El tipo size_t se utiliza com�nmente en C++ para representar
// tama�os y desplazamientos en memoria. En el contexto de un bucle 
// for, se usa para representar el �ndice de un elemento en un 
// contenedor, como una cadena (string) o un arreglo (array), o
//  para representar la longitud de un contenedor.
//size_t se elige para garantizar que el tipo sea lo suficientemente
// grande como para contener la mayor cantidad de elementos o bytes 
// posibles en la plataforma en la que se est� compilando. Esto lo
//  hace �til para evitar desbordamientos de memoria y otros problemas
//   relacionados con el tama�o en plataformas diferentes.

// &:

//El s�mbolo "&" en el argumento de la funci�n validar_c indica que se est� pasando la 
//variable c por referencia en lugar de por valor. Esto significa que dentro de la funci�n, 
//cualquier cambio realizado en c afectar� a la variable original que se pas� como argumento.
//
//Cuando una funci�n recibe un argumento por valor, se crea una copia local de ese argumento
// dentro de la funci�n, y cualquier modificaci�n realizada en esa copia no afecta a la variable
//  original fuera de la funci�n. Sin embargo, cuando se pasa por referencia usando "&", la funci�n
//   trabaja directamente con la variable original, lo que permite modificarla y mantener esos cambios fuera de la funci�n.

//En tu c�digo, se utiliza const string &c como argumento de la funci�n validar_c. El const indica que la funci�n
// no modificar� la cadena c pasada como argumento, pero a�n permite a la funci�n acceder a la cadena sin hacer una
//  copia de ella, lo que puede ser m�s eficiente en t�rminos de uso de memoria y velocidad.
//
//En resumen, el "&" en const string &c permite a la funci�n validar_c acceder a la cadena c sin 
//copiarla y garantiza que no la modificar�. Esto es �til cuando deseas trabajar con datos existentes sin crear copias innecesarias.

// diferencia entre: isupper() y toupper():

//Para resolver el problema de manera efectiva, debes usar isupper() para verificar si un car�cter es may�scula en lugar de
// intentar convertirlo con toupper(). De esta manera, evitar�s falsos positivos al identificar may�sculas en caracteres que no son letras.
