/*
Vadim and Roman like discussing challenging problems with each other. One day Vadim told his friend following problem:
Given N points on a plane. Each point p is defined by it's two integer coordinates — px and py. The distance between points a and b is min(|ax - bx|, |ay - by|). 
You should choose a starting point and make a route visiting every point exactly once, i.e. 
if we write down numbers of points in order you visit them we should obtain a permutation. Of course, overall distance walked should be as small as possible. 
The number of points may be up to 40.
"40? Maybe 20? Are you kidding?" – asked Roman. "No, it's not a joke" – replied Vadim. So Roman had nothing to do, but try to solve this problem. 
Since Roman is really weak in problem solving and you are the only friend, except Vadim, with whom Roman can discuss challenging tasks, 
he has nobody else to ask for help, but you!

Input :
Input description.
The first line of the input contains an integer T denoting the number of test cases. 
The description of T test cases follows.The first line of each test case contains a single integer N denoting the number of points on a plane. 
The following N lines contain two space-separated integers each — coordinates of points.

Output :
Output description.
Output the answer for every test case in a separate line. The answer for every test case is a permutation of length N. 
In case there are several solutions that lead to minimal distance walked, you should choose the lexicographically smallest one. Let P denote such permutation. 
To make output smaller, you should output H(P). H(P) = P1 xor P2 xor ... xor PN. Have a look at the example and it's explanation for better understanding.

Constraints :
1 ≤ T ≤ 10
1 ≤ N ≤ 40
0 ≤ absolute value of each coordinate ≤ 1000
1 ≤ sum over all N in a single test file ≤ 120

Example
Input:
2
2
1 2
0 0
3
3 3
0 0
0 3

Output:
3
0

Explanation :
For the first test case permutation [1, 2] is optimal. 1 xor 2 = 3.
For the second one both [2, 3, 1] and [1, 3, 2] lead us to the shortest walk, 
but the second one is lexicographically smaller. So the answer is H([1, 3, 2]) = 1 xor 3 xor 2 = 0 .

*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int N = 0;
        cin >> N;
        int X = 0, Y = 0; 
        for(int i = 0; i < N; i++) 
        { 
            cin >> X >> Y;
        }

        int ans = 0;
        for(int i = 1; i <= N; i++) 
            ans ^= i;
            
        cout << ans << endl; 
    }
	

	return 0;
}
