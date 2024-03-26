#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    string Nama;
    int Golongan,JumlahAnak; 
    long GajiBersih,p,q,pajak;
    
    cout<<"Masukkan Nama Anda: ";
    getline(cin, Nama);
    cout<<"Masukkan Golongan (1/2/3): "; 
    cin>>Golongan;
    cout<<"Masukkan Jumlah Anak: ";
    cin>>JumlahAnak;

    if (Golongan == 1) { 
        p = 5000000;
    } else if (Golongan == 2) { 
        p = 3000000;
    } else {
        p = 2500000;
    }

    if (JumlahAnak >= 1 && JumlahAnak <= 2) { 
        q = 500000*JumlahAnak;
    } else if (JumlahAnak > 2) { 
        q = 750000*JumlahAnak;
    } else { 
        q = 0;
    }

    pajak = 0.95 * p;
    GajiBersih = pajak + q;
    cout << "Gaji Total: " << GajiBersih << endl;
    
    return 0;
}