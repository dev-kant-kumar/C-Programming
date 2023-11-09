// Write a program to print bridge pattern 
#include<stdio.h>
int main()
 { 
  int row,column,i,j,counter;
   printf("Enter the number of rows :");
   scanf("%d",&row);
   printf("Enter the number of column :");
   scanf("%d",&column);
   
   if(column%2==0)
   column++;
   else
   column;

   for (int i = 0; i < column; i++)
   {
    printf("*");
   }
   
//    counter=column/2;
    
//    for(i=0;i<row;i++)
//     {
        
//         printf("\n");
//     }
    return 0;
 }
    