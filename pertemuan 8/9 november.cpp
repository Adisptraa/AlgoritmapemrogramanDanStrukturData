#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int i, j;
	int data_jual[3][3];
	string nama_barang[3];
	
	for(i=0;i<3;i++)
	{
		cout<<"masukan nama barang : ";
		cin>>nama_barang[i];
		for(j=0;j<3;j++)
		{
			cout<<"data ke - "<<i<<" "<<j<<endl;
			cout<<"jumlah penjualan : ";
			cin>>data_jual[i] [j];
		}
	}
	
	cout<<"\n\nHasil Penjualan barang"<<endl;
	cout<<"=============================================="<<endl;
	cout<<"No\t Nama Barang\t 2001\t 2002\t 2003\t"<<endl;
	cout<<"=============================================="<<endl;

	for(i=0;i<3;i++)
	{
		
		cout<<i+1<<" \t "<<nama_barang[i]<<" \t ";

		for(j=0;j<3;j++)
		{
			cout<<data_jual[i][j];
			cout<<"\t ";
		}
		cout<<endl;
	}
		cout<<"=============================================="<<endl;

	getch();
}
