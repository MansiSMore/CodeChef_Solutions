/*
https://www.codechef.com/START83D/problems/CHEFEREN
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        int N_episodes = 0, A_minutes = 0, B_minutes = 0;
        cin >> N_episodes >> A_minutes >> B_minutes;
        
        int half = N_episodes / 2;
        if(N_episodes % 2 == 0)
        {
            cout << half * A_minutes + half * B_minutes << endl;
        }
        else
        {
            cout << half * A_minutes + (half + 1) * B_minutes << endl;
        }   
    }
	return 0;
}
