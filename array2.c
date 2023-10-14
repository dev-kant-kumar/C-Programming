// Write a function to count the number of odd numbers in an array
#include<stdio.h>
int odd_count(int array[],int size);
int main()
 {
    int num[6];
    printf("Enter the numbers as asked below \n");
    for(int i=0;i<6;i++)
     {
        printf("Enter the %d number: ",i);
        scanf("%d",&num[i]);
     }
     printf("Total no of odd numbers =%d \n",odd_count(num,6));
     return 0;
 }
 int odd_count(int array[], int size)
  {
    int count=0;
    for( int i=0;i<size;i++)
     {
        if(array[i]%2!=0)
         {
            count++;
         }
     }
     return count;

  }