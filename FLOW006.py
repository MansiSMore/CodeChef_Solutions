'''
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input :
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output :
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints :
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example :
Input :
3 
12345
31203
2123

Output :
15
9
8

'''
# cook your dish here
def cntdigit(no):
    s = 0
    while (no > 0):
        s += (no % 10)
        no //= 10
    return s

T = int(input())

for i in range(T):
    no = int(input())
    print(cntdigit(no))
