#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5];
	int i;
	
	cout << "Ingrese el primer valor de la primera posicion del vector \n" << endl;
	cin >> vec[0];
	cout << "\n";
	cout << vec[0] << "\n";
	
	for (i=1;i<5;i++)
	{
		vec[i]=vec[i-1]*2;
	}
	for (i=1;i<5;i++)
	{
		cout << vec[i] << "\n" << endl;
	}
	return 0;
}
