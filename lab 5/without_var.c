#include<stdio.h>
int main()
{
	int  a,b,c;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}