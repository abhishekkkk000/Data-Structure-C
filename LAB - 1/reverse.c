//WAP to reverse the given number.

#include<stdio.h>

void main()
{
	int n,rev=0,temp=0;
	printf("Enter Number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		temp = n % 10;
		rev = rev * 10 + temp;
		n = n / 10;
	}
	printf("Reverse No is :%d",rev);
}
