#include <iostream>
using namespace std;
    int main(){
        cout<<"Enter your grade";
        float grade;
        cin>>grade;
        if (grade > 90)
        {
            cout<<"your grade is A";
        }
        else if (grade >= 80)
        {
            cout<<"your grade is B";
        }
        else if (grade >= 70)
        {
            cout<<"your grade is C";
        }
        else if (grade >= 60)
        {
            cout<<"your grade is D";
        }
        else
        {
            cout<<"your grade is F";

        } 




        return 0;
    }