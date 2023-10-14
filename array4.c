// Write a program to store the first n fibonacci numbers
#include<stdio.h>
int main()
 {
    int terms,terms1,terms2;
    printf("Enter the number of terms of fibonacci series you want to print: ");
    scanf("%d",&terms);
    printf("Enter the first term : ");
    scanf("%d",&terms1);
    printf("Enter second terms : ");
    scanf("%d",&terms2);
    
    int fiboNum[terms];
    fiboNum[0]=terms1;
    fiboNum[1]=terms2;
    
   
    for(int i=0;i<terms;i++)
     {
        fiboNum[i+2]=fiboNum[i]+fiboNum[i+1];
     }

    for(int i=0;i<terms;i++)
     {
        printf(" Terms %d =%d \n",i+1,fiboNum[i]);
     }
   return 0;  
 }