#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;
    string hasil;

    cout<<"Umur kamu berapa:";
    cin>>umur;

    hasil = (umur > 1000) ? "Kamu bukan manusia": "Kamu mungkin manusia";

    cout<<hasil<<endl;

    
    return 0;
}