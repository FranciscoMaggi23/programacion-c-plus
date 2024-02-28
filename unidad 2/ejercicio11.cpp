//Ejercicio 11.
//Escribir un programa que permita al usuario ingresar n�meros enteros positivos (los n�meros ingresados no
//deben almacenarse). Al finalizar, informar la cantidad de veces que apareci� cada d�gito (del 0 al 9) en todos los
//n�meros.
//Ejemplo: Si el usuario ingresa los n�meros 1156, 23, 73364, 988, 1003, 5, se debe informar que el 0 apareci� 2
//veces, el 1 apareci� 3 veces, el 2 apareci� 1 vez, el 3 apareci� 4 veces, etc.



#include <iostream>

int main() {
    int digitCount[10] = {0}; // Inicializamos un arreglo para contar los d�gitos del 0 al 9

    int num;
    std::cout << "Ingrese n�meros enteros positivos (ingrese un n�mero negativo para finalizar):\n";

    while (true) {
        std::cin >> num;

        if (num < 0) {
            break; // Salimos del bucle si el n�mero ingresado es negativo
        }
        if(num==0){
        	digitCount[0]++;
        }

        // Contamos los d�gitos en el n�mero ingresado
        while (num > 0) {
            int digito = num % 10;
            digitCount[digito]++;
            num /= 10;
        }
        
    }

    // Mostramos la cantidad de veces que apareci� cada d�gito
    std::cout << "Cantidad de veces que apareci� cada d�gito:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "D�gito " << i << ": " << digitCount[i] << " veces\n";
    }

    return 0;
}








//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	int dimL=10, arreglo[]={0,0,0,0,0,0,0,0,0,0}, n, resto;
//	
//	do {
//        cout << "Ingrese numwros positivo (o un negativo para salir): ";
//        cin >> n;	
//	    while(n>0){
//	    	 if(n==0){
//		    	arreglo[0]++;
//		    }
//			resto = n%10;
//			if(resto==0){
//		    	arreglo[0]++;
//		    }else{
//				arreglo[resto]++;
//			}
//		    n=n/10;
//		   
//	    }
//	    cout << "Ingrese un n�mero positivo (o 0 para salir): ";
//        cin >> n;
//	}while (n > 0);
//
//	arreglo[1]--;
//	
//	for(int e=0; e<dimL; e++){
//		cout<<arreglo[e]<<endl;
//	}
//	return 0;
//}








