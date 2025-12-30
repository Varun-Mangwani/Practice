#include<stdio.h>

void main(){

    int r,c,sp,k=65;

    for(r=1;r<=5;r++){
        for(sp=1;sp<=5-r;sp++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
}