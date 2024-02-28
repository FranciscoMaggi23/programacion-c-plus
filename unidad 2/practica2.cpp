//#include<iostream>
//using namespace std;
//
//
//
//
//
//
//const int DIMENSION_FISICA = 100;
//
//int insertarOrdenado(int arreglo[], int dl, int nuevoDato) {
//	 int i = 0;
//	 while (i < dl && arreglo[i] < nuevoDato) {
//	 i++;
// 	 }
//	 for (int j = dl; j > i; j--) {
//	 	arreglo[j] = arreglo[j-1];
//	 }
//	 arreglo[i] = nuevoDato;
//	 return dl+1;
//}
//int cargar(int arreglo[], int dl) {
//	 int numero;
//	 cout << "Numero: (0 para cortar) ";
//	 cin >> numero;
//	 while (numero != 0 and dl < DIMENSION_FISICA) {
//		 dl = insertarOrdenado(arreglo, dl, numero);
//		 cout << "Numero: (0 para cortar) ";
//		 cin >> numero;
//	 }
// return dl;
//}
//int main() {
//	 int numeros[DIMENSION_FISICA];
//	 int dimension_logica = 0;
//	 dimension_logica = cargar(numeros, dimension_logica);
//}


#include <iostream>
#include <string>
using namespace std;

struct Pareja {
    int numeroInscripcion;
    string nombreIntegrante1;
    string nombreIntegrante2;
    string cancion;
};

struct Cancion {
    string nombre;
    int duracion;
};

// Función para eliminar una canción del arreglo de canciones
void eliminarCancion(Cancion canciones[], int& numCanciones, const string& nombreCancion) {
    bool enUso = false;

    // Verificar si alguna pareja utiliza la canción
    for (int i = 0; i < numCanciones; i++) {
        if (canciones[i].nombre == nombreCancion) {
            enUso = true;
            break;
        }
    }

    if (enUso) {
        cout << "La canción está en uso por una pareja. No se puede eliminar." << endl;
    } else {
        // Buscar y eliminar la canción del arreglo
        for (int i = 0; i < numCanciones; i++) {
            if (canciones[i].nombre == nombreCancion) {
                for (int j = i; j < numCanciones - 1; j++) {
                    canciones[j] = canciones[j + 1];
                }
                numCanciones--;
                cout << "La canción ha sido eliminada correctamente." << endl;
                return;
            }
        }

        cout << "La canción no se encontró en la lista." << endl;
    }
}

int main() {
    const int maxParejas = 2;
    const int maxCanciones = 2;
    Pareja parejas[maxParejas];
    Cancion canciones[maxCanciones];
    int numParejas = 0;
    int numCanciones = 0;

    // Cargar datos de parejas y canciones aquí

    // Solicitar al usuario el nombre de la canción a eliminar
    string nombreEliminar;
    cout << "Ingrese el nombre de la canción a eliminar: ";
    cin >> nombreEliminar;

    // Llamar a la función para eliminar la canción
    eliminarCancion(canciones, numCanciones, nombreEliminar);

    return 0;
}

