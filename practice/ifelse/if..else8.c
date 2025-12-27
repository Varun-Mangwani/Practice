#include<stdio.h>

int main()
{    
    float sal,gs,hra,da,ta;
    printf("Enter The Salary");
    scanf("%f",&sal);
    if(sal<25000){
    hra=sal*0.010;
    da=sal*0.007;
    ta=sal*0.005;
    }else if(sal>25000){
    hra=sal*0.008;
    da=sal*0.005;
    ta=sal*0.003;
    }else if(sal>30000){
    hra=sal*0.008;
    da=sal*0.005;
    ta=sal*0.003;
    }
   gs = sal+hra+da+ta;
   printf("%.2lf",gs);
    
    return 0;
}