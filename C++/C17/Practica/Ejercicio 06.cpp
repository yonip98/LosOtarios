#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[10];
	int i;
	int c;
	int a;
	int b;
	c = 0;
	i = 0;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec[i];
	}
	cout << "Ingrese los numeros que definan el intervalo \n" << endl;
	cin >> a;
	cin >> b;
	cout << "\n" << endl;
	for (i=0;i<5;i++)
	{
		if (vec[i]>a && vec[i]<b)
		{
			cout << vec[i] << "\n" << endl;
		}
	}
	return 0;
}
