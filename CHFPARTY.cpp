/*
Tonight, Chef would like to hold a party for his N friends.
All friends are invited and they arrive at the party one by one in an arbitrary order. 
However, they have certain conditions — for each valid i, when the i-th friend arrives at the party and sees that at that point, 
strictly less than Ai other people (excluding Chef) have joined the party, this friend leaves the party; otherwise, this friend joins the party.
Help Chef estimate how successful the party can be — find the maximum number of his friends who could join the party 
(for an optimal choice of the order of arrivals).

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output :
For each test case, print a single line containing one integer — the maximum number of Chef's friends who could join the party.

Constraints :
1≤T≤1,000
1≤N≤105
the sum of N over all test cases does not exceed 106

Example Input :
3
2
0 0
6
3 1 0 0 5 5
3
1 2 3

Example Output :
2
4
0

Explanation :
Example case 1: Chef has two friends. 
Both of them do not require anyone else to be at the party before they join, so they will both definitely join the party.
Example case 2: At the beginning, friends 3 and 4 can arrive and join the party, since they do not require anyone else to be at the party before they join. 
After that, friend 2 can arrive; this friend would see that there are two people at the party and therefore also join. 
Then, friend 1 will also join, so in the end, there would be 4 people attending the party.
Example case 3: No one will attend the party because each of Chef's friends will find zero people at the party and leave,
regardless of the order in which they arrive.

*/
#include <iostream>
#include <vector>
#include <algorithm>
#define mod 1000000

using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        long long N = 0;
        cin >> N;
        
        vector<long long> v;
        for(int i = 0; i < N ; i++)
        {
            long long t = 0;
            cin >> t;
            v.push_back(t);
        }
        
        sort(v.begin(), v.end());
        long long cnt = 0;
        for(int i = 0; i < N; i++)
        {
            if(cnt >= v[i])
            {
                cnt = (cnt + 1) % mod;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}
