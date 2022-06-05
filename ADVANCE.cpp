/*
Chef's current rating is X, and he wants to improve it. 
It is generally recommended that a person with rating X should solve problems whose difficulty lies in the range [X,X+200], 
i.e, problems whose difficulty is at least X and at most X+200.
You find out that Chef is currently solving problems with a difficulty of Y.
Is Chef following the recommended practice or not?

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of a single line of input, containing two space-separated integers X,Y.

Output Format :
For each test case, output on a new line YES if Chef is following the recommended practice style, and NO otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings YES, yEs, and Yes will be considered identical.

Constraints :
1≤T≤100
1≤X,Y≤4000

Sample Input 1 :
5
1300 1500
1201 1402
300 4000
723 805
1330 512

Sample Output 1 :
YES
NO
NO
YES
NO

Explanation :
Test case 1: Chef's current rating is 1300, so he should solve problems with difficulty lying in [1300,1500]. 
Since 1500 lies in [1300,1500], Chef is doing his practice in a recommended way :)

Test case 2: Chef's current rating is 1201, so he should solve problems with difficulty lying in [1201,1401]. 
Since 1402 does not lie in [1201,1401], Chef is not doing his practice in a recommended way :(

Test case 3: Chef's current rating is 300, so he should solve problems with difficulty lying in [300,500]. 
Since 4000 does not lie in [300,500], Chef is not doing his practice in a recommended way :(

Test case 4: Chef's current rating is 723, so he should solve problems with difficulty lying in [723,923]. 
Since 805 lies in [723,923], Chef is doing his practice in a recommended way :)

Test case 5: Chef's current rating is 1330, so he should solve problems with difficulty lying in [1330,1530]. 
Since 512 does not lie in [1330,1530], Chef is not doing his practice in a recommended way :(
*/

#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll X_ratings = 0, Y_ratings = 0;
        cin >> X_ratings >> Y_ratings;
        
        if(Y_ratings >= X_ratings && Y_ratings <= X_ratings + 200)
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
