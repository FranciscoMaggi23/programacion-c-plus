//Nota: analizar si es posible reutilizar c�digo en m�s de uno de los incisos.
//Ejercicio 27.
//En Jun�n se realizar� la ronda preliminar del mundial de tango y es necesario registrar informaci�n de los
//participantes de la categor�a de escenario. Escribir un programa que permita las siguientes operaciones:
//a) Cargar los datos de parejas participantes en un arreglo (m�ximo 40 parejas), ordenado por n�mero de
//inscripci�n. De cada pareja se almacenar�: n�mero de inscripci�n (int), nombre del integrante 1 (string),
//nombre del integrante 2 (string), nombre de la canci�n a usar en su presentaci�n (string).
//b) Cargar en otro arreglo (m�ximo 40 elementos) los datos de la m�sica que se utilizar� durante la
//competencia, almacenando de cada una: nombre de la canci�n (string), duraci�n (expresada en
//segundos) (int).
//- Para la carga de los nombres de canciones (en ambos arreglos) se debe almacenar la primera letra en
//may�scula y el resto en min�scula, independientemente de c�mo lo haya ingresado el usuario. Nota: la
//funci�n toupper(char) de C++ recibe un char y (si es una letra) lo retorna en may�scula, as� como la
//funci�n tolower(char) recibe un char y lo retorna en min�scula.
//c) Informar los n�meros de parejas (puede haber m�s de una) que utilizan la canci�n de mayor duraci�n.
//d) Dado el nombre de una canci�n, eliminarla del arreglo, s�lo si ninguna pareja la utiliza.
//e) Dado el n�mero de una pareja, indicar cu�nto dura la canci�n que utilizar�

#include<iostream>
using namespace std;


const int maxParejas=2, maxElementos=2;

struct Participantes{
	int NumInscripcion;
	string Integrante1;
	string Integrante2;
	string NombreCancion;

};
struct Musica{
	string NombreCancion;
	int Duracion;

};


//e) Dado el n�mero de una pareja, indicar cu�nto dura la canci�n que utilizar�
int duracion(Participantes arregloP[],Musica arregloM[],int dimlP,int  dimlM){
	int numPareja, duracion;
	
	cout<<"ingrese num p: ";
	cin>>numPareja;
	
	for(int i=0; i<dimlP; i++){
		if(arregloP[i].NumInscripcion==numPareja){
			for(int x=0; x<dimlM; x++){
				if(arregloP[i].NombreCancion == arregloM[x].NombreCancion){
					duracion= arregloM[x].Duracion;
					return duracion;
				}
			}
		}
	}
	
	
}




//d) Dado el nombre de una canci�n, eliminarla del arreglo, s�lo si ninguna pareja la utiliza.
void eliminarCancion(Participantes arregloP[],Musica arregloM[],int dimlP,int  dimlM){
	string cancionEliminar;
	int indice=0;
	bool enUso=false;
	cout<<"ingrese nombre de la canciion a eliminar: "<<endl;
	getline(cin>>ws,cancionEliminar);
	for(int i=0; i<dimlP; i++){
		if(arregloP[i].NombreCancion==cancionEliminar){
			enUso=true;
			indice=i;
			break;
		}
	}
	if(enUso){
		cout<<"la cancion esta en uso"<<endl;
	}else{
		cout<<"ingreso al for";
		for(int x=indice; x<dimlP-1; x++){
				arregloP[x]= arregloP[x+1];
			}
			dimlP--;
	}
}





//c) Informar los n�meros de parejas (puede haber m�s de una) que utilizan la canci�n de mayor duraci�n.
void cancionMayorDuracion(Participantes arregloP[],Musica arregloM[],int dimlP,int  dimlM){
	int registro=arregloM[0].Duracion;
	for(int i=0; i<dimlM; i++){
		if(arregloM[i].Duracion>registro){
			registro=arregloM[i].Duracion;
//			indice=i;
		}
	}
	for(int x=0; x<dimlP; x++){
		if(arregloM[x].Duracion==registro){
			cout<<"el nuero de inscripcion de la pareja es"<<arregloP[x].NumInscripcion;
		}
	}
//	for(int i=0; i<dimlP; i++){
//		for(int x=0 x<dimlM; x++){
//			if(arregloP[i].NombreCancion<arregloM[x].NombreCancion){
//				aux= arregloP[i+1].NombreCancion;
//			}
//		}
//	}
}
//fin




