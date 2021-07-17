#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int units;
	cout << " Enter no of units ";
	cin >> units;
	char ch ;
	cout << "Enter Character ";
	cin >> ch;
	if(ch='R')
	
		{
			
			float Rateofunit=7.50;
			float bill , bpf=4.50 , bsf=20.50 ;
			bill = bpf + bsf + (units*Rateofunit);
			cout << "Bill is " << bill;
		}		
	
	else 	if(ch='C')
		{
			
			float Rateofunit= 12.50;
			float bill , bpf=10.50 , bsf=50.50 ;
			bill = bpf + bsf + (units*Rateofunit);
			cout << "Bill is " << bill;
	}
	else
	cout << "invalid" ;

		getch();
}
