#include<stdio.h>
void main()
{
	int i=1,sum=0,n;
	scanf("%d",&n);
	while(i<=n){
		if(n%2==0){
			sum=sum-i;
		}
		else{
			sum=sum+1;
		}
		i++;
	}
	printf("%d\n",sum);
}
