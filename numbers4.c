// Write a program that finds whether entered number is an armstrong or not.
#include<stdio.h>
#include<math.h>
void is_armstrong(int n);
int main()
 {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    is_armstrong(num);
 }
void is_armstrong(int n)
 {
    int reminder,count=0,sum=0,i,num=n,num1=n;
    // Find the numbers of digits of input number and store it in count.
    while(n!=0)
     {
        reminder=n%10;
        count++;
        n/=10;

     }
    printf("This number has %d digits \n",count); 
    // Calculate the sum of the digits raised to the power of the number of digits.
    for(i=0;i<count;i++)
     {
        reminder=num%10;
        sum+=pow(reminder,count);
        num/=10;

     } 
    printf("Sum is %d \n",sum); 
    // Check if the sum of the digits is equal to the original input number.
    if(sum==num1)
     {
        printf("Entered number is an armstrong number \n");
     }
    else
    {
        printf("Entered number is not an armstrong number \n");
    } 

 } 