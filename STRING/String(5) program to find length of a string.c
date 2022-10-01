 #include<stdio.h>
  #include<string.h>
  int main()
  {
    char name[30];
    int count=0,i=0;
    printf("Enter the name : ");
    gets(name);
    count=strlen(name);         //no. of words ko count karega jo array mr hoga
    puts(name);
    printf("length of string is : %d",count);
  }

  

 