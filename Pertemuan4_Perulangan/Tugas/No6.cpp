#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bil;
    cout<<"Masukkan sebuah bilangan kuadrat: ";
    cin>>bil;

    int kuadrat= 0;
    for(int i= 2; i<= bil; i+= 2) {
        kuadrat += i * i;
    }

    cout<<"Hasil: "<<kuadrat<<endl;

    return 0;
}