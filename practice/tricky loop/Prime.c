#include<stdio.h>

void main(){
    int flag=0,i,num;

    printf("Enter The Number: ");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The Number Is Prime!");
    }else{
    printf("The Number Is Not A Prime!");
    }
}