#include <iostream>
#include <cstring>
#define N 10
using namespace std;

int main() {
	char c[]="Hola Mundo", m[N];
	int j=0,p=0;
	
	for (p=0;p<=N;p++)
	{	
			for (j=0;j<=N;j++)
			{
				if (c[j]=='a' or c[j]=='e' or c[j]=='i' or c[j]=='o' or c[j]=='u')
				{
				
				m[j]=c[j];
			}
			
			
		}
	}	
	for (p=0;p<=N;p++)
	{
		cout<<m[p];
	}
	
	return 0;
}
