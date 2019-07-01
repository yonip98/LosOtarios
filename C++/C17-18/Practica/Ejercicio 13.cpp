#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5];
	int i;
	int acu;
	int max;
	int min;
	float promedio;
	int a;
	int b;
	int dia;
	int dia1;
	int c;
	int d;
	int g;
	dia1 = 0;
	g = 0;
	c = 0;
	d = 0;
	min = 0;
	dia = 0;
	a = 0;
	b = 0;
	promedio = 0;
	max = 0;
	acu = 0;
	i = 0;
	
	cout << "Ingrese los valores del primer vector \n" << endl;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec[i];
	}
	for (i=0;i<5;i++)
	{
		acu = acu+vec[i];
	}
	{
		promedio = promedio+(acu/5);
		cout << "\n" << endl;
		cout << "El promedio es: " << promedio << endl;
	}
	for (i=0;i<5;i++)
	{
		if (i==0){
			
			max=vec[i];
			g = i;
		}
		if (vec[i]>max)
		{
			max=vec[i];
			c = i;
		}
	}
	dia=(g+c);
		cout << "La temp maxima es: " << max << endl;
		cout << "Y el dia que ocurrio fue: " << dia << endl;
		for (i=0;i<5;i++)
		{
			if (i==0){
				
				min=vec[i];
				d = i;
			}
			if (vec[i]<min)
			{
				min = vec[i];
				b = i;
			}
		}
		dia1=(d+b);
			cout << "La temp minima es: " << min << endl;
			cout << "Y el dia que ocurrio fue: " << dia1 << endl;
			for (i=0;i<5;i++)
			{
				if (vec[i]>promedio)
				{
					a++;
				}
			}
			cout << "La cantidad de dias mayores al promedio es de: " << a << endl;
			return 0;
}
