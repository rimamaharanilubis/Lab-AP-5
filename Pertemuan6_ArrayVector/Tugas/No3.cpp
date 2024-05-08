#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    system("CLS");

    string terinfeksi;

    cout<<"Masukkan string S maksimal 100 karakter huruf kapital ('A'-'Z') dan spasi (' '): "<<endl;//input string yang terinfeksi
    getline(cin, terinfeksi);

    int middle = terinfeksi.length()/2; //mencari posisi tengah string
    string kiri= terinfeksi.substr(0, middle); //string dipisah menjadi dua bagian
    string kanan= terinfeksi.substr(middle); //string dipisah menjadi dua bagian
    reverse(kiri.begin(), kiri.end()); //membalikan setiap karakter bagian kiri 
    reverse(kanan.begin(), kanan.end()); //membalikan setiap karakter bagian kanan
    string asli= kiri + kanan; //menggabungkan kembali kedua bagian yang telah dibalik 

    cout<<"String yang telah diperbaiki: "<<endl<<asli;

    return 0;
}