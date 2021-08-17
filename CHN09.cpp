/*
Little Malvika is very peculiar about colors. On her birthday, her mom wanted to buy balloons for decorating the house. 
So she asked her about her color preferences. The sophisticated little person that Malvika is, she likes only two colors — amber and brass. 
Her mom bought n balloons, each of which was either amber or brass in color. 
You are provided this information in a string s consisting of characters 'a' and 'b' only, where 'a' denotes that the balloon is amber, 
where 'b' denotes it being brass colored.
When Malvika saw the balloons, she was furious with anger as she wanted all the balloons of the same color. 
In her anger, she painted some of the balloons with the opposite color (i.e., she painted some amber ones brass and vice versa) 
to make all balloons appear to be the same color. As she was very angry, it took her a lot of time to do this, 
but you can probably show her the right way of doing so, thereby teaching her a lesson to remain calm in difficult situations, 
by finding out the minimum number of balloons needed to be painted in order to make all of them the same color.

Input :
The first line of input contains a single integer T, denoting the number of test cases.
The first and only line of each test case contains a string s.
Output :
For each test case, output a single line containing an integer — the minimum number of flips required.

Constraints :
1 ≤ T ≤ 100
1 ≤ n ≤ 100, where n denotes to the length of the string s.

Example
Input:
3
ab
bb
baaba
Output:
1
0
2
Explanation
In the first example, you can change amber to brass or brass to amber. In both the cases, both the balloons will have same colors. 
So, you will need to paint 1 balloon. So the answer is 1.
In the second example, As the color of all the balloons is already the same, you don't need to paint any of them. So, the answer is 0.

*/
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        string s;
        cin >> s;
        
        int len = s.length(), cnt1 = 0, cnt2 = 0;
        
        for(int i = 0; i < len; i++)
        {
            if(s[i] == 'a')
                cnt1++;
        }
        cnt2 = len - cnt1;
        cout << min(cnt1, cnt2) << endl;
        
    }
	return 0;
}
