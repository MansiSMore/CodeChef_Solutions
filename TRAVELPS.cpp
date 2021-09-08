/*
Chef is going on a road trip and needs to apply for inter-district and inter-state travel e-passes. 
It takes A minutes to fill each inter-district e-pass application and B minutes for each inter-state e-pass application.
His journey is given to you as a binary string S of length N where 0 denotes crossing from one district to another district (which needs an inter-district e-pass), 
and a 1 denotes crossing from one state to another (which needs an inter-state e-pass).
Find the total time Chef has to spend on filling the various forms.

Input Format :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains two lines of input.
First line contains three space separated integers N,A and B.
Second line contains the string S.

Output Format :
For each testcase, output in a single line the total time Chef has to spend on filling the various forms for his journey.

Constraints :
1≤T≤102
1≤N,A,B≤102
Si∈{′0′,′1′}

Subtasks :
Subtask #1 (100 points): original constraints
Sample Input 1 
3
2 1 2
00
2 1 1
01
4 2 1
1101

Sample Output 1 
2
2
5

Explanation
Test case 1: Chef needs total 2 inter-district e-passes, and he will be filling them in total 1⋅2=2 minutes.
Test case 3: Chef needs total 1 inter-district e-pass and 3 inter-state e-passes, and he will be filling them in total 2⋅1+1⋅3=5 minutes.

*/
#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0, A = 0, B = 0, i = 0, cnt = 0;
        cin >> N >> A >> B;
        
        string str;
        cin >> str;
        
        while(i < N)
        {
            if(str[i] != '0')
                cnt++;
            i++;
        }
        
        int Total = (cnt * B) + ((N - cnt) * A);
        cout << Total << endl;
    }
    return 0;
}
