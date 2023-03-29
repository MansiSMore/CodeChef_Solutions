/*
https://www.codechef.com/START83D/problems/BUDTECH
*/
#include <iostream>
using namespace std;

int main() {
	int T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        int R_rupees = 0;
        cin >> R_rupees;
        
        R_rupees *= 1000;
        
        cout << R_rupees / 10 << endl;
    }
	return 0;
}
