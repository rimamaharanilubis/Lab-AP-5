#include<iostream>
#define convertkm 0.001
using namespace std;

int main()
{
    system("cls");
    int meter;
    cout<<"Program Convert\n";
    cout<<"Masukkan jarak dalam meter: ";
    cin>>meter;
    cout<<"Jarak dari meter ke dalam kilometer: "<<meter*convertkm<<" kilometer "<<endl;

    return 0;
}