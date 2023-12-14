#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    char jenis_pot[5];
    int i, jenis, banyak_pot[5], hrg_1[5], pajak;
    long int jum[10], jum_byr = 0, tot_byr;

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------" << endl;
    cout << "Kode\tJenis\tHarga" << endl;
    cout << "-------------------------" << endl;
    cout << "  D\tDada\tRp. 2500" << endl;
    cout << "  P\tPaha\tRp. 2000" << endl;
    cout << "  S\tSayap\tRp. 1500" << endl;
    cout << "-------------------------" << endl;
    cout << "Banyak Jenis [1..3]:";
    cin >> jenis;
    cout << endl;

    for (i = 1; i <= jenis; i++)
    {
        cout << "Jenis ke-" << i << endl;
        cout << "Jenis Potong [D/P/S]\t:";
        cin >> jenis_pot[i];
        cout << "Banyak Potong\t\t:";
        cin >> banyak_pot[i];
        cout << endl;

        if (jenis_pot[i] == 'D')
        {
            hrg_1[i] = 2500;
        }
        else if (jenis_pot[i] == 'P')
        {
            hrg_1[i] = 2000;
        }
        else
        {
            hrg_1[i] = 1500;
        }

        jum[i] = hrg_1[i] * banyak_pot[i];
        jum_byr += jum[i];
    }

    cout << "\t\t\tGEROBAK FRIED CHICKEN" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "No.\tJenis Potong\tHarga Satuan\tBanyak Beli\tJumlah Harga" << endl;
    cout << "--------------------------------------------------------------------" << endl;

    for (i = 1; i <= jenis; i++)
    {
        cout << i << setw(14) << jenis_pot[i] << setw(13) << hrg_1[i] << setw(13) << banyak_pot[i] << setw(13) << " 	Rp " << jum[i] << endl;
    }

    cout << "--------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tJumlah Bayar\tRp " << jum_byr << endl;

    pajak = jum_byr * 10 / 100;
    cout << "\t\t\t\t\tPajak 10%\tRp " << pajak << endl;

    tot_byr = jum_byr + pajak;
    cout << "\t\t\t\t\tTotal Bayar\tRp " << tot_byr << endl;

    return 0;
}

