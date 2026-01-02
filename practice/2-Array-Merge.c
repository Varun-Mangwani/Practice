#include<stdio.h>

int main()
{
    int arr1[5],arr2[5],arr3[10];
    int i;
    
    for(i=0;i<=4;i++){
    printf("\nEnter the number: ");
    scanf("%d",&arr1[i]);
    }
    printf("\nInsertion in second array matrix");
    for(i=0;i<=4;i++){
    printf("\nEnter the number: ");
    scanf("%d",&arr2[i]);
    }
    for(i=0;i<=9;i++){
    if(i<=4){
    arr3[i]=arr1[i];
    }else{
    arr3[i]=arr2[i-5];
    }
    }
    for(i=0;i<=9;i++){
    printf("%d ,",arr3[i]);
    }
    
    return 0;
}