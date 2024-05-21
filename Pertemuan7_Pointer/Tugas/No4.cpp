#include <iostream>
using namespace std;

void tambah(float *bil1, float *bil2){
    cout<<"Hasil pertambahan: "<<(*bil1 + *bil2)<<endl;
}
    
void kurang(float *bil1, float *bil2){
    cout<<"Hasil pengurangan: "<<(*bil1 - *bil2)<<endl;
}
    
void kali(float *bil1, float *bil2){
    cout<<"Hasil perkalian: "<<(*bil1 * *bil2)<<endl;
}
    
void bagi(float *bil1, float *bil2){
    if(*bil2 != 0){
        cout<<"Hasil pembagian: "<<(*bil1 / *bil2)<<endl;
        } else {
            cout<<"Pembagi tidak boleh nol."<<endl;
        }
}

int main() {
    system("CLS");

    float bil1, bil2; //menyimpan dua bilangan
    char operasi; //menyimpan operasi aritmatika

    cout<<"Masukkan Operasi (+, -, *, /): ";
    cin>>operasi;

    cout<<"Masukkan dua angka: ";
    cin>>bil1>>bil2;

    //memilih oeparasi yang diinginkan
    switch(operasi){
        case '+':
            tambah(&bil1,&bil2);
            break;
        case '-':
            kurang(&bil1,&bil2);
            break;
        case '*':
            kali(&bil1,&bil2);
            break;
        case '/':
            bagi(&bil1,&bil2);
            break;
        default:
        cout<<"Operasi tidak valid!"<<endl;
    } 

    return 0;
}