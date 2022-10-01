#include<stdio.h>
void main()
{
    int a=20,b=40;
    int *p,*q;
    p=&a;
    q=&b;
    q=p;
    printf("a=%d,%d,%d,%d",a,b,*p,*q);
}