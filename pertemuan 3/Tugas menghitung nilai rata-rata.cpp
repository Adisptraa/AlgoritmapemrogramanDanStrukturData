#include <iostream>
#include <string>
using namespace std;

int main(){
	//if else
	float a;
	string nama_siswa;
	float nilai_pertandingan_I, nilai_pertandingan_II, nilai_pertandingan_III, nilai_rata_rata;
	string hadiah;
	
	cout << "Masukan nama siswa: ";
	getline (cin, nama_siswa);
	cout << "Masukan nilai pertandingan I: ";
	cin >> nilai_pertandingan_I;
	cout << "Masukan nilai pertandingan II: ";
	cin >> nilai_pertandingan_II;
	cout << "Masukan nilai pertandingan III: ";
	cin >> nilai_pertandingan_III;
	
	nilai_rata_rata = (nilai_pertandingan_I + nilai_pertandingan_II + nilai_pertandingan_III) / 3;
	
	if (nilai_rata_rata >= 85) {
		hadiah = "Komputer core i5";
	} else if (nilai_rata_rata >=70) {
		hadiah = "Uang sebesar Rp. 2.500.000";
	} else {
		hadiah = "Hiburan";
	}
	cout << "Nilai rata-rata " << nama_siswa << " adalah: " << nilai_rata_rata << endl;
	cout << nama_siswa << "Mendapat hadiah: " << hadiah << endl;
	
	cout<<"========================================================================================"<<endl<<endl;
	float b;
	//nested if
	
		cout << "Masukan nama siswa: ";
	cin >> nama_siswa;
	cout << "Masukan nilai pertandingan I: ";
	cin >> nilai_pertandingan_I;
	cout << "Masukan nilai pertandingan II: ";
	cin >> nilai_pertandingan_II;
	cout << "Masukan nilai pertandingan III: ";
	cin >> nilai_pertandingan_III;
	
	nilai_rata_rata = (nilai_pertandingan_I + nilai_pertandingan_II + nilai_pertandingan_III) / 3;
	
if (nilai_rata_rata >= 85){
	hadiah = "Uang sebesar Rp. 2.500.000";
} else{
	hadiah = "pergi hiburan";
}
	cout << "Nilai rata-rata " << nama_siswa << " adalah: " << nilai_rata_rata << endl;
	cout << nama_siswa << "Mendapat hadiah: " << hadiah << endl;
	
	cout<<"========================================================================================"<<endl<<endl;
	float c;
	//if else majemuk
	
		cout << "Masukan nama siswa: ";
	cin >> nama_siswa;
	cout << "Masukan nilai pertandingan I: ";
	cin >> nilai_pertandingan_I;
	cout << "Masukan nilai pertandingan II: ";
	cin >> nilai_pertandingan_II;
	cout << "Masukan nilai pertandingan III: ";
	cin >> nilai_pertandingan_III;
	
	nilai_rata_rata = (nilai_pertandingan_I + nilai_pertandingan_II + nilai_pertandingan_III) / 3;
	
	if (nilai_rata_rata >= 85) {
		hadiah = "Komputer core i5";
	}else if (nilai_rata_rata >= 70) {
		hadiah = "Uang sebesar Rp. 2.500.000";
	}else {
		hadiah = "Hiburan";
	}
	cout << "Nilai rata-rata " << nama_siswa << " adalah: " << nilai_rata_rata << endl;
	cout << nama_siswa << "Mendapat hadiah: " << hadiah << endl;
	
	cout<<"========================================================================================"<<endl<<endl;
	float d;
	
	//switch case
	
		cout << "Masukan nama siswa: ";
	cin >> nama_siswa;
	cout << "Masukan nilai pertandingan I: ";
	cin >> nilai_pertandingan_I;
	cout << "Masukan nilai pertandingan II: ";
	cin >> nilai_pertandingan_II;
	cout << "Masukan nilai pertandingan III: ";
	cin >> nilai_pertandingan_III;
	
	nilai_rata_rata = (nilai_pertandingan_I + nilai_pertandingan_II + nilai_pertandingan_III) / 3;
	
	int nilai_pilihan = nilai_rata_rata >= 70 ? (nilai_rata_rata >= 85 ? 1 : 2) : 3;
	
	switch (nilai_pilihan){
		case 1:
			hadiah = "Komputer core i5";
			break;
		case 2:
			hadiah = "Uang sebesar Rp. 2.500.000";
			break;
		case 3:
			hadiah = "Hiburan";
			break; 	 	
	}
	cout << "Nilai rata-rata " << nama_siswa << " adalah: " << nilai_rata_rata << endl;
	cout << nama_siswa << "Mendapat hadiah: " << hadiah << endl;
}
