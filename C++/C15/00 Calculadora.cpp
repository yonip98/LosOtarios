#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) 
{
	int a; int b; int p;
	char opc;
	float r; float i;
	
	//Falta poner que repita para que la opción S tenga sentido
	
	cout << "Elija una de estas opciones \n" << endl;
	cout << "Opcion 1.-Suma" << endl;
	cout << "Opcion 2.-Resta" << endl;
	cout << "Opcion 3.-Multiplicacion" << endl;
	cout << "Opcion 4.-Division" << endl;
	cout << "Opcion 5.-Raiz cuadrada" << endl;
	cout << "Opcion 6.-Potencia" << endl;
	cout << "Opcion S.-Salir" << endl;
	
	cin >> opc;
		
		switch (opc) {
			case '1':{
				cout << "ingrese el primer valor" << endl;
				cin >> a;
				cout << "ingrese el segundo valor" << endl;
				cin >> b;
				p = a+b;
				cout << "el resultado de la suma es: " << p << endl;
				cout << "" << endl;
				break;
			}
			case '2':
				{cout << "Ingrese el primer valor" << endl;
				cin >> a;
				cout << "Ingrese el segundo valor" << endl;
				cin >> b;
				p = a-b;
				cout << "el resultado de la resta es: " << p << endl;
				cout << "" << endl;
				break;
			}
			case '3':
				{cout << "Ingrese el primer valor" << endl;
				cin >> a;
				cout << "Ingrese el segundo valor" << endl;
				cin >> b;
				p = a*b;
				cout << "el resultado de la multiplicacion es: " << p << endl;
				cout << "" << endl;
				break;
			}
			case '4':
				{cout << "Ingrese el primer valor" << endl;
				cin >> a;
				cout << "Ingrese el segundo valor" << endl;
				cin >> b;
				p = a/b;
				cout << "el resultado de la division es: " << p << endl;
				cout << "" << endl;
				break;
			}
			case '5':
				{cout << "Ingrese el valor" << endl;
				cin >> i;
				r = sqrt (i);	
				cout << "el resultado de la raiz es: " << r << endl;
				cout << "" << endl;
				break;
			}
			case '6':	
				{cout << "Ingrese el valor de la base" << endl;
				cin >> a;
				cout << "Ingrese el exponente" << endl;
				cin >> b;
				p = pow(a,b);
				cout << "el resultado de la raiz es: " << p << endl;
				cout << "" << endl;
				break;
			}
			case 'S':
				cout << "Gracias" << endl;
		}
	return 0;
}
