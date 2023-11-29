// Write a program to read 5 integer from a file
#include<stdio.h>
int main()
 {
    FILE *fptr;
    fptr=fopen("test.txt","r"); 
    if(fptr==NULL)
     {
        printf("File doesn't exist \n");
     }
    else 
     {
        for(int i=0;i<5;i++)
         {
           int num;
           fscanf(fptr,"%d",&num);
           printf("Number is:%d \n",num);
         }

     }
    fclose(fptr);
    return 0;
 }