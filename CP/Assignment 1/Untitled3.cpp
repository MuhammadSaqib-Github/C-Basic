#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout <<"N\tN*10 \tN*100 \tN*1000 \n \n"  ;
     	int X=1;
	while( X>=1 && X<=5)
	{
		cout<<X<<"\t"<<X*10<<"\t"<<X*100<<"\t"<<X*1000l << endl;
		X++;
	}
	_getch();
}
