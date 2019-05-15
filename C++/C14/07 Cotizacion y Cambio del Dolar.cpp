#include <iostream>
using namespace std;

int main() {

	float d; float pa; float pd;

	cout << "Cambio de Dolares a Pesos Argentinos \n" << endl;
	cout << "" << endl;
	cout << "Ingrese el precio del Dolar \n" << endl;
	cin >> pd;
	cout << "" << endl;
	cout << "Cuantos Dolares quiere cambiar a pesos argentinos \n" << endl;
	cout << "" << endl;
	cin >> d;

	pa = pd*d;
	cout << "" << endl;
	cout << "La cantidad de Dolares que ingreso se cambio a pesos argentinos" << endl;
	cout << "a lo que seria un monto de: \n" << endl;
	cout << "$" << pa << ".-Pesos Argentinos \n" << endl;


	return 0;
}
