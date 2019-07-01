#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5];
	int i;
	int l;
	int aux;
	aux=0;
	
	
	for (i=0;i<5;i++)
	{
		cin >> vec[i];
	}
		for (l=0;l<5;l++)
		{
			for (i=1;i<4;i++)
			{
				if (vec[i]>vec[i+1])
				{
					aux=vec[i];
					vec[i]=vec[i+1];
					vec[i+1]=aux;
				}
			}
			cout << "\n" << endl;
					for (i=0;i<5;i++)
					{
						cout << vec[i] << endl;
					}
		}
	return 0;
}
