#include<stdio.h>

void main()
{
    //wap to minimum find from 3 variable using else if ladder.
	
	int a,b,c;
	
	printf("Enter a :");// we are printing a message Enter a : by using printf function.
	scanf("%d",&a);//we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	printf("Enter c :");// we are printing a message Enter c : by using printf function.
	scanf("%d",&c);//we are geting user input in variable c by using scanf function.
	
	if(a<b && a<c)
	{
		printf("a is minimum.");//we are printing a message a is minimum.	
	}
	else if(b<c && b<a)
	{
		printf("b is minimum.");//we are printing a message b is minimum.	
	}
	else if(c<a && c<b)
	{
		printf("c is minimum.");//we are printing a message c is minimum.	
	}
	else
	{
		printf("a,b,c all are equal !");//we are printing a message a,b,c all are equal.
	}
	
}
