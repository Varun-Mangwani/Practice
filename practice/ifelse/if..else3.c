#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    
    if(num % 11 == 0){
    printf("Number Is Divisible By 11");
    }else{
    printf("Number Not Disible By 11");
    }
    
    return 0;
}