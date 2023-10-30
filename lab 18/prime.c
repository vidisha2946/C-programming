#include<stdio.h>
int isPrime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int res = isPrime(n);
    if(res==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
int isPrime(int n)
{
    int count=0,i=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if (count==2)
        {
           return 1;
        }
        else
        {
            return 0;
        }  
         
}
