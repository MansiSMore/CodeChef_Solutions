/*
An input string S of length N is transferred through the network using a special protocol. 
The protocol can send the string through a series of operations. In one operation, we can choose a lowercase english alphabet C and do one of the following:
Transfer 1 copy of C through the network.
Transfer 2 copies of C through the network.
Each of the above transfers take 1 unit of time.

Find the minimum time in which we can transfer the entire string S through the network.

Input Format :
The first line will contain T - the number of test cases. Then the test cases follow.
First line of each test case contains N - the length of the string S.
Second line of each test case contains the string S.

Output Format :
For each test case, output in a single line, the minimum time required to transfer the string.

Constraints :
1≤T≤100
1≤N≤105
Sum of N over all test cases does not exceed 105.
String S contains lowercase english alphabets only.

Sample Input 1 :
2
5
cbcdc
6
aabeee

Sample Output 1 :
5
4

Explanation :
Test Case 1: String can be transferred through following operations: send 1 copy of character c, send 1 copy of character b, send 1 copy of character c, 
send 1 copy of character d, and send 1 copy of character c. Thus, total 5 operations are required.

Test Case 2: String can be transferred through following operations: send 2 copies of character a, send 1 copy of character b, send 1 copy of character e, 
and send 2 copies of character e. Thus, total 4 operations are required.
*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0;
        cin >> N;
        
        string str;
        cin >> str;
        //cout << str;
        

        int ans = 0;
        for(int i = 0; i < N; i++)
        {
            int cnt = 1;
            while(str[i] == str[i + 1])
            {
                cnt++;
                i++;
            }
            if(cnt % 2 == 0)
                ans += (cnt / 2);
            else
                ans+= (cnt / 2) + 1;
            //cout << cnt << endl;
        }
        cout << ans << endl; 
    }
	return 0;
}
