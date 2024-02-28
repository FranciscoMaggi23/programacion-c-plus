//Ejercicio 11.
//Escribir un programa que permita al usuario ingresar números enteros positivos (los números ingresados no
//deben almacenarse). Al finalizar, informar la cantidad de veces que apareció cada dígito (del 0 al 9) en todos los
//números.
//Ejemplo: Si el usuario ingresa los números 1156, 23, 73364, 988, 1003, 5, se debe informar que el 0 apareció 2
//veces, el 1 apareció 3 veces, el 2 apareció 1 vez, el 3 apareció 4 veces, etc.



#include <iostream>

int main() {
    int digitCount[10] = {0}; // Inicializamos un arreglo para contar los dígitos del 0 al 9

    int num;
    std::cout << "Ingrese números enteros positivos (ingrese un número negativo para finalizar):\n";

    while (true) {
        std::cin >> num;

        if (num < 0) {
            break; // Salimos del bucle si el número ingresado es negativo
        }
        if(num==0){
        	digitCount[0]++;
        }

        // Contamos los dígitos en el número ingresado
        while (num > 0) {
            int digito = num % 10;
            digitCount[digito]++;
            num /= 10;
        }
        
    }

    // Mostramos la cantidad de veces que apareció cada dígito
    std::cout << "Cantidad de veces que apareció cada dígito:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Dígito " << i << ": " << digitCount[i] << " veces\n";
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
//	    cout << "Ingrese un número positivo (o 0 para salir): ";
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








