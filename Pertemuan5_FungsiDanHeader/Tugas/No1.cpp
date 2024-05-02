#include <iostream>
#include <typeinfo> //Untuk mendapatkan informasi tentang tipe data dari suatu objek
using namespace std;

int inglobal;

//Fungsi FizzBuzz untuk menghasilkan string sesuai aturan FizzBuzz
string FizzBuzz(int angka) {
    string hasil;
    if(angka % 3 == 0 && angka % 5 == 0) {
        hasil= "FizzBuzz";
    } else if (angka % 3 == 0) {
        hasil= "Fizz";
    } else if(angka % 5 == 0) {
        hasil= "Buzz";
    } else {
        hasil= to_string(angka);
    }
    return hasil;
}

//Fungsi untuk menghasilkan deret segitiga dengan implementasi FizzBuzz
string deretsegitiga(int angka) {
    string hasil= "";
    for(int i= 1; i<= angka; i++) {
        int deret= (i * (i + 1));
        hasil += FizzBuzz(deret);
        if(i != angka) {
            hasil += ", ";
        }
        //Jika deret tidak memenuhi aturan FizzBuzz, simpan nilai tersebut ke dalam variabel global
        if(deret % 3 != 0 && deret % 5 != 0) {
            inglobal= deret;
        }
    }
    return hasil;
}

int main() {
    system("CLS"); 

    int angka;

    cout<<"Masukkan sebuah angka: ";
    cin>>angka;

    //Memeriksa apakah angka berada dalam rentang yang valid
    if(angka >= 3 || angka <= 100) {
        cout<< deretsegitiga(angka) << endl;
        //Menampilkan tipe data dari nilai yang tidak memenuhi aturan FizzBuzz
        cout<<"Tipe data "<<inglobal<<" adalah "<<typeid(inglobal).name();
    } else {
        cout<<"Input tidak valid, berikan nilai dengan rentang 3-100"<<endl;
    }

    return 0;
}
