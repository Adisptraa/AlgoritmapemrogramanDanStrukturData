#include <iostream>
using namespace std;
int main()
{
	int k, i=0;
	
	for (k=1; k<=20; k++){
		if(k % 2 == 0){
			cout << k << "+";
			i+=10;
		}
	}
	cout << "=" << i;
}
