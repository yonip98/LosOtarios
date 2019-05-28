#include <iostream>
#define N 10
using namespace std;

int main() {
	int vec[10];
	int i;
	i = 0;
	for (i=0;i<10;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec[i];
	}
	for (i=0;i<10;i++) 
	{
		vec[i]=vec[i]*2;
	}
	for (i=N-1;i>=0;i--)
	{
		cout << vec[i];
		cout << "\n" << endl;
	}
	return 0;
}
