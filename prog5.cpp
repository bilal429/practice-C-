#include <iostream>
using namespace std;
int main()
{
        int sp, r;
        r=4;

        
        

        for(int i = 1, k = 0; i <= r; ++i, k = 0)
        {
            for(sp = 1; sp <= r-i; ++sp)
            {
                cout <<"  ";
            }

            while(k != 2*i-1)
            {
            cout << "* ";
            ++k;
            }
            cout << endl;
        }    
    return 0;
}

    