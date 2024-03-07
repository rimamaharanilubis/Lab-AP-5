#include<iostream>
#include<string>
using namespace std;

int main() 
{
    system ("cls");

    string nama;
    cout<<"Getline\n";
    cout<<"Masukkan nama: ";
    getline(cin,nama); // menampung satu baris yang diinput
    cout<<"Nama yang diinput: "<<nama<<endl;

    cout<<"Cin\n";
    cout<<"Masukkan nama: ";
    cin>>nama; // hanya bisa membaca satu kata
    cout<<"Nama yang diinput: "<<nama<<endl;

    return 0;
}