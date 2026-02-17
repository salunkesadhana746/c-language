#include<stdio.h>
void main()
{
	//4. WAP to Find min. from given 3 no. using nested if else.

	int a,b,c;// we have declared interger variable a,b and c.
	
	printf("Enter a :");//we are printing a message Enter a : by using printf function.
	scanf("%d",&a);//we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	printf("Enter c :");//we are printing a message Enter c : by using printf function.
	scanf("%d",&c);//we are geting user input in variable c by using scanf function.
	// a,b,c
	if(a<b)//we are comparing a to b,is a less than b?
	{
		if(a<c)//we are comparing a to c,is a less than c?
		{
			//a
			printf("a is min");//we are printing a message a is minimum.
		}
		else
		{
			//c
			printf("c is min");//we are printing a message c is minimum.
		}
	 	
	}
	else
	{
		//b,c
		if(b<c)//we are comparing b to c,is b less than c?
		{
			//b
  		    printf("b is min");	//we are printing a message b is minimum.
		}
		else
		{
			//c
  		    printf("c is min");//we are printing a message c is minimum.
		}	
	}
}
