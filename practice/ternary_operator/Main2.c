#include<stdio.h>

//wap to read 3 numbers and print maxium and second maximux
void main(){
    //initialization
    int a,b,c,ans;

    //input
    printf("Enter The Number: ");
    scanf("%d %d %d",&a,&b,&c);

    //logics of maximum
    ans = ((a>b)?((a>c)?a:c):b>c?b:c);

    

    

    //printing
    printf("\nMaximum Is %d",ans);


}