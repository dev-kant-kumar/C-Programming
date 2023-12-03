// Write a progarm to allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
     {
        printf("Enter your roll no : ");
        scanf("%d",&ptr[i]);
     }
    for(int i=0;i<5;i++)
     {
        printf("%d \n",ptr[i]);
     } 
    // Reallocare memory to increase size to 8 bytes.
    ptr=realloc(ptr,8);
    for(int i=0;i<8;i++)
     {
       printf("Enter your roll no : ");
       scanf("%d",&ptr[i]);
     }
    for(int i=0;i<8;i++)
     {
        printf("%d \n",ptr[i]);
     }  
    return 0;
 }