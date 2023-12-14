#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char kata [20];
	float angka ,a,b;
	//clrscr();
	cout<<"masukan sembarangan kata berupa angka =";
	cin>>kata;
	angka = atoi(kata);
	a=angka +7;
	cout<<"hasil perubahan ditambah dengan 7 = "<<a;
	getchar();
}
