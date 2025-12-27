#include<stdio.h>

int main()
{
    float age;
    printf("Enter The Age To Calculate Retirement: ");
    scanf("%f",&age);
    if(age>60){
    printf("\nRetirement Time");
    }else{
    float time = 60-age;
    printf("\nHave some Time(%.2lf years)",time);
    
    }
    return 0;
}