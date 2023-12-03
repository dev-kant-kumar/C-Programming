// Write a program to allocate memory of size n, where n is enterd by the user.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int n,*ptr;
    printf("Enter the no of integer :");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
     {
        printf("Enter %d number : ",i+1);
        scanf("%d",&ptr[i]);
     }
    for(int i=0;i<n;i++)
     {
        printf("%d number :%d \n",i+1,ptr[i]);
     } 

    return 0;
 }