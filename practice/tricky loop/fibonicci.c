#include<stdio.h>

void main(){
    int a=0,b=1,c=0,tar;
    printf("Enter Target For Fabonicci: ");
    scanf("%d",&tar);

    while(c<=tar){
        printf("\nseries is. %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}