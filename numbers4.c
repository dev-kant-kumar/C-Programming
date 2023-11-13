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
    // this part will find numbers of digits of entered number and store in count
    while(n!=0)
     {
        reminder=n%10;
        count++;
        n/=10;

     }
    printf("This number has %d digits \n",count); 
    // this part will raise the power of digits to last number and calculating sum 
    for(i=0;i<count;i++)
     {
        reminder=num%10;
        sum+=pow(reminder,count);
        num/=10;

     } 
    printf("Sum is %d \n",sum); 
    if(sum==num1)
     {
        printf("Entered number is an armstrong number \n");
     }
    else
    {
        printf("Entered number is not an armstrong number \n");
    } 

 } 