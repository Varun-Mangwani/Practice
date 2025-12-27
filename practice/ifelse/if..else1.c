#include<stdio.h>

int main()
{
    int a,b,min;
    printf("Enter The Number: ");
    scanf("%d%d",&a,&b);
    
    if(a<b){
    printf("\n%d Is Minimum",a);
    }else{
    printf("\n%d Is Minimum",b);
    }
    return 0;
}