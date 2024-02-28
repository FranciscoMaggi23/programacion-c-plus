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

