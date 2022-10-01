#include <stdio.h>

void main(){ 
    int a,b;
    printf ("input the first number");
    scanf ("%d",&a);
    printf ("input the second number");
    scanf ("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf ("the first number is=%d",a);
    printf ("the second nmber is=%d",b);
}