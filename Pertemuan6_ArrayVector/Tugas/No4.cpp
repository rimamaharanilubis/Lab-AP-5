#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    system("CLS"); 

    vector<int> deret;
    string angka;

    cout<<"Masukkan sebuah deret angka: "<<endl;
    getline(cin, angka);

    stringstream stream(angka); //menggunakan stringstream untuk memproses angka-angka dalam string
    int bil;
    while(stream>>bil){ //memasukkan angka ke dalam vektor
        deret.push_back(bil);
    }

    cout<<"Panjang vektor: "<<deret.size()<<endl; //jumlah angka yang dimasukkan 

    while(!deret.empty()){ //menampilkan angka satu persatu dari vektor 
        cout<<deret.front()<<endl; //menampilkan angka pertama vektor
        deret.erase(deret.begin()); //menghapus angka pertama vektor
    }

    cout<<"Panjang vektor: "<<deret.size()<<endl;

    return 0;
}
