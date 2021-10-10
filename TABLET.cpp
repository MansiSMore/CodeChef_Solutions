/*
Chef decided to buy a new tablet. His budget is B, so he cannot buy a tablet whose price is greater than B. Other than that, 
he only has one criterion — the area of the tablet's screen should be as large as possible. Of course, the screen of a tablet is always a rectangle.
Chef has visited some tablet shops and listed all of his options. In total, there are N available tablets, numbered 1 through N. For each valid i, 
the i-th tablet has width Wi, height Hi and price Pi.
Help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and B.
N lines follow. For each i (1≤i≤N), the i-th of these lines contains three space-separated integers Wi, Hi and Pi.

Output :
For each test case, print a single line. If Chef cannot buy any tablet, it should contain the string "no tablet" (without quotes). 
Otherwise, it should contain a single integer — the maximum area of the screen of a tablet Chef can buy.

Constraints :
1≤T≤100
1≤N≤100
1≤B≤1,000,000
1≤Pi≤1,000,000 for each valid i
1≤Wi,Hi≤10,000 for each valid i

Sample Input 1 :
3
3 6
3 4 4
5 5 7
5 2 5
2 6
3 6 8
5 4 9
1 10
5 5 10

Sample Output 1 :
12
no tablet
25

Explanation :
Example case 1: The first tablet (with screen area 3⋅4=12) is the best option for Chef, 
since Chef cannot afford the second one and the third one has a smaller screen.

Example case 2: Chef's budget is 6, but all tablets have higher prices, so Chef cannot buy any tablet.

Example case 3: The price of the only tablet is exactly equal to Chef's budget, so he is able to buy it.

*/
#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0, B = 0, W = 0, H = 0, P = 0, max = 0;
        
        cin >> N >> B;
        
        for(int i = 1; i <= N; i++)
        {
            cin >> W >> H >> P;
            
            if(P <= B)
            {
                int mult = W * H;
                if(max <= mult)
                {
                    max = mult;
                }
            }
        }
        
        if(max == 0)
        {
            cout << "no tablet\n";
        }
        else
        {
            cout << max << endl;
        }
    }
    
	return 0;
}
