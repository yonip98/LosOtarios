#include<iostream>
using namespace std;

int main() {
	int f;
	int m;
	int n;
	// En este programa se utiliza una secuencia "según" para calcular un 
	// factorial en caso de que el número N sea distinto de 0 y de 1
	cout << "Ingrese el número al que desea resolver el factorial" << endl;
	cin >> n;
	switch (n) {
	case 0:
		f = 0;
		break;
	case 1:
		f = 1;
		// En este caso se asignan dos variables M y F (de factorial) 
		break;
	default:
		m = 1;
		f = 1;
		do {
			f = f*(m+1);
			m = m+1;
		} while (m<n);
		// Se repetirá la secuencia n-1 cantidad de veces
		// Ejemplo: n=5 se repite hasta m=4 pero como realiza un paso más,
		// multiplica f * m + 1 (que es igual a N) y cancela m = n.
	}
	cout << "El factorial de " << n << "! es igual a " << f << endl;
	return 0;
}

