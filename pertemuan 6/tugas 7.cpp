#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("TEST.txt", ios::app);
	cout<<"OPERASI FILE OFSTREAM"<<endl;
	cout<<"-----------"<<endl;
	if(!myfile.fail())
	{
		myfile<<"belajar OPERASI FILE OFSTREAM"<<endl;
		myfile.close();
		cout<<"text telah ditulis ke dalam file"<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}
	getchar();
	return 0;
}
