//Use relative prime concept and answer will always start from starting index.
/*
Dazzler has a task for you.
Given two positive integers A and B, find two positive integers i and j such that:
gcd(i,j)>1;
A≤i<j≤B;
The value (i+j) is minimum possible.
If there are multiple solutions, you may print any of them. If no such pair exists, print −1.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers A and B.

Output Format :
For each test case, output in a single line two space-separated integers i and j satisfying all the conditions. If no such pair exists, print −1.

Constraints :
1≤T≤105
1≤A<B≤109

Sample Input 1 :
2
2 3
2 10

Sample Output 1 :
-1
2 4

Explanation :
Test case 1: There exists no pair satisfying all the conditions.
Test case 2: A valid pair satisfying all the conditions is (i,j)=(2,4). The value 𝚐𝚌𝚍(2,4)=2>1. The value (i+j)=6.
It can be proven that no such pair exists that satisfies all the conditions and has sum less than 6.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int A_lower_range = 0, B_upper_range = 0;
        cin >> A_lower_range >> B_upper_range;
        
        if(A_lower_range % 2 == 0)
        {
            if(A_lower_range + 2 <= B_upper_range)
                cout << A_lower_range << " " << A_lower_range + 2 << endl;
            else
                cout << -1 << endl;
            
        }
        else if(A_lower_range % 2 == 1)
        {
            if(A_lower_range + 3 <= B_upper_range)
            {
                if(A_lower_range % 3 == 0)
                    cout << A_lower_range << " " << A_lower_range + 3 << endl;
                else
                    cout << A_lower_range + 1 << " " << A_lower_range + 3 << endl;
            }
            
            else
                cout << -1 << endl;

        }

        
    }
	return 0;
}
