/*
Write a program, which takes an integer N and if the number is less than 10 then display "Thanks for helping Chef!" otherwise print "-1".

Input :
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output :
For each test case, output the given string or -1 depending on conditions, in a new line.

Constraints :
1 ≤ T ≤ 1000
-20 ≤ N ≤ 20

Example
Input :
3 
1
12
-5

Output :
Thanks for helping Chef!
-1
Thanks for helping Chef!
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
	    //sobj.nextLine();
	    for(int i = 0; i < T; i++)
	    {
	        int no = sobj.nextInt();
	        //sobj.nextLine();
	        if(no < 10)
	            System.out.println("Thanks for helping Chef!");
	        else
	            System.out.println("-1");
	    }
	}
}
