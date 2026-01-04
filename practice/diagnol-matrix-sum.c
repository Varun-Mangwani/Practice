#include<stdio.h>

int main()
{
    int arr[3][3];
    int r,c,sum=0,sum2=0;
    for(r=0;r<=2;r++){
    for(c=0;c<=2;c++){
    printf("\nEnter The Number: ");
    scanf("%d",&arr[r][c]);
    }
    }
    for(r=0;r<=2;r++){
    for(c=0;c<=2;c++){
    printf("\t %d",arr[r][c]);
    
    if(r==c){
    sum=sum+arr[r][c];
    }
    if(r+c==2){
    sum2=sum2+arr[r][c];
    }
    }
    printf("\n");
    }
    printf("\n Sum Of First Diagnol Is %d",sum);
    
        printf("\n Sum Of Second Diagnol Is %d",sum2);
    return 0;
}