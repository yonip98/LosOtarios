#include <iostream>
#define N 3
using namespace std;

int main() {
	
	/*Escribir un programa que cargue una matriz cuadrada y muestre la suma de
	los elementos de la diagonal principal. Mostrar la matriz.*/
	
	int vec[N][N],i,j,suma=0;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
			cin>>vec[i][j];
		}
		cout << endl;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j)
			{
				cout<<vec[i][j]<<" ";
				suma=suma+(vec[i][j]);
			}
			else 
			   cout<<"- ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout << "La suma de la diagonal es: " << suma;
	return 0;
}
