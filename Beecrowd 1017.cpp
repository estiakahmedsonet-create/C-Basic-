#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int time,speed;
    double distance,fuel;

    cin>>time>>speed;

    distance=time*speed;
    fuel=distance/12;

    cout<<fixed;
    cout<<setprecision(3);
    cout<<fuel<<endl;







    return 0;
}
