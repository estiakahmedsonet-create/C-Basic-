#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A,B,C,M;

    cin>>A>>B>>C;

    A=A*2;
    B=B*3;
    C=C*5;

    M=(A+B+C)/(2+3+5);

    cout<<fixed;
    cout<<setprecision(1);
    cout<<"MEDIA = "<<M<<endl;

    return 0;
}
