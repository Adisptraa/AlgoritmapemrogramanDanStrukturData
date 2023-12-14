#include <iostream>
using namespace std;

int main(){
	int nilai;
	bool prima = true;
	cout <<"BILANGAN PRIMA"<<endl;
	cout <<"Masukan nilai: ";
	cin >> nilai;
	
	if (nilai <= 1) {
		prima = false;
	} else {
		for (int i = 2; i <= nilai / 2; ++i) {
			if (nilai % i == 0) {
				prima = false;
				break;
			}
		}
	}
	if (prima) {
		cout <<"Termasuk Bilangan Prima"<<endl;
	} else {
		cout <<"Tidak Termasuk Bilangan Prima";
	}
}
