#include <iostream>
using namespace std;

struct mhs {
  char nama[20], nim[10], matkul[15];
  int sks;
};

int main() {
  int bts, var, tetap;
  mhs bayar[1];

  for (int i = 0; i < 1; i++) {
    cout << "\n\nNama mhs: ";
    cin >> bayar[i].nama;
    cout << "NIM: ";
    cin >> bayar[i].nim;
    cout << "Mata kuliah: ";
    cin >> bayar[i].matkul;
    cout << "Jumlah SKS: ";
    cin >> bayar[i].sks;
  }

  tetap = 100000;

  for (int i = 0; i < 1; i++) {
    var = bayar[i].sks * 2000;
  }

  for (int i = 0; i < 1; i++) {
    cout << "\nNama mhs: " << bayar[i].nama;
    cout << "\nNIM: " << bayar[i].nim;
    cout << "\nMata kuliah: " << bayar[i].matkul;
    cout << "\nJumlah SKS: " << bayar[i].sks;
    cout << "\nSPP tetap: Rp" << tetap;
    cout << "\nSPP variabel: Rp" << var;
  }

  return 0;
}
