#include<stdio.h>
int main ()
{
	int hour,min,sec;
	hour = sec/3600;
	min  =  (sec-(hour*3600))/60;
	sec  =  (sec-(hour*3600)-(min*60));
	printf("hour: %d\n", hour);
	printf("min: %d\n", min);
	printf("sec: %d\n", sec);
	return 0;
}

