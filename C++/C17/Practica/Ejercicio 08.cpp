#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5];
	int i;
	int vec2[5];
	int vec3[5];
	i = 0;
	cout << "Ingrese los valores del primer vector \n" << endl;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec[i];
	}
	cout << "Ingrese los valores del segundo vector \n" << endl;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec2[i];
	}
	for (i=0;i<5;i++)
	{
		vec3[i] = (vec2[i]+vec[i]);
	}
	for (i=0;i<5;i++)
	{
		cout << vec3[i];
		cout << "\n" << endl;
	}
	return 0;
}
