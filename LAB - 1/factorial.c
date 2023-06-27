//WAP to find factorial of a given number (using loop)

#include<stdio.h>

void main()
{
	int n,i,fact=1;
	printf("Enter Number :");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("Factorial is %d \n:",fact);
}
