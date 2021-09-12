/*
The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. 
These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. 
Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. 
We call such numbers palindrome.
Ash happens to see this game and wants to simulate the same in the computer. 
As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. 

Input :
The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

Output :
For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.

Constraints :
1<=T<=20
1<=N<=20000

Input:
3
331
666
343

Output:
loses
wins
wins

*/

#include <iostream>
using namespace std;

int rev(int no)
{
    int temp = 0;
    
    while(no != 0)
    {
        temp = (temp * 10) + (no % 10);
        no = no / 10;
    }
    
    return temp;
}

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0;
        cin >> N;
        
        if(rev(N) == N)
            cout << "wins\n";
        else
            cout << "loses\n";
    }
    
	return 0;
}
