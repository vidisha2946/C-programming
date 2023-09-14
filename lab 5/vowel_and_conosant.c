#include<stdio.h>
int main()
{
	char x;
	printf("entetr x: ");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("x is vowel");
	}
	else{
		printf("x is consonant");
	}
}