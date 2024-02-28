/******************************************************************************
Se necesita un programa que permita reservar butacas en el cine y, adem�s, que se pueda obtener el precio correspondiente. Se reserva una butaca cada vez. 
Adem�s, al final de cada funci�n, se quiere obtener un reporte del estado de ocupaci�n de las mismas.
Escribir un programa en que se se almacena de alguna manera cada butaca con el color y se indique si est� o no ocupada.
Tambi�n debe contener las siguientes funciones:
una para vender una entrada, siempre que no est� vendida;
otra para obtener un reporte del estado de ocupaci�n de las mismas.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

const int FILAS = 5;
const int COLUMNAS = 10;

struct Entrada {
    string color;
    bool vendida=false;
};

// Funci�n para vender una entrada si no est� vendida
void venderEntrada(Entrada matriz[FILAS][COLUMNAS], int fila, int columna) {
    //cout << "reci�n entro a la funci�n valro de la fila " << fila << ", y de la columna " << columna << " .\n";
    fila--;
    columna--;
    //cout << "luego de decrementar valro de la fila " << fila << ", y de la columna " << columna << " .\n";
    if (fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS) {
        if (matriz[fila][columna].vendida==false) {
            matriz[fila][columna].vendida = true;
            //cout << "entes de verificar en la matriz valor de la fila " << fila << ", y de la columna " << columna << " .\n";
            if (matriz[fila][columna].color=="verde") {
                cout << "La entrada tiene un valor de $ 100 \n";
                
            } else {
                if (matriz[fila][columna].color=="celeste") {
                    cout << "La entrada tiene un valor de $ 150 \n";
                    }
                else {
                    cout << "La entrada tiene un valor de $ 250 \n";
                }
            }
            fila++;
            columna++;
            cout << "Entrada en fila " << fila << ", columna " << columna << " vendida.\n";
            
        }
         else {
            fila++;
            columna++;
            cout << "Entrada en fila " << fila << ", columna " << columna << " ocupada.\n";
        
    } }else {
        cout << "Ubicaci�n de entrada inv�lida.\n";
    }}

// Funci�n para obtener un reporte del estado de ocupaci�n
void obtenerReporte(const Entrada matriz[FILAS][COLUMNAS]) {
    cout << "Reporte de estado de ocupacion:\n";
    for (int i = 0; i < FILAS; ++i) {
        int ff=i + 1;
        cout << "FILA " << ff<<":\n";
        for (int j = 0; j < COLUMNAS; ++j) {
            int cc=j + 1;
            cout << " - ";
            if (matriz[i][j].vendida) {
                cout << "Vendida ";
            } else {
                cout << "Disponible ";
            }
            
        }
        cout << "\n";
    }
}

void mostrarColores(const Entrada matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        cout << "FILA " << i+1 << ":";
        for (int j = 0; j < COLUMNAS; ++j) {
            cout <<matriz[i][j].color<< " - ";
            }
            
        cout <<"\n";
        
    }
        }



void inicializarEntradas(Entrada entradas [FILAS][COLUMNAS]) {
        for (int fila = 0; fila < 3; fila++) {
            entradas[fila][0].color="verde";
            entradas[fila][1].color="celeste";
            for (int columna = 2; columna < 8; columna++) {
                entradas[fila][columna].color="violeta";        }
            entradas[fila][8].color="celeste";
            entradas[fila][9].color="verde";}
        
        for (int fila = 2; fila < 4; fila++) {
            entradas[fila][0].color="verde";
            for (int columna = 1; columna < 9; columna++) {
                entradas[fila][columna].color="celeste";        }
            entradas[fila][9].color="verde";}
        
        for (int columna = 0; columna < 10; columna++) {
            entradas[4][columna].color="verde";            }
        
    }
int main() {
    // Inicializar la matriz de entradas
    Entrada matrizEntradas[FILAS][COLUMNAS];
    inicializarEntradas(matrizEntradas);
    // Vender algunas entradas
    venderEntrada(matrizEntradas, 1, 9);
    venderEntrada(matrizEntradas, 2, 5);
    venderEntrada(matrizEntradas, 4, 4);
    venderEntrada(matrizEntradas, 1, 9);  // Intentar vender una entrada ya vendida
    // Solicitarle al usuario los datos de una entreda a comprar
    cout << "Ingrese la fila  de la entrada a comprar: \n";
    int ff, cc;
    cin>>ff;
    cout << "Ingrese la columna de la entrada a comprar: \n";
    cin>>cc;
    venderEntrada(matrizEntradas, ff, cc);  
    // Mostrar los colores de las entradas
    mostrarColores(matrizEntradas);
    // Obtener un reporte del estado de ocupaci�n
    obtenerReporte(matrizEntradas);
    return 0;
}



