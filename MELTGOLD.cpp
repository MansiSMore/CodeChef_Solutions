/*
https://www.codechef.com/START84D/problems/MELTGOLD
*/
#include <iostream>
using namespace std;

int main() {

    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_melting = 0, Y_initial = 0;
        cin >> X_melting >> Y_initial;
        
        int i = 1, temp = 0;
        while(1)
        {
            if(X_melting <= Y_initial)
            {
                break;
            }
            Y_initial += i;
            i++;
            temp++;
        }
        
        cout << temp << endl;
    }
    return 0;
}
