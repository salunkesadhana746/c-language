#include<stdio.h>
void main()
{
	float baseSalary,HRA,DA,TA,totalSalary;
	printf("ENter base Salary :");
	scanf("%f",&baseSalary);
	
	printf("Enter HRA% :");
	scanf("%f",&HRA);
	
	printf("Enter DA% :");
	scanf("%f",&DA);
	
	printf("Enter TA% :");
	scanf("%f",&TA);
	
	float hraAmount = (HRA*baseSalary)/100;
	float daAmount = (DA*baseSalary)/100;
	float taAmount = (TA*baseSalary)/100;
	
	totalSalary = baseSalary + HRA + DA + TA;
	printf("Total Salary : Rs. %.2f\n",totalSalary);	
}


