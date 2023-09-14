#include<stdio.h>
int main()
{
int a;
printf("enter a: ");
scanf("%d",&a);
int lastdigit=a%10;
if (lastdigit %2==0){
	printf("last digit %d even.\n",lastdigit);
}
else
{
	printf("last digit %d odd.\n",lastdigit);
}
}
