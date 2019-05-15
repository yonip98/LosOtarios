#include <iostream>
using namespace std;

int main() 
{
	int hh1; int hh2; int mm1; int mm2; int ss1 ; int ss2; int dd; int hh; int mm; int ss; int hhr;int mmr;int ssr;
	dd=0;
	hh=0;
	mm=0;
	ss=0;
	
	cout << "Ingrese los segundos, minutos y horas del primer dia \n" << endl;
	cin >> ss1;
	cin >> mm1;
	cin >> hh1;
	
	cout << "Ingrese los segundos, minutos y horas del primer dia \n" << endl;
	cin >> ss2;
	cin >> mm2;
	cin >> hh2;
	
	ssr= ss1+ss2;
	mmr= mm1+mm2;
	hhr= hh1+hh2;
	
	if (ssr >= 60)
		{mm=mm+1;
		ssr=ssr-60;}
	if (mmr >= 60)
		{hh=hh+1;
		mmr=mmr-60;}
	if (hhr>= 24)
		{dd=dd+1;
		hhr=hhr-24;}
	cout << "Pasaron: " << dd << "dias, " << hh+hhr << "horas, " << mmr+mm << "minutos, " << ssr+ss << "segundos." << endl;
	return 0;
}
