// Write a program to create an array of size 5 (using calloc) &enter its values from the user.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
     {
        printf("Enter numbers %d : ",i+1);
        scanf("%d",&ptr[i]);
     }
     printf("Entered numbers are below \n");
     for(int i=0;i<5;i++)
      {
        printf("Number %d : %d \n",i+1,ptr[i]);
      }
      return 0;
 }