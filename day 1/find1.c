#include<stdio.h>
void main ()
{
	//WAP to Find area of circle.
	float r;
	printf("Enter the value of r :");
	scanf("%f",&r);
	
	float pi = 3.14;
	float ans = pi*r*r ;
	
	printf("area of circle = %f",ans);
}
