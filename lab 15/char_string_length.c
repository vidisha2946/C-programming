#include <stdio.h>
#include <string.h>
void main() 
{
  char s1[100];
  printf("Enter a string: ");
  scanf("%s",s1);
  printf("string is: %s\nlength of string is: %d",s1,strlen(s1));
}