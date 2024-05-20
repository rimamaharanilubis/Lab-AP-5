#include <iostream>
using namespace std;

int main() {
    system("CLS"); 

    int x, *px; 
    x= 25;     

    px= &x;  //menginisialisasi px pada alamat memori dari x
    *px= x;  //mengatur nilai di alamat yang ditunjuk oleh px pada nilai x

    cout<<"Alamat memori pada px: "<<px<<endl;
    cout<<"Nilai px(*px): "<<*px<<endl;

    return 0;
}
