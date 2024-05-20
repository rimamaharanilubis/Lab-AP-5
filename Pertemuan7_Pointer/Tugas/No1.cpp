#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int ganjil[10]; //array yg menyimpan 10 bil ganjil
    int indeks= 0; //menghitung indeks array

    for(int i= 1; i<= 20; i++){ //untuk mencari bil ganjil
        if(i % 2 != 0){ //memeriksa i apakah bil ganjil
            ganjil[indeks]= i; //menyimpannya ke dlm array
            indeks++;
        }
    }
    
    for(int i= 0; i<10; ++i){ //menampilkan bil ganjil dan alamat memori
        cout<<"Bilangan ganjil: "<<ganjil[i]<<", Alamat memori: "<<&ganjil[i]<<endl;
    }
    
    return 0;
}