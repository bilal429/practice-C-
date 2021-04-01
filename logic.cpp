#include <iostream>
using namespace std;
    int main(){
         char ch;
         cout<<"Enter a checter from keyboard to find what is it :";
         cin>>ch;
            if ((ch >= 'A') && ( ch <= 'Z'))
            {
                cout<<ch<<" : Enter upper case latter ";
            }
            else if ((ch >='a') && ( ch <= 'z'))
            {
                cout<<ch<<" :Enter lower case latter";
            }
            else if((ch >= '0') && ( ch <='9'))
            {
                cout<<ch<<" : Eenter a numaric cherecter ";
            }
            else
            cout<<ch<<" : enter a special cheracter";

            


        return 0;
    }