// Write a program to free the memory allocated with calloc.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int *ptr;
    // Allocate memory
    ptr=(int *)calloc(5,sizeof(int));
    // Print values
    for(int i=0;i<5;i++)
     {
        printf("%d \n",ptr[i]);
     }
    // Free memory 
    free(ptr);
 }