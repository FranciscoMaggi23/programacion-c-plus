//Ejercicio 16.
//Escribir un programa para ser utilizado en una ventanilla de venta de entradas de un pequeño teatro con
//capacidad para 50 personas. Las filas están identificadas de la 0 a la 4 y cada fila tiene asientos numerados de 1
//a 10. Se debe registrar, por cada asiento, si está libre o no. Al iniciar el programa, todos los asientos están libres.
//Cuando alguien desea comprar una entrada, se deben informar qué localidades están libres. Entonces el cliente
//deberá elegir su asiento (indicando fila y número de asiento) y éste se marcará como vendido. Si ya se
//vendieron todas las entradas, no se debe permitir elegir asiento.


#include<iostream>
using namespace std;


void ventaEntradas(int matriz[5][11]){
	int preguntar, fila, asiento, ventas;
	string comprar;
	
	cout<<"lugares disponibles"<<endl;
		
		for(int i=0; i<5;i++){
			for(int x=1; x<11;x++){
				cout<<"  disponible"<<"  ";
			
			}
			cout<<endl;
		}
		cout<<endl;
	
	while(preguntar<50){
		
		cout<<"desea comprar voleto(si/no)?: ";
		cin>>comprar;
		
		if(comprar== "si"){
		
			cout<<endl<<"ingrese fila: ";
			cin>>fila;
			cout<<"ingrse asiento: ";
			cin>>asiento;
			cout<<endl;
			if(fila<5 and asiento<11){
			
				if(matriz[fila][asiento]==0){
					matriz[fila][asiento]= 1;
				}else{
					cout<<"asiento ocupado, vuelva a iniciar el programa";
					break;
				}
				
				for(int i=0; i<5;i++){
					for(int x=1; x<11;x++){
						if(matriz[i][x]==0){
							cout<<"disponible"<<" ";
						}else{
							cout<<"  NO "<<" ";
							ventas++;
						}
					}
					cout<<endl;
				}
				preguntar++;
			}else{
				break;
			}
		}else{
			break;
		}
	}if(preguntar==50){
		cout<<endl<<"no mas voletos";
	}
}


int main(){
	int matriz[5][11]={0};
	ventaEntradas(matriz);
	
	return 0;
}

//ok

