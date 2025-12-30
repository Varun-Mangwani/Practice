#include<stdio.h>

void main(){
    int i,num,sum=1;

    printf("Enter The Number: ");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        sum = sum*i;
        i++;
    }
    printf("%d Is Factorial Of %d",sum,num);
}