#include<iostream>
//Ejercicio 7
using namespace std;

int main (){
	int i;
	int VEC[4];
	for (i=0;i<4;i++){
		cout<<"Introduzca un valor: ";
		cin>>VEC[i];
	}
		if (VEC[0]<VEC[1] && VEC[1]<VEC[2] && VEC[2]<VEC[3] && VEC[3]>VEC[2])
			cout<<"Lo numeros corresponden a una secuencia ascendente";
		else
			cout<<"Los numeros no corresponden a una secuencia ascendente";
}
