/*
To address the situation of Water Scarcity in Chefland, Chef has started an awareness campaign to motivate people to use greywater for toilets, 
washing cars, gardening, and many other chores which don't require the use of freshwater. 
These activities presently consume y liters of water every week per household and Chef thinks through this campaign he can help cut down the total usage to ⌊y2⌋.
Assuming x liters of water every week per household is consumed at chores where using freshwater is mandatory and a total of C liters of water is available for 
the entire Chefland having H households for a week, find whether all the households can now have sufficient water to meet their requirements.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, four integers H,x,y,C.
Output:
Print a single line containing the string "YES" if it is possible to meet the requirement of all the households in Chefland or "NO" if it is 
impossible (without quotes).
You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤300
1≤H,x,y≤10
1≤C≤100

Sample Input:
3
3 1 1 3
1 1 1 2
2 1 1 1

Sample Output:
YES
YES
NO

Explanation:
TestCase 1: Total consumption of a single household after using greywater = 1+ ⌊12⌋ = 1+0 = 1 liter.
Total consumption of three households after using greywater = 3∗1=3 liters which is equal to the available quantity of water. 
TestCase 2: Total consumption of a single household after using greywater = 1+ ⌊12⌋ = 1+0 = 1 liter which is less than the available quantity of water.
TestCase 3: Total consumption of a single household after using greywater = 1+ ⌊12⌋ = 1+0 = 1 liter.
Total consumption of two households after using greywater = 2∗1=2 liters which is more than the available quantity of water.

*/
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int H = 0, x = 0, y = 0, C = 0;
        cin >> H >> x >> y >> C;
        
        int s = (y / 2) + x;
        if(H * s <= C)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}
