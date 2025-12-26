#include<stdio.h>

//wap to read marks from user and check he is pass or not and give grades?

void main(){

    //initialization
    int mark;

    //input
    printf("Enter The Number: ");
    scanf("%d",&mark);

    //logic
    mark<=45?printf("\nSorry!You Filed"):printf("\nGreat!You Passed");

    //logic for grades
    mark>=50 && mark<=70?printf("\nGrades C\n"):printf("");
    mark>=70 && mark<=80?printf("\nGrades B\n"):printf("");
    mark>=80 && mark<=90?printf("\nGrades B++/A\n"):printf("");
    mark>=95 && mark<=100?printf("\nGrades A++\n"):printf("");

}