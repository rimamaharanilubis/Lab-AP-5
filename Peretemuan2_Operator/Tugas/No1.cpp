#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int I=2,K=7,L=1,C=9,U=5,S=6,Hasil;
    
    Hasil = 3-1<I or K-5<8+2 and L+7>=9+3;
    cout<<"Tampilkan hasil a: "<<Hasil<<endl;

   /*  Manual a: 
    3-1<2 OR 7-5<8+2 AND 1+7>=9+3
    2<2 OR 2<10 AND 8>=12
    False OR False AND True
    False OR False 
    False  */

    Hasil = L%3>U and (C/U<S or 3*I-K>0);
    cout<<"Tampilkan hasil b: "<<Hasil<<endl;

    /* Manual b:
    1%3>5 AND (9/5<6 OR -1>0)
    1%3>5 AND (1<9 OR -1>0)
    1>5 AND (1<6 OR -1>0)
    False AND (True OR True)
    False AND True 
    False */

    Hasil = I-9>K or L+3<4*C;
    cout<<"Tampilkan hasil c: "<<Hasil<<endl;

    /* Manual c:
    2-9>7 OR 1+3<4*9
    -7>7 OR 4<36
    False OR True 
    True  */

    Hasil = I | K & L ^ 3 << 2;
    cout<<"Tampilkan hasil d: "<<Hasil<<endl;

    /* Manual d:
    2 OR 7 AND 1 XOR 3 SHL 2
    2=0010
    7=0111
    1=0001
    3=0011
    0011(3) SHL 0010(2)= 1100(12)
    0111(7) AND 0001(1)= 0001(1)
    0001(1) XOR 1100(12)= 1101(13)
    1101(13) OR  0010(2)= 1111(15) */

    return 0;
}