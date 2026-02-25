#include<stdio.h>
void main()
{
	//1. develop a program that takes a score out of 100 as input from the user and calculates 
	//the corresponding geade using a ternary operator. Allocate grade from a to f for various ranges.
	
	int score;
	char grade;
	
	printf("Enter your score :");
	scanf("%d",&score);
	
	grade = (score>=81 && score<=100)?'A':
		  	(score>=71 && score<=80)?'B':
	  		(score>=61 && score<=70)?'C':
  			(score>=51 && score<=60)?'D':
		  	(score>=41 && score<=50)?'E':'F';
	  		
	//printing a message.  		
	printf("your grade is %c\n",grade);
	
	//2. Additional comments
	
	switch(grade)
	{
		case 'A' :  printf("Excellent Work !\n");
		break;
		
		case 'B' :  printf("Well Done !\n");
		break;
		
		case 'C' :  printf("Good Job !\n");
		break;
		
		case 'D' :  printf("You passed, but you could do better !\n");
		break;
		
		default  : printf("Sorry, you failed !\n");
		
	}
	
	
	
	/*Further , extend the program to check eligibitity for the next level based on  the grade using an if-else statement.
	print 'Congratulations! You are eligible for next level' if the grade is from 'A' to 'D'. print 'please try again next time' 
	if the grade is 'E'*/
	
	if(grade>='A' && grade<='D')
	{
		printf("Congratulations! You are eligible for next level .");
		
	}
	else
	{
		printf("You are not eligible, please try again next time !");
		
	}
	
	
}
