#include <iostream>
using namespace std;

int main() 
{
	int a; int b; int c; int d; int e; float prom;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> e;
	cin >> d;
	
	prom=(a+b+c+d+e)/5;
	
	if (prom>=10)
	{
		cout << "El promedio es mayor o igual a 10" << endl;
	}
	cout << prom << endl;
	
	if (prom<10)
	{
		cout << "El promedio no es mayor o igual a 10" << endl;
	}
	
	return 0;
}

