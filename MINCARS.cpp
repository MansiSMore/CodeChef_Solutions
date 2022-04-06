/*
A single car can accommodate at most 4 people.
N friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends.

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - denoting the number of friends.

Output Format :
For each test case, output the minimum number of cars required to accommodate all the friends.

Constraints :
1≤T≤1000
2≤N≤1000

Sample Input 1 :
4
4
2
7
98

Sample Output 1 :
1
1
2
25

Explanation :
Test Case 1: There are only 4 friends and a single car can accommodate 4 people. Thus, only 1 car is required.
Test Case 2: There are only 2 friends and a single car can accommodate 4 people. Thus, only 1 car is required.
Test Case 3: There are 7 friends and 2 cars can accommodate 8 people. Thus, 2 cars are required.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_no_of_testcases = 0;
    cin >> T_no_of_testcases;
    
    while(T_no_of_testcases--)
    {
        int N_friends = 0;
        cin >> N_friends;
        
        if(N_friends % 4 == 0)
            std::cout << (N_friends / 4) << std::endl;
        else
            cout << (N_friends / 4) + 1 << endl;
    }
	return 0;
}
