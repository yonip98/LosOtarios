#include <iostream>
#define N 3
#define M 3
using namespace std;

int main()
{
	int mat[N][M]={1,2,3,4,5,6,7,8,9};
	int aux[N];
	int i,j,h,k;
	/*
	for (h=0;h<N;h++)
	{
		for(k=0;k<M;k++)
		{
			cin>>mat[h][k];
		}
	}
	*/
	cout<<"Tome su matriz humilde señor/a:"<<'\n'<<endl;
	for(h=0;h<N;h++)
	{
		for(k=0;k<M;k++)
		{
			cout << mat[h][k]<<' ';
		}
		cout<<'\n';
	}
	cout<<'\n';
	cout<<"Elija la fila que quiere intercambiar: ";
	cin>>i;
	cout <<'\n'<<"El contenido de la fila seleccionada es: ";
	
	for(h=0;h<M;h++)
	{
		cin>>aux[h] = mat[h][k];
	}
	
	for (h=0;h<M;h++)
	{
		cout << aux[h] << ' ';
	}
	
	cout<<'\n'<<'\n';
	cout<<"Elija la fila que intercambiará con la primera: ";
	cin>>j;
	
	for(h=0;h<M;h++)
	{
		mat[h][k] = va1[j];
		cout << va1[i] << ' ';
	}
	return 0;
}
