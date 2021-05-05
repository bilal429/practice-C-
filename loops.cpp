#include <iostream>
using namespace std;
    int main(){
        int a,i;
        char ch;
        ch = 'B';
        for(int a =4; a >=1; a--)
        {
            for (int i = 1; i <=a; i++)
            {
                cout<<("%c",ch);
                ch++;
            }
            cout<<endl;
        }
        return 0;
    }