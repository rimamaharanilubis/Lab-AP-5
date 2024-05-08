#include <iostream>
using namespace std;

//menghitung nilai kombinasi dari x dan y
int nilaiKombinasi(int x, int y){
    if(y == 1 || y == x) //jika y=1 atau y=x, maka hasilnya adalah 1
        return 1;
    return nilaiKombinasi(x - 1, y - 1) + nilaiKombinasi(x - 1, y); //menggunakan rekursi untuk menghitung niali kombinasi
}

int main() {
    system("CLS");

    int tinggi;

    cout<<"Masukkan tinggi segitiga pascal: ";
    cin>>tinggi;

    //membuat segitiga pascal dengan tinggi yang dimasukkan
    for(int i=1; i<=tinggi; i++){
        for(int j=1; j<=tinggi-i; j++){ //mencetak spasi untuk membuat bentuk segitiga
            cout<<" ";
        }
        for(int j=1; j<=i; j++){ //menghitung dan mencetak nilai kombinasi untuk setiap baris
            cout<<nilaiKombinasi(i, j)<<" ";
        }
        cout<<endl;
    }

    int x, y;
    cout<<"Masukkan dua buah bilangan x dan y, yang merupakan index (1 <= x, y <= 30 | y <= x ): ";
    cin>>x>>y;

    if(x < 1 || x > 30 || y < 1 || y > x) { //memeriksa validitas input
        cout<<"tidak valid. masukkan bilangan dengan index (1 <= x, y <= 30 | y <= x )"<<endl;
        return 1; 
    }

    int hasil= nilaiKombinasi(x, y);
    cout<<"Nilai pada Indeks [" << x << "][" << y << "]= "<<hasil<<endl;

    return 0;
}
