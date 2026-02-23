#include<stdio.h>

void main()
{
	//1. develop a program that prints all alphabets from a to z by skipping 3 alphabets using a for loop
	
	char i ='a';//declared variable
	
//	for(i='a'; i<='z'; i+=4)
//	{
//		printf("%c\n",i);
//	}

	do//exit control loop
	{
		printf("%c\n",i);//printing a to z character
		i+=4;// i + = to 4 digit skipping to alphabers
	}while(i<='z');//printing a to z character
}
