#include <iostream>
using namespace std;
//Escribir un programa que permita detectar si se repiten números en un
//vector de 10 elementos, y anotar los números que se repiten (no la
//cantidad), en otro vector.
int main() 
{
	int vec[10];
	int aux[10];
	int k;
	k= 0;
	int i;
	int j;
	for (i=0;i<10;i++)
	{
		cout<<"un valor: ";
		cin>>vec[i];
	}
	for (i=0; i<10; i++)
	{
		for (j=i+1;j<10;j++)
		{
			if (vec[i] == vec[j])
			{
				aux[k]=vec[j];
				k++;
				cout<<"El valor del contador aux es "<<k<<endl;
			}
		}
	}
	for (i=0;i<k;i++)
		{
		cout << aux[i] << endl;
	}
	return 0;
}
