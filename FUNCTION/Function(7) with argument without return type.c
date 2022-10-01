#include<stdio.h>
void sum(float,float);
void main()
{
    float a,b;
    printf("enter a and b : ");
    scanf("%f%f",&a,&b);
    sum(a,b);
}
void sum(float x,float y)
{
    float s=0;
    
    s=x+y;
    printf("sum=%f",s);
}