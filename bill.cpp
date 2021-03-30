#include <iostream>
using namespace std;
    int main(){
        int units;
            cout<<"Enter your consumed units";
            cin>>units;
                 if (units <= 300)
                {
                    int cost;
                    cost = ((units*2) + 150);
                    cout<<"your bill is :"<<cost<<endl;
                }
                else if (units <=500)
                {
                    int cost;
                    cost = ((units*5) + 150);
                    cout<<"your bill is :"<<cost<<endl;
                }
                else if (units > 500)
                {
                    int cost;
                    cost = ((units*7) + 150);
                    cout<<"your bill is :"<<cost<<endl;
                }
                 
            
            



        return 0;
    }