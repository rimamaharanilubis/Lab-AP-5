#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    string kalimat;
    char huruf;

    cout<<"Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout<<"Masukkan sebuah huruf yang ingin dihapus: ";
    cin>>huruf;
    
    int hapus;
    for(char c: kalimat ) {
        if (c != tolower(huruf) && c != toupper(huruf)) { //tolower= mengubah kalimat menjadi huruf kecil. toupper= mengubah kalimat menjadi huruf besar.
            cout<<c;
        } else {
            hapus += 1;
        }
      }

    cout<<endl;
    cout<<endl<<"Karakter terhapus= "<<hapus;

    return 0;
}