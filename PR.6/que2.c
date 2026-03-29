#include<stdio.h>

void main()
{
	//Q.2 Frequency Counter
	//Extend the program to count the frequency of each character in a given string.
	
	char name[20];
	
	printf("Enter a string :");
	gets(name);
	
	int n = strlen(name);
	int i,j;
	
	printf("\n");
	
	printf("Frequency of each letter :\n\n");
	
	for(i=0; i<n; i++)
	{
		int count = 1;
		if(name[i]!=NULL)
		{
			for(j=i+1; j<n; j++)
		    {
				if(name[i]==name[j])
				{
					count++;
					name[j] = NULL;
				}
		    }
	    	printf("%c -> %d\n",name[i],count);
		}
			
	}
}
