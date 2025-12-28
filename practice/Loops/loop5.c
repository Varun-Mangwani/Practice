#include<stdio.h>

void main(){

    int num,rev=0,digits;

    printf("Enter The Number: ");
    scanf("%d",&num);

    while(num != 0){
        digits=num%10;
        rev=rev*10+digits;
        num /= 10;
    }
    printf("\n %d Is Reverse Of Number.",rev);
}