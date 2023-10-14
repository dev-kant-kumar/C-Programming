// Write a program to print hello world five times
#include<stdio.h>
void printhello(int n);
void main()
 {
    int n;
    printf("Enter the numbers of times you want to print  hello world : ");
    scanf("%d",&n);
    printhello(n);
    
 }
 void printhello(int n) 
  {
    if(n==0)
     {
        return;
     }
     printf("\n Hello World");
     printhello(n-1);
  }