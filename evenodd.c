#include<stdio.h>
int main()
 { 
   int number;
   printf("Enter an integer number: ");
   scanf("%d",&number);
   number%2==0? printf("Enter you have entered even number") : printf("Enter you have entered an odd number");
   return 0;
 }