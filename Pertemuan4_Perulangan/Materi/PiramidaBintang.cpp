#include <iostream>
using namespace std;

int main() {
    int tinggi=5;
    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++) {
        for (int j = tinggi; j > i+1; j--) {
            cout << " ";
        }
        
        for (int k = 0; k <= i; k++) {
            cout << "* ";
        }
        
        cout << endl; 
    }

    return 0;
}