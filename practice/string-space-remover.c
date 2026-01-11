#include<stdio.h>

int main()
{
    char string[20];
    int i,j;
    printf("\nEnter A String: ");
    gets(string);
    for(i=0;string[i]!='\0';i++){
    if(string[i]==32){
    j=i;
    while(string[j]!='\0'){
    string[j] = string[j+1];
    j++;
    
    }
    
    
    }
    }
    
    string[i] = '\0';
    printf("\n%s",string);
    
    return 0;
}