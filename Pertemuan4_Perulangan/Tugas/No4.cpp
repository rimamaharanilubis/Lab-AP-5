#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int n;
    string suara= "Hore!";

    cout<<"Masukkan sebuah nilai: ";
    cin>>n;
    
    if(n>= 1 && n<= 10000)
    for(char c: suara) {
            if (c == 'o' || c == 'e' || c == '!') {
                for(int i= 0; i<n; ++i) {
                    cout<<c;
                }
            } else {
                cout<<c;
            }
    }

    cout<<endl;
    
    return 0;
}