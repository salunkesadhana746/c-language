#include<stdio.h>// library - standard input output hrader file,
// its provide built in functions eg. scanf and printf
// ye library ko add karne se hame scanf and printf function use karane ko milta hai.

void main()// its a main function,its entry point of our code.
{// here main function block is staring.

	//5. WAP to Find max. from given 4 no. using nested if else.
	
	int a,b,c,d;// we have declared interger variable a,b,c and d.
	// declar -just created
	// initializetion - create and assign value.
	
	printf("Enter a :");// we are printing a message Enter a : by using printf function.
	scanf("%d",&a);// we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	printf("Enter c :");// we are printing a message Enter c : by using printf function.
	scanf("%d",&c);// we are geting user input in variable c by using scanf function.
	printf("Enter d :");// we are printing a message Enter d : by using printf function.
	scanf("%d",&d);// we are geting user input in variable d by using scanf function.
	
	// a,b,c,d
	if(a>b)// we are comparing a to b, is a greater than b ?
	// a>b, a is greater than b, true -> enter in if block
	{
	    // a>c, a is greater than c, true -> enter in if block
		if(a>c)// we are comparing a to c,is a greater than c?
		{
			// a>d, a is greater than d, true -> enter in if block
			// if it is not true than -> enter in else block
			if(a>d)//we are comparing a to d, is a greater than d ?
			{
				//a
				printf("a is max.");
				
			}
			else// if it is not true than -> enter in else block
			{
				//d
				printf("d is max.");
			}
			
		}// if it is not true than -> enter in else block
		else// if it is not true than -> enter in else block
		{
			//c,d
			if(c>d)//we are comparing c to d, is c greater than d ?
			{
				//c
				printf("c is max.")
			}
			else// if it is not true than -> enter in else block
			{
				//d
				printf("d is max.")
			}
		 		
		}
	}
	else
	{
		//b,c,d
		if(b>c)//we are comparing b to c, is b greater than c ?
		{
			//b,d
			if(b>d)//we are comparing b to d, is b greater than d ?
			{
				//b
				printf("b is max.");
			}
			else// if it is not true than -> enter in else block
			{
				//d
				printf("d is max.");
			}
		}
		else// if it is not true than -> enter in else block
		{
			if(c>d)//we are comparing c to d, is c greater than d ?
			{
				//c
				printf("c is max.");
			}
			else// if it is not true than -> enter in else block
			{
				//d
				printf("d is max.");
			}
		}
	}	
}
