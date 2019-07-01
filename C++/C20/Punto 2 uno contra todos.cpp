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
		for (l=0;l<N-1;l++)
		{
			for (i=l+1;i<N;i++)
			{
				if (vec[i] < vec[l])
				{
					aux=vec[i];
					vec[i]=vec[l];
					vec[l]=aux;
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
