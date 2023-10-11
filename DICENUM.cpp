/*
https://www.codechef.com/START103D/problems/DICENUM
*/

#include <iostream>
using namespace std;

#define ll long long

int num_gen(int no1, int no2, int no3)
{
    int num = 0;
    if(no1 >= no2 && no1 >= no3)
    {
        if(no2 >= no3)
        {
            num = no1 * 100 + no2 * 10 + no3;
        }
        else
        {
            num = no1 * 100 + no3 * 10 + no2;
        }
    }
    else if(no2 >= no1 && no2 >= no3)
    {
        if(no1 >= no3)
        {
            num = no2 * 100 + no1 * 10 + no3;
        }
        else
        {
            num = no2 * 100 + no3 * 10 + no1;
        }
    }
    else
    {
        if(no2 >= no1)
        {
            num = no3 * 100 + no2 * 10 + no1;
        }
        else
        {
            num = no3 * 100 + no1 * 10 + no2;
        }
    }
    return num;
}
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int Alice_1 = 0, Alice_2 = 0, Alice_3 = 0, Bob_1 = 0, Bob_2 = 0, Bob_3 = 0;
        cin >> Alice_1 >> Alice_2 >> Alice_3 >> Bob_1 >> Bob_2 >> Bob_3;
        int temp1 = num_gen(Alice_1, Alice_2, Alice_3);
        int temp2 = num_gen(Bob_1, Bob_2, Bob_3);
        
        if(temp1 > temp2)
        {
            cout << "Alice\n";
        }
        else if(temp1 < temp2)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Tie\n";
        }
    }
	return 0;
}
