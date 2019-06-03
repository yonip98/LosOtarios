#include<iostream>

using namespace std;

int main ()
{

	int A[5], i, u, b;

  //En esta primera instancia se ingresan los valores del vector
  //Donde "i" es la posición del valor dentro del vector
	for (i=1; i<6; i++)
	{
    //Aquí se solicita que se ingrese un valor en una posición específica
		cout<<"Asigne un valor en la posición "<<i<<": ";
		cin>>A[i];
	}
	b = 0; //La variable b servirá más adelante para saber si ningun valor se repite
	for (i=1; i<6; i++)
	{
		for (u=i+1; u<6; u++)
		{
			if (A[i] == A[u])
			{
				cout<<"El valor en la posición "<<i<<" se repite con el de la posición "<<u<<endl;
			}
			else
			{
				b++;
				if (b == 10)
				{
					cout<<"Ningun valor se repite";
				}
			}
		}
	}

	return(0);

}
