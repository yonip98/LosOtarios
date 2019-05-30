#include<iostream>

using namespace std;

int main (){
	
	int i;
	int VEC[6];
	
	for (i=0;i<6;i++){
		cout<<"Introduzca un valor: ";
		cin>>VEC[i];
	}
	i=0;
	for (i=0; i<6; i++){
		if (VEC[i]==VEC[i+1] or VEC[i] == VEC[i+2] or VEC[i] == VEC[i+3] or VEC[i] == VEC[i+4] or VEC[i] == VEC[i+5] )
			cout<<"El valor en VEC["<<i<<"] se repite"<<endl;
		if (VEC[i]==VEC[i-1] or VEC[i] == VEC[i-2] or VEC[i] == VEC[i-3] or VEC[i] == VEC[i-4] or VEC[i] == VEC[i-5] )
			cout<<"El valor en VEC["<<i<<"] se repite"<<endl;
	}
	if (VEC[i]!=VEC[i+1] && VEC[i] != VEC[i+2] && VEC[i] != VEC[i+3] && VEC[i] != VEC[i+4] && VEC[i] != VEC[i+5] && VEC[i]!=VEC[i-1] && VEC[i] != VEC[i-2] && VEC[i] != VEC[i-3] && VEC[i] != VEC[i-4] && VEC[i] != VEC[i-5] )
		cout<<"Ningun valor se repite"<<endl;
	return (0);
}

