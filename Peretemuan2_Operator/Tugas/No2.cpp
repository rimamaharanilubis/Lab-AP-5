#include <iostream>
#include <cmath>//untuk pengakaran
using namespace std; 

main ()
{
    int a,b,c;
    cout<<"Ax^2+Bx+C=0 "<<endl;
    cout<<"Masukkan nilai A: ";
    cin>>a;
    cout<<"Masukkan nilai B: ";
    cin>>b;
    cout<<"Masukkan nilai C: ";
    cin>>c;
    cout<<a<<"x^2+";

    double x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    double x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    
    cout<<endl<<"Nilai x1 adalah = "<<x1<<endl;
    cout<<"Nilai x2 adalah = "<<x2<<endl;

    return 0;

}