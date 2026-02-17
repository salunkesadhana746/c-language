#include<stdio.h>
void main()
{
	//6. WAP to Find min. from given 5 no. using nested if else.
	
	int a,b,c,d,e;//we are declered interger variable a,b,c,d and e.
	
	printf("Enter a :");// we are printing a message Enter a : by using printf function.
	scanf("%d",&a);//we are geting user input in variable a by using scanf function.
	printf("Enter b :");// we are printing a message Enter b : by using printf function.
	scanf("%d",&b);//we are geting user input in variable b by using scanf function.
	printf("Enter c :");// we are printing a message Enter c : by using printf function.
	scanf("%d",&c);//we are geting user input in variable c by using scanf function.
	printf("Enter d :");// we are printing a message Enter d : by using printf function.
	scanf("%d",&d);//we are geting user input in variable d by using scanf function.
	printf("Enter e :");// we are printing a message Enter e : by using printf function.
	scanf("%d",&e);//we are geting user input in variable e by using scanf function.
	
	//a,b,c,d,e
	if(a<b)//we are comparing a to b,is a less than b?
	{
		//c,d,e,
		if(a<c)//we are comparing a to c,is a less than c?
		{
			//d,e
			if(a<d)//we are comparing a to d,is a less than d?
			{
				//e
				if(a<e)//we are comparing a to e,is a less than e?
				{
					//a
					printf("a is min.");//we are printing a message a is minimum.
					
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message e is minimum.	
				}	
			}
			else
			{
				//d,e
				if(d<e)//we are comparing d to e,is d less than e?
				{
					//d
					printf("d is min."); //we are printing a message d is minimum.	
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message e is minimum.	
				}	
			}	
		}
		else
		{
			//c,d,e
			//d,e
			if(c<d)//we are comparing c to d,is c less than d?
			{
				//e
				if(c<e)//we are comparing c to e,is c less than e?
				{
					//c
					printf("c is min.");//we are printing a message c is minimum.
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message d is minimum.
				}
			}
			else
			{
				//d,e
				if(d<e)//we are comparing d to e,is d less than e?
				{
					//d
					printf("d is min."); //we are printing a message d is minimum.
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message e is minimum.
				}
			}
			
		}	
	}
	else
	{
		//b,c,d,e
		//c,d,e
		if(b<c)//we are comparing b to c,is b less than c?
		{
			//d,e
			if(b<d)//we are comparing b to d,is b less than d?
			{
				//e
				if(b<e)//we are comparing b to e,is b less than e?
				{
					//b
					printf("b is min.");//we are printing a message b is minimum.
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message e is minimum.
				}
			}
			else
			{
				//d,e
				if(d<e)//we are comparing d to e,is a less than e?
				{
					//d
					printf("d is min."); //we are printing a message d is minimum.	
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message e is minimum.
				}
			}	
		}
		else
		{
			//c,d
			if(c<d)//we are comparing c to d,is c less than d?
			{
				//e
				if(c<e)//we are comparing c to e,is c less than e?
				{
					//c
					printf("c is min.");//we are printing a message c is minimum.
				}
				else
				{
					printf("e is min.");//we are printing a message e is minimum.
				 	
				}	 	
			}
			else
			{
				//d,e
				if(d<e)//we are comparing d to e,is d less than e?
				{
					//d
					printf("d is min."); //we are printing a message d is minimum.	
				}
				else
				{
					//e
					printf("e is min.");//we are printing a message e is minimum.
				}
			}	
		}	
	}	
}
