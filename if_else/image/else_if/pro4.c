#include<Stdio.h>
void main()
{
	//wap to max find from 5 variable using else if ladder.
	
	int a,b,c,d,e;
	
	printf("Enter a :");// we are printing a message Enter a : by using printf function.
	scanf("%d",&a);//we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	printf("Enter c :");// we are printing a message Enter c : by using printf function.
	scanf("%d",&c);//we are geting user input in variable c by using scanf function.
	printf("Enter d :");// we are printing a message Enter d : by using printf function.
	scanf("%d",&d);//we are geting user input in variable d by using scanf function.
	printf("Enter e :");// we are printing a message Enter e : by using printf function.
	scanf("%d",&e);//we are geting user input in variable e by using scanf function.
	
	if(a>b && a>c && a>d && a>e)
	{
		printf("a is max.");//we are printing a message a is maximum.
	}
	else if(b>a && b>c && b>d && b>e)
	{
		printf("b is max.");//we are printing a message b is maximum.
	}
	else if(c>a && c>b && c>d && c>e)
	{
		printf("c is max.");//we are printing a message c is maximum.
	}
	else if(d>a && d>b && d>c && d>e)
	{
		printf("d is max.");//we are printing a message d is maximum.
	}
	else if(e>a && e>b && e>c && e>d)
	{
		printf("e is max.");//we are printing a message e is maximum.
	}
	else
	{
		printf("a,b,c,d,e all are equal !");//we are printing a message a,b,c,d,e all are equal.
	}
}
