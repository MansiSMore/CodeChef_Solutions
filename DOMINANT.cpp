/*
In the medieval age, there were 3 kingdoms A, B, and C. The army of these kingdom had NA, NB, and NC soldiers respectively.
You are given that an army with X soldiers can defeat an army with Y soldiers only if X>Y.
An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom C's army will be dominant only if NC>NA+NB.
Determine whether any of the armies is dominant or not.

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers NA, NB, and NC - the number of warriors in the armies of kingdoms A, B, and C respectively.

Output Format :
For each test case, output YES if any of the armies is dominant. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1≤T≤1000
1≤NA,NB,NC≤100

Sample Input 1 :
4
15 5 6
12 13 16
1 1 100
10 10 20

Sample Output 1 :
YES
NO
YES
NO

Explanation :
Test case 1: The kingdom A's army is dominant since 15>5+6.

Test case 2: We can observe that none of the armies is dominant.

Test case 3: The kingdom C's army is dominant since 100>1+1.

Test case 4: We can observe that none of the armies is dominant. Note that the kingdom C's army is not dominant since 20≤10+10.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int Na_army = 0, Nb_army = 0, Nc_army = 0;
        cin >> Na_army >> Nb_army >> Nc_army;
        
        if(Na_army > Nb_army + Nc_army || Nb_army > Na_army + Nc_army || Nc_army > Nb_army + Na_army)
        {
            cout << "Yes\n";   
        }
        else
        {
            cout << "No\n";
        }
    }
	return 0;
}
