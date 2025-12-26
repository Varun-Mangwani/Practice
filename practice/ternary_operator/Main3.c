#include<stdio.h>

//wap to read a number of days from user check wether its leap year or not

void main(){

    //initialization
    int input;

    //input
    printf("\nEnter The Number of days:");
    scanf("%d",&input);

    //checking via ternary operator
    //Deciding leap year by division rules 
    input%4==0 && input%100 != 0? printf("\nIts A Leap Year!"):printf("\nNot A Leap Year!");



}