#include <iostream>
using namespace std;

int main() {
	int ejercicio [5];
	int i;
	//Para probar se recomienda cambiar el valor "i<30" en ambos casos
	for(i=0;i<30;i++){
	cout<<"Introduzca un valor del vector: ";
	cin>>ejercicio[i];
	}
	i=0;
	//Para probar se recomienda cambiar el valor "i<30" en ambos casos
	for (i=0; i<30; i++){
		ejercicio[i]=(ejercicio[i])*2;
		cout<<"El valor almacenado en la posicion "<< i << " del vector ahora es "<< ejercicio[i]<<endl;
	}
	return 0;
}
