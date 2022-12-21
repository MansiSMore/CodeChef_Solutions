/*
Each item in Chef’s menu is assigned a spice level from 1 to 10. Based on the spice level, the item is categorised as:
MILD: If the spice level is less than 4.
MEDIUM: If the spice level is greater than equal to 4 but less than 7.
HOT: If the spice level is greater than equal to 7.
Given that the spice level of an item is X, find the category it lies in.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of an integer X — the spice level of the item.

Output Format :
For each test case, output on a new line, the category that the item lies in.
You may print each character in uppercase or lowercase. For example, HOT, hot, Hot, and hOT are all considered the same.

Constraints :
1≤T≤1000
1≤X≤10

Sample Input 1 :
4
4
1
6
9

Sample Output 1 :
MEDIUM
MILD
MEDIUM
HOT

Explanation :
Test case 1: The spice level is greater than 4 but less than 7. Thus, it is in MEDIUM category.

Test case 2: The spice level is less than 4. Thus, it is in MILD category.

Test case 3: The spice level is greater than 4 but less than 7. Thus, it is in MEDIUM category.

Test case 4: The spice level is greater than 7. Thus, it is in HOT category.
*/

 #include <iostream>
using namespace std;
#define ll long long
int main() {
	ll T_testcases = 0;
	cin >> T_testcases;
	
	while(T_testcases--)
	{
	    ll X_level = 0;
	    cin >> X_level;
	    
	    if(X_level < 4)
	    {
	        cout << "MILD\n";
	    }
	    else if(X_level >= 4 && X_level < 7)
	    {
	        cout << "MEDIUM\n";
	    }
	    else
	    {
	        cout << "HOT\n";
	    }
	}
	
	return 0;
}
