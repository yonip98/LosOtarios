#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5];
	int i;
	int a;
	int b;
	int c;
	int d;
	int min;
	int min2;
	int vec2[5];
	int vec3[5];
	i = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	min = 0;
	min2 = 0;
	cout << "Ingrese los valores del primer vector \n" << endl;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec[i];
	}
	cout << "Ingrese los valores del segundo vector \n" << endl;
	for (i=0;i<5;i++)
	{
		cout << "Ingrese el elemento \n" << endl;
		cin >> vec2[i];
	}
	for (i=0;i<5;i++)
	{
		if (i==0){
			
			min=vec[i];
			a++;
		}
		if (vec[i]<min)
		{
			min=vec[i];
			b++;
		}
	}
	for (i=0;i<5;i++)
	{
		if (i==0){
			
			min2=vec2[i];
			c++;
		}
		if (vec2[i]<min2)
		{
			min2=vec2[i];
			d++;
		}
	}
	cout << "\n" << endl;
	cout << "El valor minimo del primer vector es: "<< min << endl;
	cout << "En la posicion: " << a+b << "\n" << endl;
	cout << "El valor minimo del segundo vector es: "<< min2 << endl;
	cout << "En la posicion: " << c+d << "\n" << endl;
	cout << "El valor que le corresponde al vector 2 es: " <<vec2[i-(a+b)] << endl;
	cout << "El valor que le corresponde al vector 1 es: " <<vec[i-(c+d)] << endl;
	return 0;
}
