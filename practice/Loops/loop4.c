#include<stdio.h>

void main(){

    int num,sum=0,digits;

    printf("Enter The Number: ");
    scanf("%d",&num);

    while(num!=0){
        digits = num%10;
        sum = sum+digits;
        num = num/10;
    }
    printf("\n%d Is Sum Of All Digits.",sum);
}