#include <iostream>
using namespace std; 

int main ()
{
    system("CLS");
    float bb, tinggi, tinggim, bmi;
    cout<<"Masukkan berat badan anda (KG): ";
    cin>>bb;
    cout<<"Masukkan tinggi badan anda (CM): ";
    cin>>tinggi;

    tinggim = tinggi/100;
    bmi = bb / (tinggim*tinggim);

    if (bmi <=18.5) 
    {
        cout<<"Bmi anda: "<<bmi<<endl<<"Kategori berat badan: Berat badan kurang"<<endl;
    }
    else if (bmi >=18.5 && bmi <=25)
    {
        cout<<"Bmi anda: "<<bmi<<endl<<"Kategori berat badan: Berat badan normal"<<endl; 
    }
    else if (bmi >=25 && bmi <=30)
    {
        cout<<"Bmi anda: "<<bmi<<endl<<"Kategori berat badan: Berat badan berlebihan"<<endl;
    }
    else 
    {
        cout<<"Bmi anda: "<<bmi<<endl<<"Kategori berat badan: Obesitas"<<endl;
    }

    return 0;
}