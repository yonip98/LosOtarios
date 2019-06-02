#include <iostream>
#define N 5
using namespace std;

int main() {
	float vec[10];
	int i;
	int c;
	float suma;
	float media;
	suma = 0;
	media = 0;
	c = 0;
	i = 0;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese la altura \n" << endl;
		cin >> vec[i];
		suma = suma + vec[i];
	}
	media = media + (suma/N);
	cout << "La media es: " << media << endl;
	for (i=0;i<5;i++)
	{
		if (vec[i]>media)
		{
			c++;
		}
	}
	cout << "Los alumnos que pasan la media son: " << c << endl;
	return 0;
}
