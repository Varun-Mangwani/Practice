#include<stdio.h>
#include<string.h>

int choice;
void menu();
void numgen();
int main()
{
    char user[] = "varun";
    char pass[] = "mangwani";
    char userin[20];
    char passin[29];
    
    printf("Enter The Username:");
    scanf("%s",&userin);
    printf("\nEnter The Password:");
    scanf("%s",&passin);
    if(strcmp(user,userin)==0 && strcmp(pass,passin)==0){
    printf("\nPassword Authentication Successful....");
    }else{
    printf("\nPassword Authentication Unsuccessful...");
    }
    menu();

    return 0;
}
void menu(){

printf("\n================================");
printf("\n=> Enter 1 to Generate account  ||");
printf("\n=> Enter 2 To Modify Account    ||");
printf("\n=> Enter 3 To Remove Account    ||");
printf("\n=> Enter 4 To Check Account     ||");
printf("\n================================");
printf("\nEnter Your Choice:");
scanf("%d",&choice);
switch(choice){
case 1:
numgen();
break;


}

}
void numgen(){
char name[20],age[10],profession[20];
getchar();
printf("\nEnter The Name: ");
fgets(name, sizeof(name),stdin);
printf("\nEnter The Age:");
gets(age);
printf("\nEnter Profession");
gets(profession);
printf("\nThank You For Info");
printf("\nGenerating Account Number: ");
}