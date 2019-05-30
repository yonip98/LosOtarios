#include<iostream>
using namespace std;

int main(){
	int i;
	int A[3];
	int aux1, aux2, aux3, datd1, datd2, datd3;
	float ha1, ha2, ha3;
	datd1=0;
	datd2=0;
	datd3=0;
	for (i=0; i<1440; i=i+15){
		//para probar se recomienda reducir la cantidad de minutos
		cout<<"Ingrese los autos que pasaron en los ultimos 15 minutos: ";
		cin>>A[1];
		cout<<"Ingrese las motos que pasaron en los utlimos 15 minutos: ";
		cin>>A[2];
		cout<<"Ingrese los transportes publicos que pasaron en los ultimos 15 minutos: ";
		cin>>A[3];
		if (aux1<A[1]){
			aux1=A[1];
			ha1=i;}
		if (aux2<A[2]){
			aux2=A[2];
			ha2=i;}
		if (aux3<A[3]){
			aux3=A[3];
			ha3=i;}
		datd1=datd1+A[1];
		datd2=datd2+A[2];
		datd3=datd3+A[3];
	}
	if (datd1>datd2 && datd1>datd3)
		cout<<"Circularon mas autos con "<<datd1<<endl;
	else
		if (datd2>datd1 && datd2>datd3)
			cout<<"Circularon mas motos con "<<datd2<<endl;
		else
			if (datd3>datd1 && datd3>datd2)
				cout<<"Circularon mas transportes publicos con "<<datd3<<endl;
	cout<<"La mayor circulacion de autos fue de "<<aux1<<" vehiculos en el intervalo de las "<<(ha1/15)<<endl;
	cout<<"La mayor circulacion de motos fue  de "<<aux2<<" vehiculos en el invervalo de las "<<(ha2/15)<<endl;
	cout<<"La mayor circulacion de transportes publicos fue de "<<aux3<<" vehiculos en el invervalo de las "<<(ha3/15)<<endl;
	return(0);
}
