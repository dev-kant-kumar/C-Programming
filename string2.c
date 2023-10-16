//Ask the user to enter their firstname & print it back to them. Also try this with their full name.
#include<stdio.h>
#include<string.h>
int main()
 {
    char fullname[50];
    printf("Enter your name: ");
    scanf("%[^\n]s",fullname); 
    printf("%s",fullname);
    return 0;
 }