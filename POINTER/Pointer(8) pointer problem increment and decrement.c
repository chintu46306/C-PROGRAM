#include<stdio.h>
void main()
{
    char str[]="welcome to jenny's lectures";
    char *ptr=str;
    printf("%c",*ptr);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*((ptr--+5)-1)+3);
    printf("%c\n",*(++ptr+10)-32);
    printf("%c\n%c\n%c",*ptr,*++ptr,* --ptr);
}