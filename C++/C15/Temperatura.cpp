#include <iostream>
using namespace std;

int main() {
	int temp; int tempMa; int tempMe; int c; int dias; int ttemp; int ll; int ct;
	float promedio;
	tempMa = 5;
	tempMe = 40;
	ll = 0;
	c = 1;
	promedio = 0;
	dias = 0;
	ttemp = 0;
	cout << "Ingrese cuantos dias quiere calcular \n" << endl;
	cin >> ct;
	cout << "Ingrese las temperaturas del mes \n" << endl;
	for(c=1; c<=ct; c=c+1)
	{
		cin >> temp;
		while (temp<5 or temp>40){
			cout << "Ingrese nuevamente \n" << endl;
			cin >> temp;
		}
		if (temp > tempMa)
		{
			tempMa = temp;
			ll++;
		}
		if (temp > 25)
		{
			dias++;
		}
		ttemp = ttemp+temp;
	}
	promedio = promedio+(ttemp/ct);
	cout << "La temperatura maxima es: " << tempMa << " En el dia: " << ll << endl;
	cout << "La cantidad de dias que superaron los 25 grados, fueron: " << dias << endl;
	cout << "El promedio es: " << promedio << endl;
	
	
	return 0;
}

