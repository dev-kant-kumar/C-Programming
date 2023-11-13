// Write a program to reverse a number
#include<stdio.h>
int reverseNum(int a);
int main()
 {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Reverse of entered number : %d \n",reverseNum(num));
    return 0;
 }
 int reverseNum(int a)
  {
    int reminder,reverse=0;
    while(a!=0)
     {
        reminder=a%10;
        reverse=reverse*10+reminder;
        a/=10;
     }
    return reverse; 
  }