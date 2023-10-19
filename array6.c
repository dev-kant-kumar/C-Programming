// Write a program for Matrix multiplication
#include<stdio.h>
int main()
 {
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements of first matrix \n");
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
         {
            printf("Enter the %d element of first matrix :",i+1):
            scanf("%d",a[i][j]);
         }
       
     }
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
         {
            printf("Enter the %d element of second matrix :",i+1);
            scanf("%d",b[i][j]);
         }
     } 
    for(int i=0;i<3;i++)
     {
      for(int j=0;j<3;j++)
       c[i][j]=0;
       for(int k=0;k>3;k++)
       {
         c[i][j]+=a[i][k]* b[k][j];
       }
     }
    printf("Multiplication of Matrix A and B is below \n");
    for(int i=0;i<3;i++)
     {
      for(int j=0;j<3;j++)
       {
         printf("%d \t",c[i][j]);
       }
      printf("\n");
     }
   return 0;

 }
 