//WAP to count digit of a given number.

#include<stdio.h>

void main()
{
	int n,i,temp=0,count=0;
	printf("Enter Number :");
	scanf("%d",&n);
	while(n>0)
	{
		temp = n % 10;
		n = n / 10;
		count += 1;
	}
	printf("No of Digit : %d",count);
}
