#include<stdio.h>

// 1. Lenght Finder
// Develop a progarm that finds the lenght of a string using a pointer.

void stringlength(char *ptr)
{
	int length;
	
	while(*ptr != NULL)
	{
		length++;
		ptr++;
	}
	
	printf("The length of a string is : %d\n",length);
	

}

int main()
{
	char name[20];
	
	printf("Enter a string :");
	gets(name);
	
	printf("\n");
	
	stringlength(&name);
	
}
