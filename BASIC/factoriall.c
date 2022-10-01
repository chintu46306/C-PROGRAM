#include<stdio.h>  
int main()    
{    
 int i,fact=1,number=5;    
//  printf("Enter a number: ");    
//   scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
//   printf("Factorial of %d is: %d",number,fact); 
printf("%d",fact);   
return 0;  
}   




