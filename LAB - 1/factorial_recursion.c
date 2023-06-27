//WAP to find factorial of a given number using recursion.

#include<stdio.h>

int fact(int);
void main()
{
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	printf("Factorial is : %d =%d",n,fact(n));
}
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}		

