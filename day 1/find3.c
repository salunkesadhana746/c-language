#include<stdio.h>
void main()
{
	//3. WAP to Find area of rectangle.
	float lenght,width;
	
	printf("Enter a value of lenght :");
	scanf("%f",&lenght);
	printf("Enter a value of width :");
	scanf("%f",&width);
	
	float area = lenght * width;
	
	printf("Area of rectangle :%f",area);
}
