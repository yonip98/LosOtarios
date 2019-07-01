#include <iostream>
#define N 4
#define M 5
using namespace std;

int main() {
	
	int vec[N][M],suma=0,i,j;
	float promedio=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
			cin>>vec[i][j];
		}
		cout << endl;
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			suma=suma+vec[i][j];
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
				cout<<vec[i][j]<<"\t ";
		}
		cout<<endl;
	}
	
	promedio=promedio+(suma/(N+M));
	
	cout<<endl;
	cout << "El promedio es: ";
	cout<<promedio<<endl;
	cout<<endl;
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if (vec[i][j]<(promedio*0,2) or vec[i][j]>(promedio*0,2))
			{
				cout<<vec[i][j]<<"\t ";
			}
		}
	}
	
	return 0;
}
