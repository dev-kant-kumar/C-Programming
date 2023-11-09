// Write a program for matrix multiplication
#include<stdio.h>
void mulCheck(int a, int b, int c , int d);
void MatrixMul( int a, int b, int c, int d);

int main()
 {
   // arow= no of row of first matrix, bcolumn= no of columns of first matrix and same for b as second matrix
     int arow,acolumn,brow,bcolumn;
     printf("Enter the no of rows for first matrix : ");
     scanf("%d",&arow);
     printf("Enter the no of columns for first matrix : ");
     scanf("%d",&acolumn);
     printf("\n");
     printf("Enter the no of rows of second matrix : ");
     scanf("%d",&brow);
     printf("Enter the no of columns for second matrix : ");
     scanf("%d",&bcolumn);
     mulCheck(arow,acolumn,brow,bcolumn);
     return 0;
 } 

// This function check whether matrix multiplication is possible or not 
 
 void mulCheck( int a, int b, int c, int d)
  {
    if(b==c)
     {
       MatrixMul(a,b,c,d);
     }
    else
     {
      printf("\n");
      printf("Matrix Multiplication is not possible with entered no of rows and columns data \n");
      printf("Columns of first matrix must be same as rows of second matrix \n\n");
     } 
  }

  // This function takes input of matrix elements, perform matrix multiplication and print it.

void MatrixMul( int a, int b, int c, int d)
  {
    int M1[a][b],M2[c][d],P[a][d]; 
    // M1= first matrix, M2= second matrix, P is resultant matrix
    printf("\n");
    printf("Enter %d elements of first matrix  \n\n",a*b);
    for(int i=0;i<a;i++)
     {
       for(int j=0;j<b;j++)
        {
         printf("Enter %d element of %d row : ",j+1,i+1);
         scanf("%d",&M1[i][j]);
        }
     }
    printf("\n"); 
    printf("Enter %d elements of second matrix \n\n",c*d);
    for(int i=0;i<c;i++)
     {
       for(int j=0;j<d;j++)
        {
         printf("Enter %d element of %d row : ",j+1,i+1);
         scanf("%d",&M2[i][j]);
        }
     }
    //  Matrix Multiplication part 
     for(int i=0;i<a;i++)
      {
        for(int j=0;j<d;j++)

         {
           P[i][j]=0;
           for(int k=0;k<d;k++)
            {
             P[i][j]+=M1[i][k]*M2[k][j];
            }
         }
      }
    // Printing Matrix Multiplication 
    printf("\n");
    printf("Multiplication of Matrices are below \n");
     for(int i=0;i<a;i++)
      {
        for(int j=0;j<d;j++)
         {
          printf("%d \t",P[i][j]);
         }
         printf("\n");
      } 
  }      

     

   
   
