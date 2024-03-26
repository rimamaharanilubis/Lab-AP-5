#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bilangan;

    cout<<"Masukkan sebuah bilangan: ";
    cin>> bilangan;

    if (bilangan % 2 == 0) {
        cout<<bilangan<< " Adalah bilangan genap." <<endl;
    } else {
        cout<<bilangan<<" Adalah bilangan ganjil." <<endl;
    }
    
    return 0;
}