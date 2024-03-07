#include<iostream>
#include<string>
using namespace std;

int main()
{
    system("cls");

    string nama,nim,kom;
    float ipk;
    cout<<"Masukkan Nama: ";
    getline(cin,nama);
    cout<<"Masukkan NIM: ";
    cin>>nim;
    cout<<"Masukkan Kom: "; 
    cin>>kom;
    cout<<"Ipk terakhir: ";
    cin>>ipk;

    cout<<"\nData Mahasiswa\n"<<"\nNama: "<<nama<<"\nNIM: "<<nim<<"\nKom: "<<kom<<"\nIpk: "<<ipk<<endl;

    return 0;
}