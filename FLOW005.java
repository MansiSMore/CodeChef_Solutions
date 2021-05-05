/*
Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

Input :
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output :
For each test case, display the smallest number of notes that will combine to give N, in a new line.

Constraints :
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example
Input :
3 
1200
500
242

Output :
12
5
7
*/
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sobj = new Scanner(System.in);
	    int T = sobj.nextInt();
	    
	    while(T > 0)
	    {
	        int cnt = 0;
		    int no = sobj.nextInt();
		    
		    cnt += no / 100;
		    no = no % 100;
		    
		    cnt += no / 50;
		    no = no % 50;
		    
		    cnt += no / 10;
		    no = no % 10;
		    
		    cnt += no / 5;
		    no = no % 5;
		    
		    cnt += no / 2;
		    no = no % 2;
		    
		    cnt += no / 1;
		    no = no % 1;
		    
		    System.out.println(cnt);
		    
	        T--;
	    }
	    
	}
}
