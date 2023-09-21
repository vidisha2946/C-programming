#include<stdio.h>
void main()
{
	int n,i,f;
	f=1,i=1;
	printf("enter number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	}
		printf("%d",f);
}