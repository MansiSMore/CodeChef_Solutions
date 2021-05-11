/*
The office where the Chef works, has two guards who count how many times a person enters into the office building. 
Though the duty of a guard is 24 hours in a day, sometimes they fall asleep during their duty and do not track the entry of a person in the office building. 
But one good thing is that they never fall asleep at the same time. At least one of them remains awake and counts who enters into the office.
Now the boss of Chef wants to calculate how many times the Chef has entered into the building. 
The boss asked to the guard and they gave him two integers A and B, the count of first guard and second guard respectively.
Help the boss to count the minimum and maximum number of times Chef could have entered into the office building.

Input :
The first line of the input contains an integer T denoting the number of test cases. The description of the T test cases follows.
Each test case consists of a line containing two space separated integers A and B.

Output :
For each test case, output a single line containing two space separated integers, the minimum and maximum number of times Chef could have entered into the office building.

Constraints :
1 ≤ T ≤ 100
0 ≤ A, B ≤ 1000000

Example
Input :
1
19 17

Output :
19 36

*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int A = 0, B = 0;
        cin >> A;
        cin >> B;
        
        cout << max(A, B) << " " << A + B << endl;
    }
	return 0;
}
