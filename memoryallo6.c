// Write a program to allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int *ptr,counter=5;
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=1;i<20;i++)
     {
        if(i%2!=0)
         {
            ptr[i-1]=i;
         }
        else if(i%2==0)
         {
            continue;
         } 
     }
    printf("First five odd nubers are below \n"); 
    for(int i=0;i<5;i++)
     {
        printf("%d \t",ptr[i]);
     }

    
 return 0;
 }      