// Write a function to reverse an array 
#include<stdio.h>
void reverse_array(int array[],int size);
int main()
 {
    int num[5];
    printf("Enter 5 elements of array as asked below \n");
    for(int i=0;i<5;i++)
     {
        printf("Enter %d elements :",i+1);
        scanf("%d",&num[i]);
     }
     reverse_array(num,5);
     return 0;
 }

 void reverse_array(int array[],int size)
  {
    
    for(int i=0;i<size/2;i++)
     {
        int firstval=array[i];
        int secondval=array[size-i-1];
        array[i]=secondval;
        array[size-i-1]=firstval;
        
     }
  printf("Reverse of array is below \n");
  for(int i=0;i<size;i++)
   {
    printf("%d \t",array[i]);
   }
  } 
