// Write a program to enter price of 3 iteams & print their final cost with GST
#include<stdio.h>
int main()
 {
    float price[3],final_price[3];
    for(int i=1;i<=3;i++)
     {
       printf("Enter the price of iteam %d : ",i);
       scanf("%f",&price[i]);
       final_price[i]=price[i]+price[i]*18/100 ;
    }
    for(int i=1;i<=3;i++)
     {
        printf("Final price of iteam %d is %f \n",i,final_price[i]);
     }
  return 0;   
 }