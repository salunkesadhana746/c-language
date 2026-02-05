#include<stdio.h>
void main()
{
	//5. WAP to Simple interest.
	int principal,rate,time;
	printf("Enter a principal :");
	scanf("%d",&principal);
	printf("Enter a rate :");
	scanf("%d",&rate);
	printf("Enter a time :");
	scanf("%d",&time);
	
	int si = (principal*rate*time)/100;
	printf("Simple interest : %d",si);
	
	int total = principal + si;
	printf("\ntotal Amount :%d",total);
	
}
