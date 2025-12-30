#include<stdio.h>

void main(){
    int i,num,sum=0;

    printf("Enter The Number: ");
    scanf("%d",&num);

    for(i=1;i<num;i++){
        if(num%i==0){
            sum = sum+i;
        }
    }
    if(sum == num){
        printf("\nNumber Is Perfect! ");
    }else{
    printf("\nNumber Is Not A Perfect! ");
}}