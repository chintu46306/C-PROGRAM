/*  1. NO ARGUMENT WITHOUT RETURN TYPE
    2. NO ARGUMENT WITH RETURN TYPE
    3. WITH ARGUMENT NO RETURN TYPE
    4. WITH ARGUMENT WITH RETURN TYPE */
    #include<stdio.h>
    void sum(void);
    void main()    
    {
        sum();
    }
    void sum()
    {
        int a=5,b=7,sum=0;
        sum=a+b;
        printf("the sum is=%d",sum);
    }
