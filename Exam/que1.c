#include<stdio.h>

void main()
{
	/*1.Write a C program that prompts the user to enter a 3 digit's positive integer.
	 Find the sum of first and last digit.*/
	 
	 int n,ld,fd,sum=0;
	 
	 printf("Enter a num :");
	 scanf("%d",&n);
	 
	 ld = n%10;
	 
	 fd = n/100;
	 
	 sum = ld + fd;
	 
	 printf("\nThe sum of first and last digit : %d",sum); 

}
