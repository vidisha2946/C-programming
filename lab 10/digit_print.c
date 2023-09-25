#include<stdio.h>
void main ()
{
	int n,count=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while (n>0)
	{
		count++;
		n=n/10;
	}
	printf("digit of number is %d",count);
}