#include<stdio.h>

int main()
{
    int num;
    printf("Enter The Number 1-7: ");
    scanf("%d",&num);
    
    if(num == 1){printf("\nSunday\n");}
    else if(num == 2){printf("\nMonday\n");}
    else if(num==3){printf("\nTuesday\n");}
    else if(num==4){printf("\nWednesday\n");}
    else if(num==5){printf("\nThursday\n");}
    else if(num == 6){printf("\nFriday\n");}
    else if(num==7){printf("\nSaturday\n");}
    else{printf("Invalid Arguments");}
    return 0;
}