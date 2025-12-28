#include<stdio.h>

void main(){

    int num,count=0;

    printf("\nEnter The Number: ");
    scanf("%d",&num);

    while(num != 0){
        num /= 10;
        count++;
    }

    printf("\n%d Is Count Of Number Of Digits",count);
}