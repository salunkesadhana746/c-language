#include <stdio.h>
#include <conio.h>
void main()
{
	float clesius,fahrenheit;
	 
	printf("Enter  the temperature in Clesius :");
	scanf("%f",&clesius);
	
	fahrenheit = (9.0/5.0 * clesius)+ 32.0;
	printf("the temperature in fahrenheit: %.1f\n",fahrenheit);
}
