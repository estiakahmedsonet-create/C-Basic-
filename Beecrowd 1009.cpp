#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char name[100];
    double salary,sell,total;

    cin>>name;
    cin>>salary>>sell;

    sell= sell*15/100;
    total= salary+sell;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<"TOTAL = R$ "<<total<<endl;





    return 0;
}
