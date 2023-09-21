#include<stdio.h>
void main()
{
   int number,i,result=0;
   printf("enter the number:");
   scanf("%d",&number);
   for(i=1;i<=number;i++){
      if(number%i==0)
         result=result+i;
   }
   if(result==2*number)
      printf("perfect number");
   else
      printf("not perfect number");
}