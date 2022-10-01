#include<stdio.h>
char* display();
void main()
{
    char *str;
    str=display();
 //   str[0]="z";
    printf("sring is :%s",str);

}
char* dislay()
{
      char* str="chintu";
     return str;
}