#include<stdio.h> 
void main() 
{ 
	int x,y,c=1; 
	printf("Enter value of x:"); 
	scanf("%d",&x); 
	printf("Enter value of y:"); 
	scanf("%d",&y); 
	while(y>=1) 
	{		 
		c=x*c; 
		y=y-1; 
	}	 
		printf("%d",c); 
} 