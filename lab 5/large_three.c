#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a= ");
	scanf("%d",&a);
	printf("enter b= ");
	scanf("%d",&b);
	printf("enter c= ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
			printf("a is large");
		}
		if(b>a && b>c)
		{
			printf("b is large");
		}
		if(c>a && c>b)
		{
			printf("c is large");
		}
}