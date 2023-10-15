// Create 2D array ,storing the tables of 2 & 3.
#include<stdio.h>
int main()
 {
    int tables[2][10],n=2;
    // printf("Enter the tables of 2 \n");
    for(int i=0;i<2;i++)
     {
        for(int j=0;j<10;j++)
         {
           tables[i][j]=n*(j+1);

         }
         n++;
         
     }
  printf("Tables of 2 and 3 are bellow \n");
  for(int i=0;i<2;i++)
   {
      for(int j=0;j<10;j++)
       {
         printf("%d \t",tables[i][j]);
       }
       printf("\n");
   }

 }