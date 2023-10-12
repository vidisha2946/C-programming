#include<stdio.h>
void main()
{
    int x=4;
    int y=2;
    int answer=x,increment=x;
    for (int i=1;i<y;i++){
        for (int j=1;j<x;j++){
            answer+=increment;
        }
        increment=answer;
    }
    printf("%d",answer); 
}