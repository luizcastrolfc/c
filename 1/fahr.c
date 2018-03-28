#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    int farh;
    printf("   f\t   c\n");
    for(farh = LOWER; farh <= UPPER; farh = farh + STEP)
        printf("%3d\t%4.1f\n", farh, (5.0/9.0)*(farh - 32));
}
