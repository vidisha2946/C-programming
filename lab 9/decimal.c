#include<stdio.h>
void main()
{
	int decimal_num,binary_num=0,i=1,reminder;
	printf("Enter a decimal number: ");
	scanf("%d",&decimal_num);
	while(decimal_num !=0)
	{
		reminder=decimal_num%2;
		decimal_num/=2;
		binary_num += reminder*i;
		i*=10;
	}
	printf("Binary number: %d\n",binary_num);
}