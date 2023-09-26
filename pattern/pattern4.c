#include<stdio.h>
void main()
{
	int i,j,n=4,num=0;

	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j <=i; j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
}