#include<stdio.h>

int main()
{
    char in;
    printf("Enter A Character :");
    scanf("%c",&in);
    
    if(in == 'a' || in == 'e'||in == 'i'|| in == 'o' || in == 'u'){
    
    printf("\nThe Character Is Vowel ");
    }
    else{
    printf("\nThe Character is consonent ");
    }
    return 0;
}