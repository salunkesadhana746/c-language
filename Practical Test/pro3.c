#include<stdio.h>
void main()
{
	//3. wap to find minimum from 3 number using nested if else.
	
	int a,b,c;//declared variable
	
	printf("Enter A :");//printing a message to printf function.
	scanf("%d",&a);//user input are use to scanf function.
	printf("Enter B :");//printing a message to printf function.
	scanf("%d",&b);//user input are use to scanf function.
	printf("Enter C :");//printing a message to printf function.
	scanf("%d",&c);//user input are use to scanf function.
	
	if(a<b )//if else statement are used to program
	{
		if(a<c)
		{
			printf("A is minimum .");//printing a message to printf function.
		}
		else
		{
			printf("C is minimum .");//printing a message to printf function.
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum .");//printing a message to printf function.
		}
		else
		{
			printf("C is minimum .");//printing a message to printf function.
		}
		
	}
}
