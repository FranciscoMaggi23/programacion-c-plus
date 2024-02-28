//Ejercicio 22.
//Realizar un programa que almacene en un arreglo la lista de invitados a una fiesta. El sal�n donde se realizar�
//tiene capacidad m�xima para 150 personas.
//De cada invitado se conoce nombre, apellido, sexo y edad. Se ingresar�n datos hasta que el nombre sea igual a
//�ZZZ� o hasta que la capacidad del sal�n est� completa.
//Una vez finalizada la carga:
//a) Informar la cantidad de invitados que asistir�n a la fiesta.
//b) Realizar una funci�n que liste los nombres de las mujeres cuya edad sea <= 20.
//c) Realizar una funci�n que, dado un apellido y nombre, permita eliminar un invitado en caso de no poder
//asistir.


#include<iostream>
using namespace std;


struct Invitados{
	string nombre;
	string apellido;
	string sexo;
	int edad;
};


void edadMujeres(Invitados mujeresArreglo[], int x){  //  string nombre, string sexo, int edad
	for (int i =0; i<x; i++){
		if(mujeresArreglo[i].edad<=20 && mujeresArreglo[i].sexo=="mujer"){ 
				cout<<mujeresArreglo[i].nombre<<" es menor de 21"<<endl;
		}
	}
}

void cargarInvitados(Invitados arreglo[], int& i){
	string z="ZZZ";
		
	while(i<2){
		cout<<"ingrese nombre: "<<endl;
		cin>>arreglo[i].nombre;
		
		if(arreglo[i].nombre != z){
	
			cout<<"ingrese apellido: "<<endl;
			cin>>arreglo[i].apellido;
			
			cout<<"ingrese sexo(mujer/hombre): "<<endl;
			cin>>arreglo[i].sexo;
			
			cout<<"ingrese edad: "<<endl;
			cin>>arreglo[i].edad;
			
			i++;
		
		}else{
			break;
		}
	}
		cout<<"la cantidad de invitados es: "<<i<<endl;
}


void eliminarInvitado(Invitados arreglo[], int& i, const string& nombre, const string& apellido) {
    int incremento = 0;

    while (incremento < i) {
        if (arreglo[incremento].nombre == nombre && arreglo[incremento].apellido == apellido) {
            // Desplazar los invitados restantes para llenar el espacio eliminado
            for (int x = incremento; x < i - 1; x++) {
                arreglo[x] = arreglo[x + 1];
            }
            i--; // Actualiza la cantidad de invitados despu�s de eliminar uno
            cout << "Invitado eliminado: " << nombre << " " << apellido << endl;
            return; // Salir de la funci�n despu�s de eliminar
        }
        incremento++;
    }

    cout << "No se encontr� al invitado con nombre " << nombre << " y apellido " << apellido << endl;
}



int main(){
	const int capacidadMax= 2;
	int i=0;
	Invitados arregloInvitados[capacidadMax];
	

	cargarInvitados(arregloInvitados, i);
	
	edadMujeres(arregloInvitados, i );
	
	string eliminarNombre, eliminarApellido;
	
	cout<<"ingrese el nombre de la persona a eliminar"<<endl;
	cin>>eliminarNombre;
	
	cout<<"ingrese el apellido de la persona a eliminar"<<endl;
	cin>>eliminarApellido;
	
	eliminarInvitado(arregloInvitados, i,eliminarNombre,eliminarApellido );
	
	
	for(int s=0; s<i; s++){
		cout<<arregloInvitados[s].nombre;
	}

	return 0;
}


//terminado


