'''
Problem Statement
Every problem starts with a Problem Statement. It tells you in detail about the task to be solved. Usually, although not necessarily, it is accompanied with a story. As a competitive programmer, it is your job to break the problem statement and figure out exactly what it is asking.
Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.
Program is very simple, given two integers A and B, write a program to add these two numbers.

Input :
This section tells you the format in which your program should receive the input.
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output :
This section tells us the format in which our program should give the output
For each test case, add A and B and display it in a new line.

Take special care for the output format; everything your program prints is considered “output”, so if you output some debugging statements like “Please enter T” or print something like: “The answer is: ”, this will be considered as part of your answer, and because it does not satisfy the output format, it will be marked wrong, even if your answer is otherwise correct!
Constraints
This section tell you the maximum and minimum possible values the variables in the problem statement can take. You do not need to check these constraints in your program. You can safely assume that the input given to your program will be in the given range of constraints.
1 ≤ T ≤ 1000
0 ≤ A,B ≤ 10000

Example : 
In this section example of input and output are given in the expected format.
Input : 
3 
1 2
100 200
10 40

Output :
3
300
50
'''
#Note that it's python3 Code. Here, we are using input() instead of raw_input().
#You can check on your local machine the version of python by typing "python --version" in the terminal.

#Read the number of test cases.
T = int(input())
for tc in range(T):
	# Read integers a and b.
	(a, b) = map(int, input().split(' '))
	ans = a + b
	print(ans)
