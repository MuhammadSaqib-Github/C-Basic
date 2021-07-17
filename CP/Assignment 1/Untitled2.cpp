#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int salary , deD ;
	cout << " enter your salary :" ;
	cin >> salary ;
	
	if (salary >= 20000)
{
		deD =	salary - salary*7/100; 
	  cout << "Decuct salary is :" << deD ;
}
	 else if ( salary >=10000 && salary < 20000) 
	 {
	 deD = salary - 1000;
	 cout << "Deduct salary is  :" << deD;
}
	 
	 else
	 cout << " Mojaan Maar " ;
	
	
	_getch();
	
}

