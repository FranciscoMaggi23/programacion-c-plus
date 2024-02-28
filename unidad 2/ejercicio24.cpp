//Ejercicio 24.
//Implementar un programa que almacene en un arreglo est�tico los datos de los ciudadanos que solicitaron un
//certificado de antecedentes en el Registro Nacional de las Personas. De cada ciudadano se conoce: nombre y
//apellido, fecha de nacimiento (tipo long: formato AAAAMMDD), direcci�n, n�mero de documento, tipo de
//documento (tipo int: 1 -DNI-, 2 -Pasaporte-, 3 -Otro-) y sexo (tipo char: 'M', 'F').
//a) Hacer un m�dulo de carga del arreglo, utilizando una condici�n de corte adecuada. Se debe validar el
//tipo de documento (1, 2 � 3) y dejar al usuario en un bucle mientras ingrese un n�mero inv�lido.
//b) Imprimir el listado, con el siguiente formato de ejemplo:
//Nombre y apellido: Juan Perez
//Direcci�n: Levalle 132
//Fecha de nacimiento: 27/10/1979
//Tipo de documento: DNI
//N�mero de documento: 27439221
//Sexo: masculino
//- La fecha debe mostrarse en formato dd/mm/aa. El tipo de documento debe mostrarse con su
//nombre. El g�nero debe mostrar la palabra completa.
//c) Implementar un m�dulo que, dado el arreglo original, cargue en otro arreglo los ciudadanos de sexo
//masculino �nicamente. Imprimir este nuevo arreglo.
//d) Hacer lo mismo que en el punto anterior pero obteniendo s�lo las mujeres. Modularizar para no repetir
//c�digo.

#include<iostream>
using namespace std;


struct registroNacional{
	string nombreYapellido;
	long fecha;
	string direccion;
	int dni;
	int tipoDeDocumento;
	char sexo;
};


void cargarArreglo(registroNacional arregloCiudadanos[], int & x, int & maxciudadanos){
	
	char continuar = 'S';
	
	while (x < maxciudadanos && (continuar == 'S' || continuar == 's') ){
	cout<<"ingrese su nombre y apellido: "<<endl;
	cin.ignore();
	getline(cin>>ws,arregloCiudadanos[x].nombreYapellido);	
	
	
	bool fechaValida = false;
	
	//comprobacion de dato correcto de fecha
	while(!fechaValida){
	
	cout<<"ingrese su fecha de nacimiento formato (AAAAMMDD): "<<endl;
	cin>>arregloCiudadanos[x].fecha;
	if (cin.fail()) { //importante esta funcion
        cin.clear(); //importante
        cin.ignore(); //importante
        cout << " Error: Ingrese una fecha de nacimiento v�lida (formato AAAAMMDD)." << endl;
    } else {
        fechaValida = true;
    }
	}
	//fin de la comprobacion
	
	cout<<"ingrese su direccion: "<<endl;
	cin.ignore();
	getline(cin,arregloCiudadanos[x].direccion);
	
	
	cout<<"ingrese su numero de documento: "<<endl;
	cin>>arregloCiudadanos[x].dni;
	
	do{
	cout<<"ingrese tipo de documento  (1 -DNI-, 2 -Pasaporte-, 3 -Otro-) : "<<endl;
	cin>>arregloCiudadanos[x].tipoDeDocumento;
	}while(arregloCiudadanos[x].tipoDeDocumento<1 or arregloCiudadanos[x].tipoDeDocumento>3);
	
	cout<<"ingrese su sexo (tipo char: 'M', 'F'): "<<endl;
	cin>>arregloCiudadanos[x].sexo;
		
	x++;

    cout << "�Desea ingresar otro ciudadano? (S/N): ";
    cin >> continuar;
	}
	
	
		
}

//imprimir funcion
void imprimirCiudadanos(registroNacional arreglo[], int numciudadanos){
	for(int i=0; i<numciudadanos; i++){
		cout << "Nombre y Apellido: " <<arreglo[i].nombreYapellido << endl;
    cout << "Fecha de Nacimiento: " <<arreglo[i].fecha % 100 << "/"  //20010312 -> 12
         << ((arreglo[i].fecha / 100) % 100) << "/" //20010312 -> 200103 -> 03
         << (arreglo[i].fecha / 10000) << endl; //20010312 -> 2001
    cout << "Direcci�n: " << arreglo[i].direccion << endl;
    cout << "Tipo de Documento: ";
    switch (arreglo[i].tipoDeDocumento) {
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
    cout << "N�mero de Documento: " << arreglo[i].dni << endl;
    cout << "Sexo: ";
    if (arreglo[i].sexo == 'M' || arreglo[i].sexo == 'm') {
        cout << "masculino";
    } else if (arreglo[i].sexo == 'F' || arreglo[i].sexo== 'f') {
        cout << "femenino";
    }
    cout << endl;
	}
}
//fin de la fincion imprimir

//inicio de la funcin cargar ciudadanos masculinos
void mostrarCiudadanosPorSexo(registroNacional arregloTotal[],registroNacional arregloM[] , registroNacional arregloF[]  , int total){
	bool banderaM= true, banderaF=true;
	
	cout << "Ciudadanos de sexo(m/f):" << endl;

    for (int i = 0; i < total; i++) {
        if (arregloTotal[i].sexo == 'M' || arregloTotal[i].sexo == 'm') {
        	cout<<"entro al if masculino"<<endl;
        	arregloM[i] = arregloTotal[i];
        	banderaM=false;
        }
    }
    if(!banderaM){
    	imprimirCiudadanos(arregloM, total);	
    }
    cout << "   Ciudadanos de sexo femenino:" << endl;

    for (int i = 0; i < total; i++) {
        if (arregloTotal[i].sexo == 'F' || arregloTotal[i].sexo == 'f') {
	        cout<<"entro al if femenino"<<endl;
	        arregloF[i] = arregloTotal[i];
	        banderaF=false;
        }
    }
    if(!banderaF){
    	imprimirCiudadanos(arregloF, total);
        cout<<"entro al if bandera F"<<endl;
    }

}
//finde la funcion


int main(){
	int maxciudadanos=5, numciudadanos=0;
	registroNacional arregloCiudadanos[maxciudadanos], arregloMasculino[maxciudadanos], arregloFemenino[0];
	
	
	cargarArreglo(arregloCiudadanos,numciudadanos, maxciudadanos);
	imprimirCiudadanos(arregloCiudadanos, numciudadanos);
	

	cout<<numciudadanos<<endl;
    mostrarCiudadanosPorSexo(arregloCiudadanos,arregloMasculino,arregloFemenino,numciudadanos);
	
	
		
	return 0;
}

//revisar

//Si el usuario ingresa una letra u otro car�cter no num�rico, cin.fail() detectar� el error, 
//se limpiar� el estado de error con cin.clear(), y se ignorar� la entrada no v�lida con cin.ignore().





//    		cout << "Ciudadanos de sexo " << (sexoBuscado == 'M' ? "masculino" : "femenino") << ":" << endl;






	 // Contar cu�ntos ciudadanos masculinos hay
//    int numMasculinos = 0;
//    for (int i = 0; i < numciudadanos; i++) {
//        if (arregloCiudadanos[i].sexo == 'M' || arregloCiudadanos[i].sexo == 'm') {
//        	cout<<"estoy en el main"<<endl;
//            arregloMasculino[numMasculinos] = arregloCiudadanos[i];
//            numMasculinos++;
//        }
//        cout<<"numeros de masculinos"<<numMasculinos<<endl;
//    }
