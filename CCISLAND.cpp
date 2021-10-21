/*
Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total that he could collect from the island. 
He needs xr units of food supply and yr units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for 
another day. Assuming it takes exactly D days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach 
the shore by building the boat?

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, five integers x,y,xr,yr,D.

Output:
For each testcase, output in a single line answer "YES" if Chef can reach the shore by building the boat and "NO" if not (without quotes).
You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints :
1≤T≤300
1≤x,y≤100
1≤xr,yr,D≤10

Sample Input :
3
4 2 1 1 1
4 2 1 3 1
4 2 4 2 2

Sample Output :
YES
NO
NO

Explanation :
TestCase 1: Chef's food supply will last for 41=4 days and water supply will last for 21=2 days, 
so in total he will be able to survive for min(4,2)=2 days and since required time to reach the shore is 1 day, he will be able to reach there.

TestCase 2: Chef's food supply will last for 41=4 days and water supply will last for 23=0.67 days, 
so in total he will be able to survive for min(4,0.67)=0.67 days and since required time to reach the shore is 1 day, he won't be able to reach there.

TestCase 3: Chef's food supply will last for 44=1 day and water supply will also last for 22=1 day, 
so in total he will be able to survive for min(1,1)=1 day and since required time to reach the shore is 2 days, he won't be able to reach there.

*/
#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int x = 0, y = 0, xr = 0, yr = 0, D = 0;
        cin >> x >> y >> xr >> yr >> D;
        
        int xd = x / xr;
        int yd = y / yr;
        
        int min_day = min(xd, yd);
        
        if(min_day >= D)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
	return 0;
}
