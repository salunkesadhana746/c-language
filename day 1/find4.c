#include<stdio.h>
void main()
{
	//4. WAP to Find area of triangle.
	float height,base;
	printf("Enter a value of height :");
	scanf("%f",&height);
	printf("Enter a value of base :");
	scanf("%f",&base);

	float area = (height*base)/2;
	
	printf("Area of triangle :%f",area);
}
