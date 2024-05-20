#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char kata[] = "K O M P U T E R"; //deklarasi dan inisialisasi string
    char *ptr; //deklarasi pointer 

    ptr = kata; //pointer menunjuk ke awal string
    ptr += 8; //menunjuk huruf ke 5 (spasi juga dihitung)

    cout<<"Huruf kelima dari kata 'K O M P U T E R' adalah: "<<*ptr<<endl;

    return 0;
}

