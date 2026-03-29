#include<stdio.h>

void main()
{
	//Q.1 Palindrome Checker 
	// Develop a program that checks whether a given string is a palindrome or not without
	// using string functions.
	
	char name[50],rev[50];
	int length = 0, i ,j, check = 0;
	
	printf("Enter any string :");
	gets(name);
	
	printf("\n");
	
	while(name[length]!=NULL)
	{
		length++;
	}
	
	j=length-1;
	for(i=0; i<length; i++)
	{
		rev[i] = name[j];
		j--;
	}
	
	for(i=0; i<length; i++)
	{
		if(name[i]!=rev[i])
		{
			check = 1;
			break;
		}
	}
	
	if(check==0)
	{
		printf("The given string is a Palindrome.");
	}
	else
	{
		printf("The given string is not a Palindrome.");
	}
}
