#include <iostream>
#define N 3
using namespace std;

int main() {
	
	/*Escribir un programa que cargue una matriz cuadrada y muestre la suma de
	los elementos de la diagonal principal. Mostrar la matriz.*/
	
	int vec[N][N],i,j;
	
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
			if(j==((N-1)-i))
			{
				cout<<vec[i][j]<<" ";
			}
			else 
			   cout<<"- ";
		}
		cout<<endl;
	}
	
	cout << endl;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i+j<(N-1))
			{
				cout<<vec[i][j]<<" ";
			}
			else 
			   cout<<"- ";
		}
		cout<<endl;
	}
	
	cout << endl;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i+j>(N-1))
			{
				cout<<vec[i][j]<<" ";
			}
			else 
					cout<<"- ";
		}
		cout<<endl;
	}
	return 0;
}
