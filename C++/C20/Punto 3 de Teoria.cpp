#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5], i, l, aux;
	char Bandera;
	
	for (i=0;i<N;i++)
	{
		cin >> vec[i];
	}
	do
	{
		Bandera=false;
		for (l=0;l<5;l++)
		{
			for (i=0;i<4;i++)
			{
				if (vec[i]>vec[i+1])
				{
					aux=vec[i];
					vec[i]=vec[i+1];
					vec[i+1]=aux;
					Bandera=true;
				}
			}
		}
	}
	while(Bandera!=false);
	cout << "\n" << endl;
	for (i=0;i<5;i++)
	{
		cout << vec[i] << endl;
	}
	return 0;
}
