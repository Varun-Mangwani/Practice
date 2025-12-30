#include<stdio.h>

void main(){

    int r,c,k=65;

    for(r=1;r<=5;r++){
      for(c=1;c<=r;c++){
            printf("%c ",k);
        }
        k++;
        printf("\n");
    }
}