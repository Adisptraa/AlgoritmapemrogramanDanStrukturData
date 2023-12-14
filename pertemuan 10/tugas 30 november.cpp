#include <iostream>
using namespace std;

int pangkat(int x, int y){
	if (y == 0){
		return 1;
	} else {
		return x * pangkat(x,y-1);
	}
}

int main(){
	int x,y;
	
	cout <<"MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF\n" << endl;
	
	cout <<"MASUKAN NILAI X = ";
	cin >> x;
	cout <<"MASUKAN NILAI Y = ";
	cin >> y;
	
	cout << x << " DIPANGKATKAN " << y << " = " << pangkat(x, y) << endl;
	
	return 0; 
}
