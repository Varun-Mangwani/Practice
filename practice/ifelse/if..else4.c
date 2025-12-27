#include<stdio.h>

int main()
{

    int a,b,max;
    printf("Enter The Number:");
    scanf("%d%d",&a,&b);
    
    if(a>b){
    printf("\n%d Is Greatest",a);
    }else{
    printf("\n%d Is Greatest",b);
    
    }
    return 0;
}