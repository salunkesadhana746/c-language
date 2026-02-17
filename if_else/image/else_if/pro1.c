#include<stdio.h>
void main()
{
	//wap to minimum find from 2 variable using else if ladder.
	
	int a,b;
	
	printf("Enter a :");// we are printing a message Enter a : by using printf function.
	scanf("%d",&a);//we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	
	if(a<b)
	{
		printf("a is minimum.");//we are printing a message a is minimum.		
	}
	else
	{
		printf("b is minimum.");//we are printing a message b is minimum.	
	}
	
}
