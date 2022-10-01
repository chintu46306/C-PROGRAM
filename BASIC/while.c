#include <stdio.h>

int main(void) {
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        float a,x,y,b;
        scanf("%f%f%f%f",&a,&x,&y,&b);
        float speedA,speedB;
        speedA = a/x;
        speedB = b/y;

        printf("%f amd %f",speedA,speedB);

        if(speedA>speedB){
            printf("ALICE");
        }
        else if (speedA<speedB){
            printf("Bob");
        }
        else if(speedA==speedB){
            printf("equal"); 
        }
        printf("\n");
        
        t--; 
    }
	return 0;
}

