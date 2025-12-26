#include<stdio.h>

//wap to read no. from user and print its even or odd 
void main(){
    int a;

    //input
    printf("\nEnter The Number: ");
    scanf("%d",&a);
    //ternary for even and odd checking
    a%2==0?printf("\nA Is Even No."):printf("\nA Is Odd No.");

}