//WAP to find factors of the given number.

#include<stdio.h>

void main()
{
	int n,i,fact=1;
	printf("Enter Number :");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		if(n%i==0)
		{
			printf("Factor is :%d \n",i);
		}
	}
} 
