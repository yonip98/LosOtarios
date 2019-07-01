#include <iostream>
#define P 5 //P es la cantidad de Productos
using namespace std;

int main() {
	int A[P],B[P],C[P],i;
	for (i=0;i<P;i++)
	{
		cout<<"Cantidad del producto "<<i+1<<" que hay en stock ";
		cin>>A[i];
	}
	for (i=0;i<P;i++)
	{
		cout<<"Cantidad del producto "<<i+1<<" que se compró ";
		cin>>B[i];
	}
	for (i=0;i<P;i++)
	{
		if (A[i]==B[i])
		{	
			C[i]=A[i]; 
		}
		else 
		{
			if (B[i]>A[i])
			{	
				C[i]=(B[i]-A[i])*2;
			}	
			else
			{
				C[i]=B[i];
			}
		}
	}	
	for (i=0;i<P;i++)
	{
		cout<<"La cantidad del Producto "<<i+1<<" que se debe comprar para mantener el stock es: "<<C[i]<<endl;
	}
	return 0;
}

