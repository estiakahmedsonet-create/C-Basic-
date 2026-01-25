#include<iostream>
using namespace std;

 int main(){

     int scores1,scores2,media;

     while(1){
        cin>>scores1>>scores2;

        if(0<scores1<=10 && 0<scores2<=10)
        {
            media=scores1+scores2/2;

            cout<<"media = "<<endl;

            break;

        }

        else {

            cout<<"nota invalida"<<endl;
        }
     }

        return 0;
 }


