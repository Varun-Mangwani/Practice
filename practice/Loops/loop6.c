#include<stdio.h>

void main(){

    int num,rev=0,digits,temp;

    printf("Enter The Number: ");
    scanf("%d",&num);
    temp = num;
    while(num != 0){
        digits=num%10;
        rev=rev*10+digits;
        num /= 10;
    }
    if(temp == rev){
    printf("\n Number Is Palendrome");
    }else{
        printf("\n Number is not Palendrome");
    }
}