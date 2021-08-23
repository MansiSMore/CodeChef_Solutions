/*
Ash is trying to get visa to Chefland. For the visa to be approved, he needs to satisfy the following three criteria:
Solve at least x1 problems on Codechef.
Have at least y1 current rating on Codechef.
Make his last submission at most z1 months ago.
You are given the number of problems solved by Chef (x2), his current rating (y2) and the information that he made his last submission z2 months ago. 
Determine whether he will get the visa.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers x1, x2, y1, y2, z1 and z2.

Output :
For each test case, print a single line containing the string "YES" if Chef will get the visa or "NO" if he will not.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints :
1≤T≤5,000
20≤x1,x2≤50
1,900≤y1,y2≤2,100
1≤z1,z2≤6

Example Input :
4
20 50 2100 1900 6 6
50 20 1900 1900 5 5
20 20 1900 1900 1 6
27 27 1920 1920 3 3

Example Output :
NO
NO
NO
YES

Explanation
Example case 1: Chef's rating is less than the minimum required rating.
Example case 2: Chef has solved a smaller number of problems than the minimum required number.
Example case 3: Chef's last submission was made before the allowed period.
Example case 4: All three conditions are met.

*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0, z1 = 0, z2 = 0;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        
        if(x1 <= x2 and y1 <= y2 and z1 >= z2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}
