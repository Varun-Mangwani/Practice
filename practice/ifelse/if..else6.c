#include<stdio.h>

int main()
{
    int num,positive=0,negetive=0,zero=0;
    
    for(int i=1;i<=5;i++){
    
    
    printf("Enter Some Numbers: ");
    scanf("%d",&num);
    
    if(num<0){
    negetive++;
    }else if(num>0){
    positive++;
    } else{
    zero++;
    }
    
    
    }
    printf("\n%d Is Count Of Positive",positive);
    printf("\n%d Is Count Of Negetive",negetive);
    printf("\n%d Is Count Of Zero",zero);
    return 0;
}