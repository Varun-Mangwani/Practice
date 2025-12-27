#include<stdio.h>

int main()
{
    float salary,age,elegiblity=-1;
    
    printf("Enter Details For Loan Eligibility Check: ");
    
    printf("\nEnter The Salary: ");
    scanf("%f",&salary);
    printf("Enter The Age: ");
    scanf("%f",&age);
    
    if(age>21){
    if(salary>30000){
    printf("\nEligible...");
    elegiblity=1;
    }else{
    printf("Not Eligible..");
    printf("Not Enough Age..");
    }
    }else{
    printf("\nNot Eligible..");
    printf("\nSalary Is Not Enough...");
    }
    return 0;
}