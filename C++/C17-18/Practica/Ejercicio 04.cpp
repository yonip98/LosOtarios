#include <iostream>
#define N 10
using namespace std;

int main() {
	int vec[10];
	int i;
	int c;
	c = 0;
	i = 0;
	for (i=0;i<10;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec[i];
	}
	for (i=0;i<10;i++)
	{
	if (vec[i]==vec[1])
	{
		c++;
	}
	}
	cout << "La cantidad que coincide con el valor 2 es: " << c << endl;
	return 0;
}
