#include <iostream>
using namespace std;

int main() 
{
	int a; int b; int c; int N; int CantiExt; int Dentro; int ContF; int AcuF;
	float Acu; float Prom;
	CantiExt=0;
	Dentro=0;
	Acu=0;
	AcuF=0;
	ContF=0;
	Prom=0;
	cout << " Ingrese Dos valores \n" << endl;
	cout << " Por favor ingrese el primer valor \n" << endl;
	cin >> a;
	cout << " Ahora Ingrese el segundo valor \n" << endl;
	cin >> b;
			if (a==b){
				cout << " Error \n" << endl;
		}
			do {
					if (a>b)
				{
						c=a;
						a=b;
						b=c;
						cout << " valor de (a) ahora: " << a << endl;
						cout << " valor de (b) ahora: " << b << endl;
				}
				cin >> N;
				if (N==a || N==b)
				{
					CantiExt=CantiExt+1;
				}
				if (N>a && N<b)
				{
					Dentro=Dentro+1;
					Acu=(Acu+N)*(Dentro)/(CantiExt);
				}
				if (N<a || N>b)
				{
					ContF=ContF+1;
					Prom=(Prom+N)/ContF;
				}
			} while(N!=0);
			
				cout << "La cantidad de valores que coincidieron con los extremos fueron: " << CantiExt << endl;
				cout << "El porcentaje de valores dentro del intervalo es de: " << Acu << "%" << endl;
				cout << "El promedio de los valores fuera del intervalo es de: " << Prom << endl;
	return 0;
}
