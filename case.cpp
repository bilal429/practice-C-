#include <iostream>
using namespace std;
    int main(){
        char ch;
        cout<<"Enter latter to find wather it is vowel or constant";
        cin>>ch;
        switch (ch)
        {
        case 'a':
        case 'A':
            cout<<ch<<" : is vowel";
            break;

        case 'e':
        case 'E':
            cout<<ch<<": is vowel";
            break;
        case 'i':
        case 'I':
            cout<<ch<<": is vowel";
            break;
        case 'o':
        case 'O':
            cout<<ch<<": is vowel";
            break;
         case 'u':
         case 'U':
            cout<<ch<<" : is vowel";       
        default:
            cout<<"not vowel";
            break;
        }

        return 0;
    }
    