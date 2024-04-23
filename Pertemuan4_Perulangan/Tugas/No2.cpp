#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int tahun,awal,interval;

    cout<<"Masukkan tahun awal: ";
    cin>>awal;
    cout<<endl<<"Masukkan interval tahun: ";
    cin>>interval;
    tahun = awal;

    for (int i = 0; i <= interval; i++)
    {
        if (tahun % 4 == 0)
        {
            cout<<endl<<tahun<<" adalah tahun kabisat ";
        } else
        {
            cout<<endl<<tahun<<" bukan tahun kabisat ";
        }        
    tahun++;
    }
    

    return 0;
}