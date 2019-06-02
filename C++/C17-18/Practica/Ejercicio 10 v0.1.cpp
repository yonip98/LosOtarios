#include <iostream>
using namespace std;

int main ()
{
	int i,b,an,po,re;
	int a[5];
	
	for (i=0; i < 5; i++)
	{
		cout << "ingrese un numerito " <<endl;
		cin >> a[i];
	}
	cout << "ingrese una posicion entre 0 y 9 " <<endl;
	cin >> b;
	for (i=0; i< 5; i++)
	{
		if (b>0 && b<9)
		{
		//hay que terminar el else para que el numero sea invalido
		if (b==i)
		{
			cout << "el numero en esa posicion es: " << a[i]<<endl;
		}
		if (b==i)
		{
			an = a[i]-1; //numero anterior
			po = a[i]+1; //numero posterior
			re = a[i]+an+po; //resultado de la suma entre estos
			cout << "la suma de ese numero con su posicion anterior y posterior es "<< re;
		}
		}
		
	}
	return 0;
}
