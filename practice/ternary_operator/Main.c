#include<stdio.h>

//wap to find out maximum of 2 numbers?
int a,b,ans;
void main(){
    printf("Enter The Number:");
    scanf("%d%d",&a,&b);

    //comparison by ternary
    ans = (a==b)?
    (printf("The Input is same"))
    :(a>b)?printf("%d is greater",a)
    :printf("%d is greater",b);

}