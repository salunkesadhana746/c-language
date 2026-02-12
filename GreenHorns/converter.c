#include <stdio.h>

void main()
{
	//2. Write C program to convert temperature from degree Celsius to Fahrenheit.(f=(9/5*c)+32)
	int clesius;
	 
	printf("Enter  the temperature in Clesius :");
	scanf("%d",&clesius);
	
    float fahrenheit = (clesius*1.8 )+ 32;
	printf("the temperature in fahrenheit: %.1f",fahrenheit);
}
