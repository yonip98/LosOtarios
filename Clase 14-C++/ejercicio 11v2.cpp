// Este codigo ha sido generado por el modulo psexport 20180802-l32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	string opc;
	float p;
	string s;
	cout << "Ingrese alguna de las siguientes opciones" << endl;
	cout << "" << endl;
	cout << "1. suma" << endl;
	cout << "2. resta" << endl;
	cout << "3. multiplicacion" << endl;
	cout << "4. division" << endl;
	cout << "S. salir" << endl;
	cin >> opc;
	do {
		switch (opc) {
		case "1":
			cout << "ingrese el primer valor" << endl;
			cin >> a;
			cout << "ingrese el segundo valor" << endl;
			cin >> b;
			p = a+b;
			cout << "el resultado de la suma es: " << p << endl;
			cout << "" << endl;
			cout << "si desea continuar ingrese otra opcion" << endl;
			cout << "de lo contrario presione (s) " << endl;
			cout << "" << endl;
			cout << "1. suma" << endl;
			cout << "2. resta" << endl;
			cout << "3. multiplicacion" << endl;
			cout << "4. division" << endl;
			cout << "S. salir" << endl;
			cin >> opc;
			break;
		case "2":
			cout << "ingrese el primer valor" << endl;
			cin >> a;
			cout << "ingrese el segundo valor" << endl;
			cin >> b;
			p = a-b;
			cout << "el resultado de la resta es: " << p << endl;
			cout << "" << endl;
			cout << "si desea continuar ingrese otra opcion" << endl;
			cout << "de lo contrario presione (s) " << endl;
			cout << "" << endl;
			cout << "1. suma" << endl;
			cout << "2. resta" << endl;
			cout << "3. multiplicacion" << endl;
			cout << "4. division" << endl;
			cout << "S. salir" << endl;
			cin >> opc;
			break;
		case "3":
			cout << "ingrese el primer valor" << endl;
			cin >> a;
			cout << "ingrese el segundo valor" << endl;
			cin >> b;
			p = a*b;
			cout << "el resultado de la multiplicacion: " << p << endl;
			cout << "" << endl;
			cout << "si desea continuar ingrese otra opcion" << endl;
			cout << "de lo contrario presione (s) " << endl;
			cout << "" << endl;
			cout << "1. suma" << endl;
			cout << "2. resta" << endl;
			cout << "3. multiplicacion" << endl;
			cout << "4. division" << endl;
			cout << "S. salir" << endl;
			cin >> opc;
			break;
		case "4":
			cout << "ingrese el primer valor" << endl;
			cin >> a;
			cout << "ingrese el segundo valor" << endl;
			cin >> b;
			while (b<=0) {
				cout << "ingrese el denominador nuevamente" << endl;
				cin >> b;
			}
			p = a/b;
			cout << "el resultado de la division es: " << p << endl;
			cout << "" << endl;
			cout << "si desea continuar ingrese otra opcion" << endl;
			cout << "de lo contrario presione (s) " << endl;
			cout << "" << endl;
			cout << "1. suma" << endl;
			cout << "2. resta" << endl;
			cout << "3. multiplicacion" << endl;
			cout << "4. division" << endl;
			cout << "S. salir" << endl;
			cin >> opc;
			break;
		}
	} while (opc!="s");
	return 0;
}

