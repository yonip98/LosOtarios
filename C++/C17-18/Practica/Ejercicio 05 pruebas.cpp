#include<iostream>

using namespace std;

int main ()
{

  int A[8], i;

  for (i=0; i<8; i++)
  {
    cout<<"Asigne un valor: ";
    cin>>A[i];
  }

  for (i=0; i<8; i++)
  {
    cout<<A[i];
  }

  return(0);

}
