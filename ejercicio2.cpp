#include <iostream>
using namespace std;

int  main(){
	// literarl 1
	int mapa [3][4]=
	{{2,0,5,1},
	{3,8,0,4},
	{1,6,7,0}};
	// literal 2
	cout<<"===Mapa Original ==="<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<mapa[i][j]<<" ";
		}
		cout <<endl;
	}
	// literal 3
	mapa[0][2]=9;
	mapa[2][3]=3;
	
	cout<<"Modificador mapa [0][2]: "<<mapa[0][2]<<endl;
	cout<<"Modificador mapa [2][3]: "<<mapa[2][3]<<endl;	
	
	//literal 4
	for(int i=0;i<3;i++){
		int Promedio=0;
		int Suma=0;
		for(int j=0;j<4;j++){
			Suma=Suma+mapa[i][j];
		}
		Promedio=Suma/4;
		cout<<"Fila "<<i<<": "<<Promedio<<endl;
	}
	
	// literal 5
	int Valor_Maximo=mapa[0][0];
	int posicion_i=0;
	int posicion_j=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(mapa[i][j]>Valor_Maximo){
				Valor_Maximo=mapa[i][j];
				posicion_i=i;
				posicion_j=j;
			}
		}
}
	cout<<"Valor Maximo:"<<Valor_Maximo<<" en posicion["<<posicion_i<<"]["<<posicion_j<<"]"<<endl;
	//literal 6
	
	cout<<"====Mapa Actualizado===="<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	cout<<mapa[i][j]<<" ";
		}
	cout <<endl;
	}
	return 0;
}