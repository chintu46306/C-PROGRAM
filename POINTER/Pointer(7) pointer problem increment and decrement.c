#include<stdio.h>
void main()
{
    int a[]={10,11,-1,56,57,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);
    printf("%d\n%d\n%d\n",(*p)++,*p++,*++p);
   // q=p+3;
   // printf("%d",*q-3);
    //printf("%d",*--p+5);
   // printf("%d",*p+*q);
}