#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main()
{
	int a=3, b=2, c=1, bil;
	
	printf("\nbil-1 | bil-b | bil-c");
	printf("\n---------------------");
	for(bil=1;bil<=10;bil++)
	{
		a+=b;b+=c;c+=2;
		cout<<"\n"<<a<<"\t"<<b<<"\t"<<c;
		if(c==13)
		break;
	}
	getche();
}
