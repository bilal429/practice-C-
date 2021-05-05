#include <iostream>
using namespace std;
    int main(){
        int a,b,c,d = 1;
        cout<<"Enter a number :";
        cin>>a;
        cout<<"Product Components of"<< a <<"are"<<endl;
        for ( b = a; b >= d; b--)
        
            for ( c = 1; c<= a; c++)
            {
                if (b * c == a)
                {
                    cout<<b<<"*"<<c<<endl;
                    
                }
                
            }
            
        return 0;
        
    }