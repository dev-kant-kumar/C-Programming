// Write a program to allocate memory to store 5 prices.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    float *ptr;
    ptr=(float *)malloc(5*sizeof(float));
    for(int i=0;i<5;i++)
     {
        printf("Enter price of iteam %d :",i+1);
        scanf("%f",&ptr[i]);
     }
     printf("Price of 5 iteams are below \n");
    for(int i=0;i<5;i++)
     {
        printf("Price of iteam %d :%.1f \n",i+1,ptr[i]);
     }
    return 0;
 }