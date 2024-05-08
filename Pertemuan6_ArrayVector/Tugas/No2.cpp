#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//menghitung efisensi berdasarkan nilai A,B,C
float rumusEfisiensi(int A, int B, int C){
    return sqrt((A * A) + (B * B) + (C * C));
}

int main() {
    system("CLS"); 

    int angka[3][3];

    cout<<"Masukkan efisiensi dari tabel 3x3: "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>angka[i][j];
        }
    }

    //mencari nilai efisiensi tertinggi
    double maxEfisiensi= 0;
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<3; ++k){
                if(i != j && j != k && i != k){ 
                    double efisiensi= rumusEfisiensi(angka[0][i], angka[1][j], angka[2][k]);
                    if(efisiensi > maxEfisiensi){ //memperbarui nilai efisiensi tertinggi jika efisiensi saat ini lebih besar
                        maxEfisiensi= efisiensi;
                    }
                }
            }
        }
    }


    cout<<fixed<<setprecision(1); //menampilkan nilai dengan satu angka dibelakang koma
    cout<<"Nilai efisiensi: "<<maxEfisiensi<<endl;

    return 0;
}
