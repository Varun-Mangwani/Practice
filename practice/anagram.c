#include<stdio.h>
void pwd();
int main()
{
    char string1[20],string2[20];
    int i=0,len1=0,len2=0,flag=1;
    printf("\nEnter The String:");
    gets(string1);
    printf("\nEnter Second String:");
    gets(string2);
    for(i=0;string1[i]!='\0';i++){
    len1++;
    }
    for(i=0;string2[i]!='\0';i++){
    len2++;
    }
    if(len1==len2){
    printf("\n\tQualified String ..\n\n\t String Comparison\n");
    for(i=0;string1[i]!='\0';i++){
    if(string1[i]!=string2[i]){
    flag=0;
    break;
    }
    }
    }
    if(flag==1){
    printf("\n\tString Is Anagram");
    }else{
    printf("\n\tString Is Not Anagram");
    }
    return 0;
}
