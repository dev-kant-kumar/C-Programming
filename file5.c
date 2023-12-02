// Write a program to write all the odd the numbers from 1 to n in a file.
#include<stdio.h>
 int main()
  {
    FILE *fptr;
    fptr=fopen("file5.txt","w");
    int n;
    printf("Enter number till you want odd no : ");
    scanf("%d",&n);
    fprintf(fptr,"Odd numbers from 1 to %d is below \n",n);
    for(int i=1;i<=n;i++)
     {
        if(i%2!=0)
         {
            fprintf(fptr,"%d \t",i);
         }
     }
    fclose(fptr);
    return 0;
  }