#include<stdio.h>
int main()
{
	char ch;
	printf("enter a value of any charactor.\n");
	scanf("%c",&ch);
	if (ch >= 'A'&& ch<= 'Z'){
		printf("%c is uppercase letter.\n",ch);}
	else if (ch >= 'a'&& ch<= 'z'){
		printf("%c is lowercase letter.\n",ch);}
	else if (ch >= '0' && ch<= '9'){
		printf("%c is digit.\n",ch);}
	else {
		printf("%c is specialcase",ch);
	}
}
