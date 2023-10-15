// WAP to find factorial using recursion
#include<stdio.h>
int fact(int n);
int main()
 {
    int n;
    printf("Enter the number to find their factorial :");
    scanf("%d",&n);
    printf("Factorail of %d = %d \n",n,fact(n));
 }
 int fact(int n)
  {
    if(n==1)
     {
        return 1;
     }
   int fact1m=fact(n-1);
   int factN=fact1m*n;
   return factN;

  }
