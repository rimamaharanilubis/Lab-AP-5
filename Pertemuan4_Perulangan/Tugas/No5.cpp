#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bil;
    bool hasil;

    cout<<"Masukkan sebuah bilangan: ";
    cin>>bil;


    if(bil <= 1) {
        hasil = false;
    }
    for(int i = 2; i <= bil/2; ++i) {
        if(bil % i == 0){
            hasil= false;  
        } else {
            hasil= true;
        }
    }
    
    if(hasil) {
        cout<<"Prima";
    } else { 
        cout<<"Bukan Prima";
    }
    
    return 0;
}