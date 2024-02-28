#include <iostream>
#include <string>

using namespace std;

// aca especificamos el tamanio del tablero
const int FILAS = 5;
const int COLUMNAS = 5;
const int MAX_JUGADORES = 10; 
const int MAX_INTENTOS = 5;
const int NUM_BARCOS = 10;

// struct para representar un barco 
struct Barco {
    int fila;
    int columna;
};

// funcion para inicializar el tablero utilizamos el char para que se lea mas facil de leer
void inicializarTablero(char tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {     //recorremos las filas y las columnas para llenar todos los espacios en blanco: ' ' 
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = ' ';
        }
    }
}

// funcion para imprimir el tablero
void imprimirTablero(const char tablero[FILAS][COLUMNAS]) {
    cout << "  1 2 3 4 5" << endl;
    for (int i = 0; i < FILAS; i++) {             // se encarga de mostrar en la consola el contenido del tablero.
        cout << i + 1 << " ";
        for (int j = 0; j < COLUMNAS; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

/* en esta parte crear un tablero de juegoy un espacio para registrar los barcos.
Permitir al jugador colocar barcos en el tablero Jugar la partida: el jugador realiza intentos de ataque en el tablero calcular y devolver su puntaje al final de la partida
el tablero se representa como una matriz de caracteres, donde cada celda puede contener ' ' (espacio en blanco), 'B' (barco) o 'X' (barco encontrado) el arreglo de barcos almacena la ubicación de los barcos en el tablero.
el jugador coloca barcos, realiza intentos de ataque y gana puntos según los resultados de sus ataques.
*/ 
int jugarPartida(const string& nombre) {
    char tablero[FILAS][COLUMNAS];
    Barco barcos[NUM_BARCOS];

    // lo que buscamos con esta funcion es colocar los barcos en la pocision que el jugador indique "x","y" deben ir puestos asi por ejemplo: "1 2" sin las comillas
    cout << nombre << ", coloca tus barcos." << endl;
    inicializarTablero(tablero);
    for (int i = 0; i < NUM_BARCOS; i++) {
      int fila, columna;
        cout << "Ingrese la fila y columna para el barco " << i + 1 <<" de la forma x y"<<": ";
        cin >> fila >> columna;

        if (fila < 1 or fila > FILAS or columna < 1 or columna > COLUMNAS or tablero[fila - 1][columna - 1] == 'B') {
            cout << "Ubicacion invalida. Intente de nuevo." << endl;
            i--;
        } else {
            tablero[fila - 1][columna - 1] = 'B';
            barcos[i].fila = fila;
            barcos[i].columna = columna;
        }
    }

    // jugar la partida 
    int puntaje = 0;
    for (int intento = 0; intento < MAX_INTENTOS; intento++) {
        int fila, columna;
        cout << "Intento " << intento + 1 << " de " << nombre << ": Ingrese la fila y columna a atacar (o '0 0' para rendirse): ";
        cin >> fila >> columna;// al intento le sumamos uno para que no aparezca como intento numero 0;

        if (fila == 0 and columna == 0) {
            break;    
        }
        if (fila < 1 or fila > FILAS or columna < 1 or columna > COLUMNAS) {
            cout << "Ubicacion invalida. Intente de nuevo." << endl;
            intento--;
        } else {
            if (tablero[fila - 1][columna - 1] == 'B') {
                cout << "¡barco encontrado!" << endl;
                puntaje++;
                tablero[fila - 1][columna - 1] = 'X';
            } else {
                cout << "agua." << endl;  
            }
        }
    }

    return puntaje; 
}

int main() {
    string nombres[MAX_JUGADORES];
    int puntajes[MAX_JUGADORES];
    int numJugadores = 0;
    bool Hay_Alguien_Jugando= true;
    cout << "Bienvenido a Batalla Naval" << endl;
//esta parte del codigo tomamos inspiracion de chat GPT4.0 para realizar este while 
    while (Hay_Alguien_Jugando) {
        if (numJugadores == MAX_JUGADORES) {
            break;
        }

        string nombre;
        cout << "Ingrese el nombre del jugador (o 'zzz' para finalizar): ";
        cin >> nombre;

        if (nombre == "zzz") {
            break;
        }

        int puntaje = jugarPartida(nombre);
        nombres[numJugadores] = nombre;
        puntajes[numJugadores] = puntaje;
        numJugadores++;
    }

    //primer reporte 
    cout << "Reporte 1: Puntajes" << endl;
    for (int i = 0; i < numJugadores; i++) {
        cout << nombres[i] << ": " << puntajes[i] << " puntos" << endl;
    }

    // segundo reporte 
    int maxPuntaje = -1;
    string ganador;
    for (int i = 0; i < numJugadores; i++) {
        if (puntajes[i] > maxPuntaje) {
            maxPuntaje = puntajes[i];
            ganador = nombres[i];
        }
    }

    cout << "Reporte 2: Ganador" << endl;
    cout << "Felicitaciones " << ganador << ", obtuviste " << maxPuntaje << " puntos. ¡Sos el ganador!" << endl;

    return 0;
}
/*fuentes utilizadas:

 https://www.onlinegdb.com/Ph7sH4xNI ,pdf de la plataformaED, ejercicios de la practica, chat GPT 4.0,https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C%2B%2B/Estructuras 
 

 
 
 
 
 */
