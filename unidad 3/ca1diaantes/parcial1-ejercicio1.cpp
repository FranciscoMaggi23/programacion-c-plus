//este es el original:

//void eliminar(int arreglo[], int dl, int eliminar){
//	for(int i=0; i<dl; i++){
//		if(arreglo[i]!=eliminar){
//			for(int j=i; j<dl-1; j++){
//				arreglo[j]=arreglo[j+1];
//			}
//			break;
//		}
//	}
//	dl--;
//	return dl;
//}
//
//int main(){
//	int arreglo[10]={34,6,7,8,7,7,99,4,1,12};
//	int dl=10;
//	eliminar(arreglo, dl, 7);
//}

#include<iostream>
using namespace std;

void imprimir(int arreglo[], int dl){
	for(int i=0; i<dl;i++){
		cout<<arreglo[i]<<endl;
	}
}

void eliminar(int arreglo[], int &dl, int eliminar){
//	de esta forma elimina la primer ocurrencia
	for(int i=0; i<dl; i++){
		if(arreglo[i]==eliminar){
			for(int j=i; j<dl-1; j++){
				arreglo[j]=arreglo[j+1];
			}
			dl--;
			break;
		}
	}
}

int main(){
	int arreglo[10]={34,6,7,8,7,7,99,4,1,12};
	int dl=10;
	eliminar(arreglo, dl, 7);
	imprimir(arreglo,dl);
	return 0;
}

//de esta forma elimina todas las ocurrencias

//	int i = 0;
//	while (i < dl){
//		if(arreglo[i] == eliminar){
//		 	for (int j = i; j < dl-1; j++){
//		 		arreglo[j] = arreglo[j+1];
//			 }
//			 dl--;
//		}else{
//			i++;
//		}
//	} 
