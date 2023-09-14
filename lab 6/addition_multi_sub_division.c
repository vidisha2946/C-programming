#include<stdio.h>
int main ()
{ 
	int a,b,d;
	char c;
	printf("enter your choice(+,-,*,/): ");
	scanf("%c",&c);
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	if(c=='+')
	{
		d=a+b;
		printf("sum is a+b =%d",d);
	}
	if(c=='-')
	{
		d=a-b;
		printf("sum is a-b =%d",d);
	}
	if(c=='*')
	{
		d=a*b;
		printf("sum is a*b =%d",d);
	}
		if(c=='/')
	{
		if(b!=0)
		{
		d=a/b;
		printf("sum is a/b =%d",d);
		}
		else{
			printf("enter valid b");
		}
	}
	return 0;
}
	
