#include<stdio.h>
void main()
{
	// 5. wap to print n to 1 using do..while.
	
	int n;            //declare variable
	
	printf("Enter n :");
	scanf("%d",&n);//user input are use to scanf function.
	do                     //exit control loop
	{
		printf("%d ",n);    //printing a message
		n--;                 //i decrement
	}
	while(n>=1);               // a using while to start conditions
}



