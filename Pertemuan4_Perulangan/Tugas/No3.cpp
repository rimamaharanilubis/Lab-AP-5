#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tahun, interval;
    bool kabisat;

    cout<<"Masukkan tahun: ";
    cin>>tahun;
    cout<<"Masukkan interval: ";
    cin>>interval;

    //memeriksa apakah input tahun dan interval valid
    if(tahun >= 1000 && tahun <= 9000 && interval >= (-tahun) && interval <= (9999 - tahun)) {
        //memeriksa apakah interval positif atau negatif
        if(interval > 0) {
            //loop untuk tahun-tahun maju
            for(int i= 0; i<= interval; i++) {
                int tahun_saat_ini = tahun + i;
                //memeriksa apakah tahun saat ini kabisat atau tidak
                if((tahun_saat_ini % 4 == 0 && tahun_saat_ini % 100 != 0) || (tahun_saat_ini % 400 == 0)) {
                    cout<<tahun_saat_ini<<" kabisat"<<endl;
                } else {
                    cout<<tahun_saat_ini<<" bukan kabisat"<<endl;
                }
            }
        } else {
            //loop untuk tahun-tahun mundur
            for(int i= 0; i>= interval; i--) {
                int tahun_saat_ini = tahun + i;
                //memeriksa apakah tahun saat ini kabisat atau tidak
                if((tahun_saat_ini % 4 == 0 && tahun_saat_ini % 100 != 0) || (tahun_saat_ini % 400 == 0)) {
                    cout<<tahun_saat_ini<<" kabisat"<<endl;
                } else {
                    cout<<tahun_saat_ini<<" bukan kabisat"<<endl;
                }
            }
        }
    } else {
        //menampilkan pesan kesalahan jika input tidak valid
        cout<<"Input tidak valid."<<endl;
    }

    return 0;
}