/*
You are given a sequence A1,A2,…,AN. An ordered pair of indices (i,j) in this sequence is called a beautiful pair if i≠j and Ai−AjAi<Ai−AjAj. 
(Here, division represents real division, e.g. 52 is equal to 2.50.)
Help Chef find the number of beautiful pairs present in the given sequence.
Note: Since the input is large, prefer using fast input methods.

Input Format :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output Format :
For each test case, print a single line containing one integer — the number of beautiful pairs present in the given sequence.

Constraints :
1≤T≤10
1≤N≤2⋅105
1≤Ai≤106 for each valid i

Subtasks :
Subtask #1 (20 points): N≤103
Subtask #2 (80 points): original constraints

Sample Input 1 :
2 
3
4 2 4
6
2 8 6 2 1 5

Sample Output 1 :
4
28

Explanation :
Example case 1: The beautiful pairs of indices are (1,2),(2,1),(2,3),(3,2).
For the pair (1,2): 4−24<4−22 since 0.5<1.
For the pair (2,1): 2−42<2−44 since −1<−0.5.
For the pair (2,3): 2−42<2−44 since −1<−0.5.
For the pair (3,2): 4−24<4−22 since 0.5<1.
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for(long long i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        map<long long ,long long> mobj;
        for(long long i : arr)
        {
            mobj[i]++;
        }
        
        long long res = n * (n - 1);
        for(auto i : mobj)
        {
            if (i.second > 1)
            {
                res -= (i.second * (i.second - 1));
            }
        }
        cout << res << endl;
    }
}
