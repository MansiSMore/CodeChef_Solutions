/*
https://www.codechef.com/START84D/problems/ELECTN
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_people = 0, X_age = 0;
        cin >> N_people >> X_age;
        
        int arr[N_people], cnt = 0;
        for(int i = 0; i < N_people; i++)
        {
            cin >> arr[i];
            if(arr[i] >= X_age)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}
