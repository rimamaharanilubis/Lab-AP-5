#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x=5;

    while(x>0){
        cout<<"Hello Word "<<x<<endl;
        x--;
    }

    int angka;

    cout<<"Masukkan angka:";
    cin>>angka;

    while(angka<0 || angka>10){
        cout<<"Inputan anda tidak valid,silahkan ulangi lagi\n";
        cout<<"Masukkan angka:";
    }
    
    return 0;
}