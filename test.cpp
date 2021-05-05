#include <iostream>
using namespace std;
    int main(){
        int a,b,c;
        cout<<"plese enter 3 number to find smallest number";
        cin>>a>>b>>c;
            if (a < b)
            {
                if (a < c)
                {
                    cout<<a<<" : is smallest number ";

                }
                else
                cout<<c<<":+ is the smallest number";
                
            }
            if (b < a)
            {
                if (b < c)
                {
                    cout<<b<<" : is smallest number";

                }
                else
                    cout<<c<<" : is smallest number";
            
                

                
            }
           
            
            



        return 0;

    }