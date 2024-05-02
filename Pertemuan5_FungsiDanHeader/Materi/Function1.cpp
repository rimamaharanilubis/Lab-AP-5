#include <iostream>
using namespace std;

//Variabel Global
int num3= 10;

int sumNumber(int num1, int num2 = 10){
    //int num3= 10;
    //Variabel Lokal 
    return num1 + num2 + num3;
}

int main() {
    system("CLS");
    
    cout<<num3<<endl;

    int hasil= sumNumber(5);

    cout<<"Hasil= "<<hasil;
    
    return 0;
}


//Build-In Function
//User Defined Function