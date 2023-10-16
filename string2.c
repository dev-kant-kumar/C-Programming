//Ask the user to enter their firstname & print it back to them. Also try this with their full name.
#include<stdio.h>
#include<string.h>
int main()
 { 
    char firstName[50];
    char fullname[50];
   //  printf("Enter your first name : ");
   //  scanf("%s",firstName);
   //  printf(" Your first name is %s \n",firstName);

    // Second part of program
    printf("Enter your full name: ");
    scanf("%[^\n]s",fullname); 
    printf(" Your full name is %s",fullname);
    return 0;
 }