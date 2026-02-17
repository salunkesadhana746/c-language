#include<Stdio.h>
void main()
{
	//wap to max find from 4 variable using else if ladder.
	
	int a,b,c,d;
	
	printf("Enter a :");// we are printing a message Enter a : by using printf function.
	scanf("%d",&a);//we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	printf("Enter c :");// we are printing a message Enter c : by using printf function.
	scanf("%d",&c);//we are geting user input in variable c by using scanf function.
	printf("Enter d :");// we are printing a message Enter d : by using printf function.
	scanf("%d",&d);//we are geting user input in variable d by using scanf function.
	
	if(a>b && a>c && a>d)
	{
		printf("a is max.");//we are printing a message a is maximum.
	}
	else if(b>a && b>c && b>d)
	{
		printf("b is max.");//we are printing a message b is maximum.
	}
	else if(c>a && c>b && c>d)
	{
		printf("c is max.");//we are printing a message c is maximum.
	}
	else if(d>a && d>b && d>c)
	{
		printf("d is max.");//we are printing a message d is maximum.
	}
	else
	{
		printf("a,b,c,d all are equal !");//we are printing a message a,b,c,d all are equal.
	}
}
