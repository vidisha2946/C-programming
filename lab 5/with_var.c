#include<stdio.h>
int main()
{
	int  a,b,c;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("%d %d" ,a,b);
	}