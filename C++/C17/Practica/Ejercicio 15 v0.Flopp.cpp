#include <iostream>
#define N 5
using namespace std;

int main() {
	int vecA[5];
	int vecM[5];
	int vecC[5];
	int vecT[5];
	int hora;
	hora = 0;
	int i;
	int a;
	int b;
	a = 0;
	b = 0;
	int MT;
	MT = 0;
	int maxC;
	maxC = 0;
	int maxM;
	maxM = 0;
	int maxA;
	maxA = 0;
	int acuA;
	acuA = 0;
	int acuM;
	acuM = 0;
	int acuC;
	acuC = 0;
	cout << "Ingrese los valores del vector de autos \n" << endl;
	for (i=0;i<5;i++)
	{
		do{
		cout << "No puede ser menor a 0" << endl;
		cin >> vecA[i];
		}
		while (vecA[i]<0);
	}
	cout << "Ingrese el elemento del vector de motos \n" << endl;
	for (i=0;i<5;i++)
	{
		do{
			cout << "No puede ser menor a 0" << endl;
			cin >> vecM[i];
		}
		while (vecM[i]<0);
	}
	cout << "Ingrese el elemento del vector de camiones \n" << endl;
	for (i=0;i<5;i++)
	{
		do{
			cout << "No puede ser menor a 0" << endl;
			cin >> vecC[i];
		}
		while (vecC[i]<0);
	}
	for (i=0;i<5;i++)
	{
		acuA=acuA+vecA[i];
	}
	for (i=0;i<5;i++)
	{
		acuM=acuM+vecM[i];
	}
	for (i=0;i<5;i++)
	{
		acuC=acuC+vecC[i];
	}
	for (i=0;i<5;i++)
	{
		if (i==0)
		{
			maxA=vecA[i];
		}
		if (vecA[i]>maxA)
		{
			maxA=vecA[i];
		}
	}
	for (i=0;i<5;i++)
	{
		if (i==0)
		{
			maxM=vecM[i];
		}
		if (vecM[i]>maxM)
		{
			maxM=vecM[i];
		}
	}
	for (i=0;i<5;i++)
	{
		if (i==0)
		{
			maxC=vecC[i];
		}
		if (vecC[i]>maxC)
		{
			maxC=vecC[i];
		}
	}
	for (i=0;i<5;i++)
	{
		vecT[i]=(vecA[i]+vecM[i]+vecC[i]);
	}
	for (i=0;i<5;i++)
	{
		if (i==0)
		{
			MT=vecT[i];
			a++;
		}
		if (vecT[i]>MT)
		{
			MT=vecT[i];
			b++;
		}
	}
	cout << "La cantidad de A es: " << acuA << endl;
	cout << "La cantidad de M es: " << acuM << endl;
	cout << "La cantidad de C es: " << acuC << endl;
	cout << "La mayor cantidad de vehiculos en un intervalo es: " << MT << endl;
	cout << "En la posicion: " << a+b << endl;
	hora=hora+(15*(a+b));
	cout << "En los primeros: " << hora << ".-Minutos del Dia " << endl;
	return 0;
}
