//WAP whether the given number is prime or not.

#include<stdio.h>
void main()
{
	int n,i,flag=0;
	printf("Enter Number :");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			printf("No. is Not Prime");
			flag=1;
			break;	
		}
		
	}
	if(flag==0)
	{
		printf("No. is Prime");
	}
}
