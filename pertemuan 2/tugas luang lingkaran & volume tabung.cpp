#include <iostream>
using namespace std;

int main(){
	float a;
 	float phi = 3.14;
	float L, r;  
	
	cout<<"Menghitung Luas Lingkaran a "<<endl;
	cout<<"Masukan Luas a = ";
	cin>>r;
	L = phi * r * r;
	cout<<"diketahui lingkaran dengan... "<<endl;
	cout<<"phi \t= "<<phi<<endl;
	cout<<"r \t = "<<r<<endl;
	cout<<"rumus = (3.14 x r x r)"<<endl;
	cout<<"jadi..."<<endl;
	cout<<"luas lingkaran "<<r<<" cm"<<" adalah "; 
	cout<<L<<" cm2"<<endl<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"=============================================================="<<endl<<endl;
	float b;
 
	cout<<"Menghitung Luas Lingkaran b "<<endl<<endl;
	cout<<"Masukan Luas b = ";
	cin>>r;
	L = phi * r * r;
	cout<<"mengetahui lingkaran... "<<endl<<endl;
	cout<<"phi \t= "<<phi<<endl;
	cout<<"r \t = "<<r<<endl;
	cout<<"3.14 x r x r"<<endl<<endl;
	cout<<"total akhir"<<endl;
	cout<<"hasil luas lingkaran dari "<<r<<" cm"<<" yaitu "; 
	cout<<L<<" cm2"<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"=============================================================="<<endl<<endl;
	float c;
	
 	float rusuk, tinggi, luas, volume;
 	
 	cout << "Volume tabung a \n \n";
 	cout << "luas permukaan dan volume tabung \n";
 	cout<<"masukan rusuk : " ; cin >> rusuk;
 	cout<<"masukan tinggi : " ; cin >> tinggi;
 	cout <<endl << "diketahui rusuk : " <<rusuk <<endl;
 	cout << "diketahui tinggi : " <<tinggi <<endl;
 	cout << "rumus =  2 x phi x rusuk x (rusuk+tinggi)" <<endl;
 	cout << "rumus = 2 x 3,14 x " <<rusuk <<" x " <<rusuk <<" x " <<tinggi<<endl<<endl;
 	cout << "hasilnya adalah...";
 	luas = 2 * phi * rusuk * (rusuk + tinggi);
 	cout<< " \n luas permukaan : " << luas;
 	volume = phi * rusuk * rusuk * tinggi;
 	cout<< " \n volume : " <<volume<<endl;
 	cout<<"=============================================================="<<endl;
 	cout<<"=============================================================="<<endl<<endl;
 	float d;
 	
	 cout <<"Volume tabung b \n \n";
	cout <<"luas permukaan dan volume tabung \n";
	cout <<"masukan tinggi : " ; cin >> tinggi;
	cout <<"masukan rusuk : " ; cin >> rusuk;
	cout <<endl << "diketahui rusuk : " <<rusuk<<endl;
	cout <<"diketahui tinggi : " <<tinggi<<endl;
	cout <<"rumus = 2 x 3.14 x " << rusuk << " x " << rusuk << " x " <<tinggi;
	luas = 2 * 3.14 * rusuk * (rusuk+tinggi);
	cout << " \n luas permukaan : " << luas;
	volume = phi * rusuk * rusuk * tinggi;
	cout << "\n volume : " <<volume;
	
}



