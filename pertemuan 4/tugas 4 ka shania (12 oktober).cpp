#include <iostream>
using namespace std;

int main() {
    int row = 6; 
    int m, n;

    for(m = 1; m <= row; m++) {
        for(n = m; n <= row; n++) {
            cout << "* ";
        }
        for(n = 1; n <= (2 * m - 2); n++) {
            cout << "  ";
        }
        for(n = m; n <= row; n++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(m = 1; m <= row; m++) {
        for(n = 1; n <= m; n++) {
            cout << "* ";
        }
        for(n = (2 * m - 2); n < (2 * row - 2); n++) {
            cout << "  ";
        }
        for(n = 1; n <= m; n++) {
            cout << "* ";
        }
        cout << endl;
    }
}

