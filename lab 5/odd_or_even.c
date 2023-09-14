#include<stdio.h>
int main()
{
	int a;
	printf("enter an int value: ");
	scanf("%d",&a);
	if(a%2==1)
	{
	printf("number is odd");
	}
	else{
		printf("number is even");
	}
}