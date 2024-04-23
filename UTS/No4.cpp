#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int tinggi, spasi, bintang;

    cout << "Masukkan tinggi diamond (ganjil): ";
    cin >> tinggi;

    while (tinggi % 2 == 0) {
        cout << "Tinggi ganjil. Masukkan tinggi diamond (harus ganjil): ";
        cin >> tinggi;
    }

    for(int i= 1; i<= tinggi; i+= 2) {
        for(spasi= 1; spasi<= (tinggi - i)/2; spasi++) {
            cout<< "  ";
        }
        for(bintang= 1; bintang<= i; bintang++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i= tinggi - 2; i>= 1; i-= 2) {
        for(spasi= 1; spasi<= (tinggi - i)/2; spasi++) {
            cout<<"  ";
        }
        for(bintang= 1; bintang<= i; bintang++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}