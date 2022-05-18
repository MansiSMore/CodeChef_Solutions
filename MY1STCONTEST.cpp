/*
Each contest - there are approximately 1500 - 2000 users who participate for the 1st time and get rated.
The Chef wanted to tell new users some tricks for their 1st contest:
Before the contest - you don’t have any rating. 
So even if you make a single submission - you will become part of the contest rank list and you will get a rating.
If you want your rating to increase - give the entire 3 hours to the contest & don’t quit! If you keep trying till the end, 
and the more time you get, the more problems you can solve. That means larger rating increases!
Do not ask your friends for their code. 
If you copy paste their code, you will get caught during plagiarism checks and your rating will be reduced by 275 points, 
along with a permanent black mark on your profile.
Now to the problem:
In a contest where N new users visited the contest,
A users just saw the problems and didn’t make any submissions and hence won’t get any rating.
B users who made a submission but could not solve any problem correctly. Thus, after the contest, they will get a rating in the range 800−1000.
Everyone else could correctly solve at least 1 problem. Thus, they will get a rating strictly greater than 1000 after the contest.
You need to output the number of new users in the contest who, after the contest, 
will get a rating and also the number of new users who will get a rating strictly greater than 1000.

Input Format :
Each input file contains of a single line, with three integers N,A and B - the number of new users, 
the number of users who just saw the problem and didn't make any submission, 
and the number of users who made a submission but could not solve any problem correctly.

Output Format :
Output two integers separated by a space in a single line - the number of new users who will get a rating at 
the end of the contest and the number of new users who will get a rating higher than 1000.

Constraints :
2≤N≤1000
1≤A≤1000
1≤B≤1000
A+B≤N

Sample Input 1 :
10 3 2
Sample Output 1 :
7 5
Explanation :
There were 10 new users. Among those 10, 3 didn't make any submissions. This means that the other 10−3=7 users made submissions and will get a rating. 
This is the first integer of the output.
Now, among these 7 users, 2 couldn't solve any problem even though they submitted and tried. 
So, they will get a rating less than equal to 1000. 
The other 7−2=5 users were able to solve at least 1 problem and hence will get a rating greater than 1000. Hence, the second integer of the output is 5.

Sample Input 2 :
10 4 1
Sample Output 2 :
6 5
Explanation
There were 10 new users. Among those 10, 4 didn't make any submissions. 
This means that the other 10−4=6 users made submissions and will get a rating. This is the first integer of the output.
Now, among these 6 users, 1 couldn't solve any problem even though they submitted and tried. 
So, they will get a rating less than equal to 1000. 
The other 6−1=5 users were able to solve at least 1 problem and hence will get a rating greater than 1000. Hence, the second integer of the output is 5.

Sample Input 3 :
20 1 2
Sample Output 3 :
19 17
Explanation :
There were 20 new users. Among those 20, 1 didn't make any submissions. 
This means that the other 20−1=19 users made submissions and will get a rating. This is the first integer of the output.
Now, among these 19 users, 2 couldn't solve any problem even though they submitted and tried. 
So, they will get a rating less than equal to 1000. 
The other 19−2=17 users were able to solve at least 1 problem and hence will get a rating greater than 1000. Hence, the second integer of the output is 17.

Sample Input 4 :
1000 300 700
Sample Output 4 :
700 0
Explanation :
There were 1000 new users. Among those 1000, 300 didn't make any submissions. 
This means that the other 1000−300=700 users made submissions and will get a rating. This is the first integer of the output.
Now, among these 700 users, 700 couldn't solve any problem even though they submitted and tried. 
So, they will get a rating less than equal to 1000. 
The other 700−700=0 users were able to solve at least 1 problem and hence will get a rating greater than 1000. 
Hence, the second integer of the output is 0.
*/
#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll N_new = 0, A_users = 0, B_users = 0;
    cin >> N_new >> A_users >> B_users;
        
    cout << N_new - A_users << " " << N_new - A_users - B_users << endl;
	return 0;
}
