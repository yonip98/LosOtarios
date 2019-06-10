#include <iostream>
#define N 5
using namespace std;

int main() {
	int vec[5], i, j, aux;
	aux = 0;
	for (i=0;i<N;i++)
	{
		cin >> vec[i];
	}
	for (i=0;i<N-1;i++)
	{
		if (vec[i] < vec[i+1])
		{
			aux = vec[i];
			vec[i] = vec[i+1];
			vec[i+1] = aux;
			i = -1;
		}
	}
	cout << "\n" << endl;
	for (j=0;j<N;j++)
	{
		cout << vec[j] << endl;
	}
	return 0;
}
