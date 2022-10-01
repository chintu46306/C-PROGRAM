#include<stdio.h>
int sum(int,int);
void main()
{
    int x,y,c;
    printf("enter x and y : ");
    scanf("%d%d",&x,&y);
    c=sum(x,y);
    printf("sum=%d",c);
}
int sum(int a, int b)
{
    int sum=0;
    sum=a+b; 
    return sum;
}