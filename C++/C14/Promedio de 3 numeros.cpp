#include <iostream>
using namespace std;

int main() {
	float a; float b; float c; float p;
	
	cout << "Se va a realizar el promedio de 3 valores ingresados \n" << endl;
	cout << "Ingrese el primer valor \n" << endl;
	cin >> a;
	cout << "" << endl;
	cout << "Ingrese el segundo valor \n" << endl;
	cin >> b;
	cout << "" << endl;
	cout << "Ingrese el tercer y ultimo valor \n" << endl;
	cout << "" << endl;
	cin >> c;
	p = (a+b+c)/3;
	
	cout << "Procesando \n" << endl;
	cout << "... \n" << endl;
	
	cout << "Los numeros ingresados fueron \n" << endl;
	cout << ":" << a << endl;
	cout << ":" << b << endl;
	cout << ":" << c << endl;
	cout << "Y el promedio es \n" << p << endl;

	
	
	
	
	return 0;
	
	
}

