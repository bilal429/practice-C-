#include <iostream>
using namespace std;
     int main()
    {
        int a,i;
        
    
        for(int a =4; a >=1; a--)
        {
            for (int i = 1; i <=a; i++)
            
            if (a==4)
            {
                 cout<<"*";
            }

            else if (a==3)
            {
                  cout<<"*";

            }
            else if (a==2)
            {
                cout<<i,a+1;

                
            }
            else
            cout<<a+i+1;
            i++;
            
            
                 
                
            
          cout<<endl;
        }
        return 0;
        
     }