#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int angka;
    bool prima= true;

    cout<<"Masukkan suatu bilangan bulat: ";
    cin>>angka;

    if(angka<= 2) {
        prima= false;
    } else {
         for(int i= 2; i<= angka/2; i++) {
            if(angka % i == 0) {
                prima= false;
                continue;
            }
        }
    }

    if(prima) {
        cout<<"adalah bilangan prima"<<endl;
    } else {
        cout<<"bukan bilangan prima"<<endl;
    }

    return 0;
}