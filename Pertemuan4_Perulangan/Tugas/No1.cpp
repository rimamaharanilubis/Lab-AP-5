#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int n,i;
    cout<<"Masukkan jumlah bilangan deret: ";
    cin>>n;

    int bil=1; 
    for (i=1; i<=n; i++) {
        cout<<bil<<" ";
        if (i%2 == 1){
            bil += 5; //ditambahkan 5(ganjil)
        } else {
            bil += 3; //ditambahkan 3(genap)
        } 
    }
    
    return 0;
}