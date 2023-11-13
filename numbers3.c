// Write a program to check whether entered number is a prime or not
#include<stdio.h>
void is_prime(int n);
int main()
 {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    is_prime(num);
    return 0;
 }
void is_prime(int n)
 {
    int i,count=0;
    if(n>=2)
    {
        for(int i=2;i<=n/2;i++)
         {
            if(n%i==0)
             {
                count++;
                break;
             }
         }
        if(count==1)
         {
            printf("Entered number is not a prime number \n");
         } 
        else
         {
            printf("Entered number is a prime number \n");
         } 
        
    }
    else
    {
        printf("Entered number is not a prime number \n");
    }

 }