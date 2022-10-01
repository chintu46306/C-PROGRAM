#include<stdio.h>
void main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=&a;                            //  & (address)  *P  (indirection)
    q=&b;
    c=*p;
    printf("value of a=%d\n",a);
    printf("value of a=%d\n",*p); 
    printf("adress of a=%a\n",&a);
    printf("adress of a=%d\n",p);
    printf("adress of p=%a",&p);
    printf("c=%d\n",c);
}