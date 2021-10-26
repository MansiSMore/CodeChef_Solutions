/*
Hasan has recently heard about Chef's restaurant, which serves the tastiest dishes. 
The restaurant has published a list of N dishes (numbered 1 through N) that will be served in the next M days. 
For each valid i, the i-th dish will be served only on the Di-th day. 
Hasan has investigated their tastiness and he knows that for each valid i, the i-th dish has tastiness Vi.
Hasan's budget is only large enough to try two dishes. 
He wants to choose these two dishes in such a way that their total (summed up) tastiness is as large as possible. 
However, he cannot try 2 dishes on the same day.
Help Hasan and calculate the maximum possible total tastiness of the dishes he should try.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and M.
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Di and Vi.

Output :
For each test case, print a single line containing one integer — the maximum total tastiness.

Constraints :
1≤T≤1,000
2≤N,M≤105
1≤Di≤M for each valid i
1≤Vi≤109 for each valid i
there are at least two dishes that are served on different days
the sum of N over all test cases does not exceed 106
the sum of M over all test cases does not exceed 106

Sample Input 1 :
2
3 6
5 7
1 9
2 5
3 7
5 8
2 5
5 10

Sample Output 1 :
16
15

Explanation :
Example case 1: The optimal solution is to try dishes 1 and 2.
Example case 2: The optimal solution is to try dishes 2 and 3.

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T = 0, N = 0, M = 0;
	cin >> T;
	while(T--)
	{
		cin >> N >> M;
		vector<int> vobj(M + 1, 0);
		for(int i = 1; i <= N; i++)
		{
			int U = 0, V = 0;
			cin >> U >> V;
			
			if(vobj[U] < V)
			{
				vobj[U] = V;
			}
		}
		sort(vobj.begin(), vobj.end());
		int ans = vobj[M] + vobj[M - 1];
		cout << ans << endl;
	}
	
	return 0;
}
