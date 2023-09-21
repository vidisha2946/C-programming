#include<stdio.h>
void main()
{ 
	int i=1,n;
	printf("enter number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
}