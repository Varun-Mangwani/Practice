#include<stdio.h>

int main()
{    
    float mark;
    printf("Enter The Marks: ");
    scanf("%f",&mark);
    if(mark<45){
    printf("\nGrade D ");
    }else if(mark>=55 && mark<=74){
    printf("\nGrade C ");
    
    }else if(mark>=75&& mark<=84){
   printf("\nGrade B");
    }else if(mark>=85){
   printf("\nGrade A");
    }
    
    return 0;
}