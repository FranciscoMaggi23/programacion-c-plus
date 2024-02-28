//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Estructura para representar a un ciudadano
//struct Ciudadano {
//    string nombreApellido;
//    long fechaNacimiento;
//    string direccion;
//    int tipoDocumento;
//    int numeroDocumento;
//    char sexo;
//};
//
//// Función para cargar los datos de un ciudadano en el arreglo
//void cargarCiudadano(Ciudadano& ciudadano) {
//    cout << "Nombre y Apellido: ";
//    cin.ignore();
//    getline(cin, ciudadano.nombreApellido);
//    cout << "Fecha de Nacimiento (AAAAMMDD): ";
//    cin >> ciudadano.fechaNacimiento;
//    cout << "Dirección: ";
//    cin.ignore();
//    getline(cin, ciudadano.direccion);
//    do {
//        cout << "Tipo de Documento (1-DNI, 2-Pasaporte, 3-Otro): ";
//        cin >> ciudadano.tipoDocumento;
//    } while (ciudadano.tipoDocumento < 1 || ciudadano.tipoDocumento > 3);
//    cout << "Número de Documento: ";
//    cin >> ciudadano.numeroDocumento;
//    cout << "Sexo (M/F): ";
//    cin >> ciudadano.sexo;
//}
//
//// Función para imprimir los datos de un ciudadano
//void imprimirCiudadano(const Ciudadano& ciudadano) {
//    cout << "Nombre y Apellido: " << ciudadano.nombreApellido << endl;
//    cout << "Fecha de Nacimiento: " << (ciudadano.fechaNacimiento % 100) << "/"
//         << ((ciudadano.fechaNacimiento / 100) % 100) << "/"
//         << (ciudadano.fechaNacimiento / 10000) << endl;
//    cout << "Dirección: " << ciudadano.direccion << endl;
//    cout << "Tipo de Documento: ";
//    switch (ciudadano.tipoDocumento) {
//        case 1:
//            cout << "DNI";
//            break;
//        case 2:
//            cout << "Pasaporte";
//            break;
//        case 3:
//            cout << "Otro";
//            break;
//    }
//    cout << endl;
//    cout << "Número de Documento: " << ciudadano.numeroDocumento << endl;
//    cout << "Sexo: ";
//    if (ciudadano.sexo == 'M') {
//        cout << "masculino";
//    } else if (ciudadano.sexo == 'F') {
//        cout << "femenino";
//    }
//    cout << endl;
//}
//
//// Función para filtrar y mostrar ciudadanos por sexo
//void mostrarCiudadanosPorSexo(const Ciudadano ciudadanos[], int numCiudadanos, char sexoBuscado) {
//    cout << "Ciudadanos de sexo " << (sexoBuscado == 'M' ? "masculino" : "femenino") << ":" << endl;
//    for (int i = 0; i < numCiudadanos; ++i) {
//        if (ciudadanos[i].sexo == sexoBuscado) {
//            imprimirCiudadano(ciudadanos[i]);
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//    const int MAX_CIUDADANOS = 100;
//    Ciudadano ciudadanos[MAX_CIUDADANOS];
//    int numCiudadanos = 0;
//
//    char continuar = 'S';
//
//    while (numCiudadanos < MAX_CIUDADANOS && (continuar == 'S' || continuar == 's')) {
//        cargarCiudadano(ciudadanos[numCiudadanos]);
//        numCiudadanos++;
//
//        cout << "¿Desea ingresar otro ciudadano? (S/N): ";
//        cin >> continuar;
//    }
//
//    cout << "Listado de Ciudadanos:" << endl;
//    for (int i = 0; i < numCiudadanos; ++i) {
//        imprimirCiudadano(ciudadanos[i]);
//        cout << endl;
//    }
//
//    mostrarCiudadanosPorSexo(ciudadanos, numCiudadanos, 'M');
//    mostrarCiudadanosPorSexo(ciudadanos, numCiudadanos, 'F');
//
//    return 0;
//}



#include <iostream>
#include <string>

using namespace std;

// Estructura para representar a un ciudadano
struct Ciudadano {
    string nombreApellido;
    long fechaNacimiento;
    string direccion;
    int tipoDocumento;
    int numeroDocumento;
    char sexo;
};

// Función para cargar los datos de un ciudadano en el arreglo
void cargarCiudadano(Ciudadano& ciudadano) {
    cout << "Nombre y Apellido: ";
    cin.ignore();
    getline(cin, ciudadano.nombreApellido);
    cout << "Fecha de Nacimiento (AAAAMMDD): ";
    cin >> ciudadano.fechaNacimiento;
    cout << "Dirección: ";
    cin.ignore();
    getline(cin, ciudadano.direccion);
    do {
        cout << "Tipo de Documento (1-DNI, 2-Pasaporte, 3-Otro): ";
        cin >> ciudadano.tipoDocumento;
    } while (ciudadano.tipoDocumento < 1 || ciudadano.tipoDocumento > 3);
    cout << "Número de Documento: ";
    cin >> ciudadano.numeroDocumento;
    cout << "Sexo (M/F): ";
    cin >> ciudadano.sexo;
}

// Función para imprimir los datos de un ciudadano
void imprimirCiudadano(const Ciudadano& ciudadano) {
    cout << "Nombre y Apellido: " << ciudadano.nombreApellido << endl;
    cout << "Fecha de Nacimiento: " << (ciudadano.fechaNacimiento % 100) << "/"
         << ((ciudadano.fechaNacimiento / 100) % 100) << "/"
         << (ciudadano.fechaNacimiento / 10000) << endl;
    cout << "Dirección: " << ciudadano.direccion << endl;
    cout << "Tipo de Documento: ";
    switch (ciudadano.tipoDocumento) {
        case 1:
            cout << "DNI";
            break;
        case 2:
            cout << "Pasaporte";
            break;
        case 3:
            cout << "Otro";
            break;
    }
    cout << endl;
    cout << "Número de Documento: " << ciudadano.numeroDocumento << endl;
    cout << "Sexo: ";
    if (ciudadano.sexo == 'M') {
        cout << "masculino";
    } else if (ciudadano.sexo == 'F') {
        cout << "femenino";
    }
    cout << endl;
}

// Función para filtrar y mostrar ciudadanos por sexo
void mostrarCiudadanosPorSexo(const Ciudadano ciudadanos[], int numCiudadanos, char sexoBuscado) {
    cout << "Ciudadanos de sexo " << (sexoBuscado == 'M' ? "masculino" : "femenino") << ":" << endl;
    for (int i = 0; i < numCiudadanos; ++i) {
        if (ciudadanos[i].sexo == sexoBuscado) {
            imprimirCiudadano(ciudadanos[i]);
            cout << endl;
        }
    }
}

int main() {
    const int MAX_CIUDADANOS = 100;
    Ciudadano ciudadanos[MAX_CIUDADANOS];
    int numCiudadanos = 0;

    char continuar = 'S';

    while (numCiudadanos < MAX_CIUDADANOS && (continuar == 'S' || continuar == 's')) {
        cargarCiudadano(ciudadanos[numCiudadanos]);
        numCiudadanos++;

        cout << "¿Desea ingresar otro ciudadano? (S/N): ";
        cin >> continuar;
    }

    cout << "Listado de Ciudadanos:" << endl;
    for (int i = 0; i < numCiudadanos; ++i) {
        imprimirCiudadano(ciudadanos[i]);
        cout << endl;
    }

    mostrarCiudadanosPorSexo(ciudadanos, numCiudadanos, 'M');
    mostrarCiudadanosPorSexo(ciudadanos, numCiudadanos, 'F');

    return 0;
}

