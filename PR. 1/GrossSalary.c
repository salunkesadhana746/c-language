#include<stdio.h>

void main()
{
 	 //2. Gross Salary Calculator
 	 /*Create a program that calculates the gross salary by adding percentages of HRA,DA and TA
	  to the base salary as chosen by the user*/
     //Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
   	 //Ans = 123 RS
   	 
	float base_salary;
	printf("Enter base Salary :");
	scanf("%f",&base_salary);
	
	float hra = (base_salary*10)/100;
	float da = (base_salary*5)/100;
	float ta = (base_salary*8)/100;
	
	float gross_salary = base_salary + hra + da + ta;
	
	printf("Gross Salary : Rs. %.2f",gross_salary);
	
}
