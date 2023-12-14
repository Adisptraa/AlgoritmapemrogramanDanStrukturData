#include <iostream>

using namespace std;

int main()
{
	int x , bil=0 ; //variable
	cout<<"masukan bilangan pembatas akhir: "; //menampilkan info pembatas akhir
	cin>> x; // untuk memasukan variable x kedalam cout/penampil
	do//melakukan perintah
	{
		if(bil >= x)//kondisi jika bilangan lebih dari inputan(variable x) maka akan masuk ke line bawah
		break; //untuk menghentikan perulangan
		cout<<bil<<" "; //untuk menampilkan variable bil
	}
	while(bil+=4); //menambahkan variable bil dengan angka 4
	getchar(); // menampilkan karakter char
}
