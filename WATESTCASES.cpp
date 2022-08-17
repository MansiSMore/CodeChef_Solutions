/*
Chef has recently introduced a feature, called WA Test Cases, which allows you to see the smallest test case that your WA code has failed in. 
For example, you can go to any relevant problem in Practice, make a submission which gets a WA verdict, 
and then click on the "Debug My Code" button to see the test case.
Your job now is to find that smallest test case that a particular submission fails on. 
That problem has N test cases, and you are given the size of each of those test cases as S1,S2,…,SN. 
You are also given a binary string V, which tells whether the submission has passed a particular test case or not. 
That is, if the ith bit of V is 1, that means that the submission has passed the ith test case. If it is 0, then it has failed that test case. 
Your job is the output the size of the smallest test case where the submission has failed.
 
Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer, N.
The second line contains N integers - S1,S2,…,SN
The third line contains a binary string - V.

Output Format :
For each test case, output on a new line, a single integer, which should be the size of the smallest test case where the submission has failed.

Constraints :
1≤T≤100
1≤N≤100
1≤Si≤100
Length of V=N
Each element of V is either 0 or 1
At least one element of V will be 0

Sample Input 1 :
5
3
5 10 3
000
3
5 10 3
001
3
5 5 3
001
3
5 5 3
101
5
10 100 100 10 10
00001

Sample Output 1 :
3
5
5
5
10

Explanation :
Test case 1: There are 3 test cases, and the submission has failed all the 3 test cases. 
The sizes of the test cases on which it has failed are {5,10,3}. The smallest among these is 3, and so the answer is 3.

Test case 2: There are 3 test cases, and the submission has failed on 2 test cases. 
The sizes of the test cases on which it has failed are {5,10}. The smallest among these is 5, and so the answer is 5.

Test case 3: There are 3 test cases, and the submission has failed on 2 test cases. 
The sizes of the test cases on which it has failed are {5,5}. The smallest among these is 5, and so the answer is 5.

Test case 4: There are 3 test cases, and the submission has failed on 1 test case. 
The sizes of the test case on which it has failed is {5}. The smallest among these is 5, and so the answer is 5.

Test case 5: There are 5 test cases, and the submission has failed on 4 test cases. 
The sizes of the test cases on which it has failed are {10,100,100,10}. The smallest among these is 10, and so the answer is 10.
*/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_testcases = 0;
        cin >> N_testcases;
        vector<int> vobj(N_testcases);
        for(int i = 0; i < N_testcases; i++)
        {
            cin >> vobj[i];
        }
        string V_string;
        cin >> V_string;
        
        int ans = INT_MAX;
        for(int i = 0; i < N_testcases; i++)
        {
            if(V_string[i] == '0')
            {
                if(vobj[i] < ans)
                    ans = vobj[i];
            }
        }
        
        cout << ans << endl;
    }
	return 0;
}
