#include<iostream>

using namespace std;

int main ()
{

	int A[6], i, u, b;

  //En esta primera instancia se ingresan los valores del vector
  //Donde "i" es la posición del valor dentro del vector
	for (i=1; i<6; i++)
	{
    //Aquí se solicita que se ingrese un valor en una posición específica
		cout<<"Asigne un valor en la posición "<<i<<": ";
		cin>>A[i];
	}
	b = 0; //La variable b servirá más adelante para saber si ningun valor se repite
	for (i=1; i<6; i++) //Esta secuencia recorre todo el vector
	{
		for (u=i+1; u<6; u++) //Esta secuencia compara la posición actual en i con las siguientes (u)
		{
			if (A[i] == A[u])
			{
        //En este if imprime si la posición actual i se repite con algunas de las siguientes
        //Quiero mejorar el código para que esto se realice sólo si se repite 1 vez
				cout<<"El valor en la posición "<<i<<" se repite con el de la posición "<<u<<endl;
        //En caso de que alguna comparación no de iguales se sumara 1 a "b" más abajo
			}
			else
			{
				b++;
        //La cantidad de veces que se suma b para 5 posiciones es 10
        //En caso de hacer el código con un vector más grande:
        //Poner que imprima "b" en esta línea, correr el código
        //Y cambiar el valor del if de abajo por el resultado
				if (b == 10)
				{
					cout<<"Ningun valor se repite";
				}
			}
		}
	}

	return(0);

}
