#include <iostream>
using namespace std;
 int   main(){
        int a;
        int b;
        b = 1;
        cout<<"enter a number for table";
        cin>>a;
            while (b<=10)
            {
                cout<< a <<"*"<<b<<"="<<a*b<<endl;
                b=b+1;
            }
            
        return 0;

    }