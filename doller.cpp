#include <iostream>
using namespace std;
     int main(){
        char a;
         do
        {
           
         int doller;
            cin>>doller;
         float RS;
            
            RS =152.58;
         float convirtion;
            convirtion = doller * RS;
                cout<<"RS :"<<convirtion<<endl; 

         cin>>a;
        } while ((a!='n') && ( a != 'N'));
       
     
         return 0;
     }
     