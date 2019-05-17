#include <iostream>

using namespace std;
int main(){
	int b, a, c;
	
	cout<<"Ingrese el numero de la tabla que quieras saber: \n"<<endl;
	
	//inicia, hasta, con paso
	cin >> a;
	for (c=1; c<=10; c++){
		b = a * c;
		cout<<"2 x " <<c<<" = "<<b<<endl;
	}
	
	return 0;
}
