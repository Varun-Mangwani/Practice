#include<stdio.h>

void main(){
    int num,count=0,digits,temp,mult=1,sum=0;

    printf("Enter The Number: ");
    scanf("%d",&num);
    temp = num;
    while(num!=0){
        num /= 10;
        count++;
    }
    num=temp;
    while(num!=0){
        digits=num%10;
        for(int i=1;i<=count;i++){
            mult=mult*digits;
        }
        sum = sum+mult;
        mult=1;
        num = num/10;
    }
    if(sum==temp){
        printf("\nThe Number Is Armstrong");
    }else{
    printf("\nThe Number Is Not Armstrong");
}}