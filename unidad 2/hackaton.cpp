

#include <iostream>
#include <string>

using namespace std;

const int TAMANO_TABLERO = 5;
const int NUM_BARCOS = 10;
const int MAX_JUGADORES = 10;

// Estructura para representar una ubicación en el tablero
struct Ubicacion {
    int fila;
    int columna;
};

// Estructura para representar a un jugador
struct Jugador {
    string nombre;
    int puntaje;
};

char tablero[TAMANO_TABLERO][TAMANO_TABLERO]; // Tablero global

// Función para inicializar el tablero con barcos
void inicializarTablero(char tablero) {
    for (int i = 0; i < TAMANO_TABLERO; ++i) {
        for (int j = 0; j < TAMANO_TABLERO; ++j) {
            tablero[i][j] = ' ';
        }
    }
}

// Resto del código (funciones y main) se mantiene igual



// Función para mostrar el tablero
void mostrarTablero(char tablero[TAMANO_TABLERO][TAMANO_TABLERO]) {
    for (int i = 0; i < TAMANO_TABLERO; ++i) {
        for (int j = 0; j < TAMANO_TABLERO; ++j) {
            cout << tablero[i][j] << ' ';
        }
        cout << endl;
    }
}

// Función para verificar si una ubicación es válida en el tablero
bool esUbicacionValida(Ubicacion ubicacion) {
    return (ubicacion.fila >= 0 && ubicacion.fila < TAMANO_TABLERO &&
            ubicacion.columna >= 0 && ubicacion.columna < TAMANO_TABLERO);
}

// Función para verificar si una ubicación tiene un barco
bool tieneBarco(char tablero[TAMANO_TABLERO][TAMANO_TABLERO], Ubicacion ubicacion) {
    return tablero[ubicacion.fila][ubicacion.columna] == 'B';
}

// Función para que un jugador coloque sus barcos en el tablero
void ubicarBarcos(char tablero[TAMANO_TABLERO][TAMANO_TABLERO]) {
    cout << "Coloca tus 10 barcos en el tablero (fila y columna):" << endl;
    for (int i = 0; i < NUM_BARCOS; ++i) {
        Ubicacion ubicacion;
        do {
            cout << "Barco " << i + 1 << ": ";
            cin >> ubicacion.fila >> ubicacion.columna;
        } while (!esUbicacionValida(ubicacion) || tieneBarco(tablero, ubicacion));
        tablero[ubicacion.fila][ubicacion.columna] = 'B';
    }
}

// Función para iniciar la partida
void iniciarPartida(Jugador jugadores[MAX_JUGADORES], int& numJugadores) {
    char tablero[TAMANO_TABLERO][TAMANO_TABLERO];
    inicializarTablero(tablero);

    string nombreJugador;
    int turno = 0;

    cout << "Ingrese el nombre del jugador (o 'zzz' para terminar): ";
    cin >> nombreJugador;

    while (nombreJugador != "zzz" && numJugadores < MAX_JUGADORES) {
        Jugador jugador;
        jugador.nombre = nombreJugador;
        jugador.puntaje = 0;
        jugadores[numJugadores] = jugador;
        ++numJugadores;

        cout << "Turno de " << nombreJugador << ":" << endl;
        mostrarTablero(tablero);

        for (int i = 0; i < 5; ++i) {
            Ubicacion ubicacion;
            do {
                cout << "Intento " << i + 1 << ": ";
                cin >> ubicacion.fila >> ubicacion.columna;
            } while (!esUbicacionValida(ubicacion));

            if (tieneBarco(tablero, ubicacion)) {
                cout << "¡Barco encontrado!" << endl;
                ++jugadores[turno].puntaje;
                tablero[ubicacion.fila][ubicacion.columna] = 'X';
            } else {
                cout << "Agua." << endl;
            }
        }

        cout << "Puntaje de " << nombreJugador << ": " << jugadores[turno].puntaje << endl;
        ++turno;

        if (turno == numJugadores) {
            turno = 0;
        }

        cout << "Ingrese el nombre del siguiente jugador (o 'zzz' para terminar): ";
        cin >> nombreJugador;
    }
}

// Función para generar el reporte de puntajes
void generarReporte(Jugador jugadores[MAX_JUGADORES], int numJugadores) {
    cout << "Reporte de puntajes:" << endl;
    for (int i = 0; i < numJugadores; ++i) {
        cout << jugadores[i].nombre << ": " << jugadores[i].puntaje << " puntos" << endl;
    }
}

// Función para encontrar al ganador
void encontrarGanador(Jugador jugadores[MAX_JUGADORES], int numJugadores) {
    int maxPuntaje = -1;
    string ganador;

    for (int i = 0; i < numJugadores; ++i) {
        if (jugadores[i].puntaje > maxPuntaje) {
            maxPuntaje = jugadores[i].puntaje;
            ganador = jugadores[i].nombre;
        }
    }

    cout << "Felicitaciones " << ganador << ", obtuviste " << maxPuntaje << " puntos. ¡Sos el ganador!" << endl;
}











int main() {
    Jugador jugadores[MAX_JUGADORES];
    int numJugadores = 0;
    int opcion;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Inicializar tablero y ubicar barcos" << endl;
        cout << "2. Iniciar partida" << endl;
        cout << "3. Generar reporte de puntajes" << endl;
        cout << "4. Encontrar al ganador" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                char tablero[TAMANO_TABLERO][TAMANO_TABLERO];
                inicializarTablero(tablero);
                ubicarBarcos(tablero);
                cout << "Tablero inicializado y barcos ubicados." << endl;
                break;
            case 2:
                if (numJugadores == 0) {
                    cout << "Primero debe inicializar el tablero y ubicar los barcos." << endl;
                } else {
                    iniciarPartida(jugadores, numJugadores);
                }
                break;
            case 3:
                if (numJugadores == 0) {
                    cout << "No hay jugadores registrados." << endl;
                } else {
                    generarReporte(jugadores, numJugadores);
                }
                break;
            case 4:
                if (numJugadores == 0) {
                    cout << "No hay jugadores registrados." << endl;
                } else {
                    encontrarGanador(jugadores, numJugadores);
                }
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}


