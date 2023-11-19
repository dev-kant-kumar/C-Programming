// Find the salted form of a password entered by user if the salt is "123" & added at the end.
#include<stdio.h>
#include<string.h>

void salting(char password[]);
int main()
 {
    char input_password[17];
    printf("Enter your password: ");
    scanf("%s",input_password);
    salting(input_password);
    return 0; 
 }

void salting(char password[]) 
 {
    char salt[]="123";
    char salted_password[20];
    strcpy(salted_password,password);
    strcat(salted_password,salt);
    printf("Salted password : %s \n",salted_password);
 }