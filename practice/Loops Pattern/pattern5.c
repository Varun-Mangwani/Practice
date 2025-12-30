#include<stdio.h>

void main(){
    int r,c,k=0;

    for(r=0;r<=5;r++){
            for(c=0;c<=r;c++){
                printf("%d ",k);
                k =k+1;
            }
            
            printf("\n");
    }
}