#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char huruf[20];
	char pindah[20];
	//clrscr();
	cout<<"masukan sembarang kata = ";
	cin>>huruf;
	/*proses */
	strcpy(pindah, huruf);
	cout<<"pemindahannya = "<<pindah;
	getchar();
}
