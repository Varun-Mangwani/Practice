#include<stdio.h>

int main()
{
    int arr[11];
    int i,value,pos;
    for(i=0;i<=9;i++){
    printf("\nEnter The Number: ");
    scanf("%d",&arr[i]);
    }
    
    printf("\nenter the value: ");
    scanf("%d",&value);
    printf("\nenter the position: ");
    scanf("%d",&pos);
    pos--;
    for(i=9;i>=pos;i--){
    arr[i+1]=arr[i];
    }
    arr[pos]= value;
    printf("\nArray After Initialisation");
    
    for(i=0;i<=10;i++){
    printf("\n%d",arr[i]);
    }
    return 0;
}