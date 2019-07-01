#include <iostream>
using namespace std;

int main() {
	int a; int b; int c;
	
	cout << " Ingrese Dos valores \n" << endl;
	cout << " Por favor ingrese el primer valor \n" << endl;
	cin >> a;
	cout << " Ahora Ingrese el segundo valor \n" << endl;
	cin >> b;
	
	{
	if (a<b)
	cout << " Intervalo correcto \n" << endl;
	}
	
	{
	if (a==b)
	cout << " No existe intervalo \n" << endl;
	}
	
	
	if (a>b){
		cout << " Intervalo incorrecto \n" << endl;
		c=a;
		a=b;
		b=c;
		cout << " valor de (a) ahora: " << a << endl;
		cout << " valor de (b) ahora: " << b << endl;
	}
	
	
	return 0;
}

