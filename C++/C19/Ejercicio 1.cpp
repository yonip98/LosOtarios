//Escribir un programa que permita cargar 10 números en un vector. Luego
//debe recorrer el vector y encontrar los números que se repiten en el
//vector y mostrar en pantalla el número repetido
#include <iostream>
using namespace std;

int main() {
	int vec[5];
	int i, c, j;
	j = 0;
	c = 0;
	for (i=0;i<5;i++)
	{
		cin>>vec[i];
	}
	for (i=0; i<5; i++)
	{
		for (j=i+1;j<5;j++)
		{
			if (vec[i] == vec[j])
			{
				c=vec[j];
				cout << "El numero que se repite es: " << c << endl;
				
			}
		}
	}
	return 0;
}
