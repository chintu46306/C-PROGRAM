#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("a=%d,%d,%d,%d\n",a,*p,*(*q),***r);
    printf("address of q=%x, %x\n",r,&q);
     printf("address of p=%x,%x\n",&p,q);
}