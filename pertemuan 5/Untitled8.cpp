#include <iostream>
#include <cstdlib>

int main() {
    char lagi = 'Y';
    while (lagi == 'Y' || lagi == 'y') {
        int a;
        std::cout << "\nmasukan bilangan=";
        std::cin >> a;
        
        int b = a % 2;
        std::cout << "nilai " << a << " & 2 adalah=" << b;
        
        std::cout << "\ningin hitung lagi[Y/T] : ";
        std::cin >> lagi;
    }
    std::cout << "selesai";
    return 0;
}

