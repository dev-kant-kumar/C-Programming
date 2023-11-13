// Write a program to check the entered number is a palindrome number or not.
#include<stdio.h>
void is_palindrome(int n);
int main()
 {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    is_palindrome(num);
    
   return 0;  
 }
void is_palindrome(int n)
 {
    int reminder,reverse=0,num=n;
    while(n!=0)
     {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n/=10;
     }
    if(num==reverse)
     {
        printf("Entered number is a palindrome number \n");
     }
    else
     {
        printf("Entered number is not a palindrome number \n");
     }
 }