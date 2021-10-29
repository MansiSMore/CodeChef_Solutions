/*
Chef is playing a game on a sequence of N positive integers, say A1, A2, ... AN. The game is played as follows.
If all the numbers are equal, the game ends.
Otherwise
Select two numbers which are unequal
Subtract the smaller number from the larger number
Replace the larger number with the result from above (see the explanation section for clarity)
Chef has already figured out that the game always terminates. 
He also knows, for a given sequence of integers, the game will always terminate on the same value, no matter how the game is played. 
Chef wants you to simulate the game for him and tell him on which value will the game terminate for a given sequence of integers.

Input :
The first line of the input contains an integer T, the number of test cases. Then follow the description of T test cases. 
The first line of each test case contains a single integer N, the length of the sequence. 
The second line contains N positive integers, each separated by a single space.

Output :
For each test case, output a single integer - the value of all the numbers when they are equal (and the game terminates), on a line by itself.

Constraints :
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
1 ≤ Ai ≤ 109

Sample
Input
```
3
2
10 12
2
5 9
3
6 10 15
```

Output
```
2
1
1
```

Explanation :
Test Case 1: Since there are only two numbers, the operations are forced.
{ 10, 12 } => Replace 12 with ( 12 - 10 = 2 ) => { 10, 2 }
{ 10, 2 } => Replace 10 with ( 10 - 2 = 8 ) => { 8, 2 }
{ 8, 2 } => Replace 8 with ( 8 - 2 = 6 ) => { 6, 2 }
{ 6, 2 } => Replace 6 with ( 6 - 2 = 4 ) => { 4, 2 }
{ 4, 2 } => Replace 4 with ( 4 - 2 = 2 ) => { 2, 2 }
The value of all the numbers when the game ends is 2.

Test Case 2: Since there are only two numbers, the operations are forced.
{ 5, 9 } => Replace 9 with ( 9 - 5 = 4 ) => { 5, 4 }
{ 5, 4 } => Replace 5 with ( 5 - 4 = 1 ) => { 1, 4 }
{ 1, 4 } => Replace 4 with ( 4 - 1 = 3 ) => { 1, 3 }
{ 1, 3 } => Replace 3 with ( 3 - 1 = 2 ) => { 1, 2 }
{ 1, 2 } => Replace 2 with ( 2 - 1 = 1 ) => { 1, 1 }
The value of all the numbers when the game ends is 1.

Test Case 3: One way to play the game is
{ 6, 10, 15 } => Replace 15 with ( 15 - 6 = 9 ) => { 6, 10, 9 }
{ 6, 10, 9 } => Replace 10 with ( 10 - 6 = 4 ) => { 6, 4, 9 }
{ 6, 4, 9 } => Replace 9 with ( 9 - 6 = 3 ) => { 6, 4, 3 }
{ 6, 4, 3 } => Replace 6 with ( 6 - 4 = 2 ) => { 2, 4, 3 }
{ 2, 4, 3 } => Replace 3 with ( 3 - 2 = 1 ) => { 2, 4, 1 }
{ 2, 4, 1 } => Replace 4 with ( 4 - 2 = 2 ) => { 2, 2, 1 }
{ 2, 2, 1 } => Replace first 2 with ( 2 - 1 = 1 ) => { 1, 2, 1 }
{ 1, 2, 1 } => Replace 2 with ( 2 - 1 = 1 ) => { 1, 1, 1 }
The value of all the numbers when the game ends is 1. 
You may try to play the game differently and observe that the game will always end when all the values are 1.

*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    
    if(b == 0)
    {
        return a;
    }
    
    if(a == b)
    {
        return a;
    }
    
    if(a > b)
    {
        return gcd(a % b, b);
    }
    
    return gcd(a, b % a);
}
    
int main()
{
	int T = 0; 
	cin >> T;
	
    while(T--)
    {
        int N = 0, temp = 0, ans = 0; 
        cin >> N;
        
        while(N--)
        {
            cin >> temp;
            ans = gcd(temp, ans);
        }
        
        cout << ans << endl;
    }
	return 0;
}
