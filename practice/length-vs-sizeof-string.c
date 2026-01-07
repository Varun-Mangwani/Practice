#include<stdio.h>

int main()
{
    char name[20];
    int count=0;
    printf("Enter The String:");
    scanf("%s",name);
    while(name[count]!='\0'){
    printf("%c",name[count]);
    count++;
    }
    printf("\nlength is %d",count);
    printf("\nsize of string is %d",sizeof(name));
    return 0;
}