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
		if (vec[i]%2!=0)
		{
		cout << vec[i];
		cout << "\n" << endl;
	}
	}
	return 0;
} 
