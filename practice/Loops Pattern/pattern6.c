#include<stdio.h>

void main(){

    int sp,r,c;

    for(r=1;r<=5;r++){
        for(sp=1; sp<=6-r;sp++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("* ");
        }
        printf("\n");
    }
}