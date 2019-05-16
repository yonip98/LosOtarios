#include <iostream>
using namespace std;

int main() {
	int a; int b; int c; int acu1; int acu2;
	acu1 = 0;
	acu2 = 0;
	
	cout << "Ingrese Numeros \n" << endl;
	cout << "Para calcular la suma de los pares e impares \n" << endl;
	cout << "Ingrese el numero final \n" << endl;
	cin >> b;
	for (c=1; c<=b; c++){
		cout << "Ingrese un valor" << endl;
		cin >> a;
		if (a%2==0)
			acu1 = acu1 + a;
		if (a%2!=0)
			acu2 = acu2 +a;
	}
	cout << "El resultado de la suma de los pares es: " << acu1 << endl;
	cout << "El resultado de la suma de los impares es: " << acu2 << endl;
	
	return 0;
}
