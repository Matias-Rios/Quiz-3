#include <iostream>
#include <iomanip>

using namespace std;

int  main(){
	int inventario [7]={3,0,7,2,5,1,4}; //Literal 1

    cout<<"====INVENTARIO ORIGINAL===="<<endl;

	for(int i=0;i<7;i++){    //literal 2
		cout<<"inventario["<<i<<"] = "<<inventario[i]<<endl;
	}
	//Literal 3
	int objetoElejido= inventario[4];
	cout<<"Objeto elejido (posicion 4): "<<objetoElejido<<endl;
	
	 //literal 4 
	inventario [1]=10;
	inventario [5]=0;
	
	//literal 5
	int Suma_total=0;
	for(int i=0;i<7;i++){
		Suma_total=Suma_total+inventario[i];
	}
	cout<<"Suma: "<<Suma_total<<endl;
	
	//literal 6
	int Valor_Maximo=0;
	int Valor_Minimo=0;
	for(int i=0;i<7;i++){
		if(i==0){
			Valor_Maximo=inventario[i];
			Valor_Minimo=inventario[i];
		}
		if(inventario[i]>Valor_Maximo){
			Valor_Maximo=inventario[i];
		}
		if(inventario[i]<Valor_Minimo){
			Valor_Minimo=inventario[0];
		}
	
	cout<<"Valor Maximo: "<<Valor_Maximo;
	cout<<"Valor Minimo: "<<Valor_Minimo;
	}
}