//- Para la carga de los nombres de canciones (en ambos arreglos) se debe almacenar la primera letra en
//may�scula y el resto en min�scula, independientemente de c�mo lo haya ingresado el usuario. Nota: la
//funci�n toupper(char) de C++ recibe un char y (si es una letra) lo retorna en may�scula, as� como la
//funci�n tolower(char) recibe un char y lo retorna en min�scula.

void MayusculaMin(Participantes arregloP[], Musica arregloM[], int & dimlP, int & dimlM){
	string aux, aux2;
	for(int i=0; i<dimlP; i++){
		aux=arregloP[i].NombreCancion;
		string resultado = "";
		for(int x=0; x<aux.length();x++){
			if(x==0){
				resultado=toupper(aux[0]);
			}else{
				resultado+=tolower(aux[x]);
			}
		}
		arregloP[i].NombreCancion = resultado;
		cout<<resultado<<endl;
	}
	//ahora para la cancion del struct musica
	for(int i=0; i<dimlM; i++){
		aux2=arregloM[i].NombreCancion;
		string resultado2 = "";
		for(int x=0; x<aux2.length();x++){
			if(x==0){
				resultado2=toupper(aux2[0]);
			}else{
				resultado2+=tolower(aux2[x]);
			}
		}
		arregloM[i].NombreCancion = resultado2;
		cout<<resultado2<<endl;
	}
}
//fin


//a) Cargar los datos de parejas participantes en un arreglo (m�ximo 40 parejas), ordenado por n�mero de
//inscripci�n. De cada pareja se almacenar�: n�mero de inscripci�n (int), nombre del integrante 1 (string),
//nombre del integrante 2 (string), nombre de la canci�n a usar en su presentaci�n (string).
//b) Cargar en otro arreglo (m�ximo 40 elementos) los datos de la m�sica que se utilizar� durante la
//competencia, almacenando de cada una: nombre de la canci�n (string), duraci�n (expresada en
//segundos) (int).
void cargarDatos(Participantes arregloP[], Musica arregloM[], int & dimlP, int & dimlM){
	
	while(dimlP<maxParejas){
		cout<<"ingrese numero de inscripcion: "<<endl;
		cin>>arregloP[dimlP].NumInscripcion;
		
		cout<<"ingrese nombre integrante 1: "<<endl;
		getline(cin>>ws,arregloP[dimlP].Integrante1);
		
		cout<<"ingrese nombre integrante 2: "<<endl;
		getline(cin>>ws,arregloP[dimlP].Integrante2);
		
		cout<<"ingrese nombre de la cancion: "<<endl;
		getline(cin>>ws,arregloP[dimlP].NombreCancion);
		
		dimlP++;
		}
									        
		while(dimlM<maxElementos){

		cout<<"ingrese nombre de la cancion: "<<endl;
		getline(cin>>ws,arregloM[dimlM].NombreCancion);
		
		cout<<"ingrese duracion: "<<endl;
		cin>>arregloM[dimlM].Duracion;
		
		dimlM++;               
	}
	
	MayusculaMin(arregloP, arregloM, dimlP,  dimlM);
}

//fin a y b


int main(){
	Participantes arregloParticipantes[maxParejas];
	Musica arregloMusica[maxElementos];
	int dimlP=0, dimlM=0 ,aux;
	
	
	cargarDatos(arregloParticipantes,arregloMusica,dimlP,dimlM);
	cancionMayorDuracion(arregloParticipantes,arregloMusica,dimlP,dimlM);
	eliminarCancion(arregloParticipantes,arregloMusica,dimlP,dimlM);
	aux= duracion(arregloParticipantes,arregloMusica,dimlP,dimlM);
	
	cout<<endl<<"duracion:"<<aux<<endl;
	
	
	return 0;
}



