#include <iostream>
using namespace std;

void luasPersegi() {
    int a;
    float sum;
    cout << "--------------LUAS PERSEGI--------------" << endl;
    cout << "Input panjang sisi : ";
    cin >> a;
    sum = a * a;
    cout << "Hasil   : " << sum << endl << endl;
}

void luasLingkaran() {
    int a;
    float phi = 3.14, sum;
    cout << "--------------LUAS LINGKARAN--------------" << endl;
    cout << "Input panjang jari-jari    : ";
    cin >> a;
    sum = phi * (a * a);
    cout << "Hasil              : " << sum << endl << endl;
}

void luasTabung() {
    int r, t;
    float phi = 3.14, sum;
    cout << "--------------LUAS TABUNG--------------" << endl;
    cout << "Input panjang jari-jari: ";
    cin >> r;
    cout << "Input tinggi tabung    : ";
    cin >> t;
    sum = 2 * phi * r * (r + t);
    cout << "Hasil              : " << sum << endl << endl;
}

int main() {
    for (int i = 0; i < 2; ++i) {
        luasPersegi();
    }

    for (int i = 0; i < 2; ++i) {
        luasLingkaran();
    }
    
    for (int i = 0; i < 2; ++i){
    	luasTabung();
	}

    return 0;
}
