#include<stdio.h>
void main()
{
	char lowercase='a',uppercase='A';
	while(lowercase<='z' && uppercase<='Z')
	{
		printf("%c",lowercase);
		printf("%c\n",uppercase);
		lowercase++;
		uppercase++;
	}
}