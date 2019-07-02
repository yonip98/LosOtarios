#include <iostream>
#define N 6
using namespace std;

int main() {
	int A[N],B[N],i,j=0;
	for (i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for (i=N-1;i>=0;i--)
	{
		B[j]=A[i];
		j++;
	}
	for (i=0;i<N;i++)
	{
		cout<<B[i]<<" ";
	}
	
	return 0;
}

