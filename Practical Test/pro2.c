#include<stdio.h>
void main()
{
	//2.wap to print grade of based on user given percentage.
	
	int percentage;//declared variable
	char grade;//declared variable
	
	printf("Enter your percentage :");//printing a message to printf function.
	scanf("%d",&percentage);//user input are use to scanf function.
	
	grade = (percentage>=81 && percentage<=100)?'A'://if statement are used to program
		  	(percentage>=71 && percentage<=80)?'B'://if statement are used to program
	  		(percentage>=61 && percentage<=70)?'C'://if statement are used to program
  			(percentage>=51 && percentage<=60)?'D'://if statement are used to program
			(percentage>=41 && percentage<=50)?'E':'F';//if else statement are used to program
			
	printf("Your Grade is : %c",grade);//printing a message to printf function.
		
}
