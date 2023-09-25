#include<stdio.h>
void main()
{
	int n,sum=0,i=0,val;
	printf("enter a number which you want: ");
	scanf("%d",&n);
	while(i<n){
		printf("enter %d:",i+1);
		scanf("%d",&val);
		sum=sum+val;
		i++;
	}
	printf("\n sum = %d",sum);
	printf("\n average = %f",((float)sum)/n);
}