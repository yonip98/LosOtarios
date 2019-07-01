#include<iostream>

using namespace std;

int main ()
{

	int A[6], i, u, b;

	for (i=1; i<6; i++)
	{
		cout<<"Asigne un valor en la posición "<<i<<": ";
		cin>>A[i];
	}
	b = 0;
  c = 0;
	for (i=1; i<6; i++)
	{
		for (u=i+1; u<6; u++)
		{
			if (A[i] == A[u])
			{
        c++;
        if (c == 1)
        {
          cout<<"El valor en la posición "<<i<<" se repite con el de la posición "<<u<<endl;
        }
				else
        {
          cout<<"El valor se repite"
        }
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
