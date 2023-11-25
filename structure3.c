// Write a program to enter address (house no,block,city,state) of 5 people
#include<stdio.h>
typedef struct address
 {
    int houseNo;
    int block;
    char city[100];
    char state[100];
 }addres;
 void dataEntry(addres *a);
 void printData(addres a);
int main()
 {
    addres a[5];
    printf("Enter address below \n");
    for(int i=0;i<5;i++)
     {
        dataEntry(&a[i]);
     }
    printf("We have these records \n");
    for(int i=0;i<5;i++)
     {
        printData(a[i]);
     }
    
 }
void dataEntry(addres *a)
 {
    printf("Enter House No : ");
    scanf("%d",&a->houseNo);
    printf("Enter Block No : ");
    scanf("%d",&a->block);
    printf("Enter City : ");
    scanf(" %[^\n]s",a->city);
    printf("Enter state : ");
    scanf(" %[^\n]s",a->state);
 } 
void printData(addres a)
 {
    printf("House No :%d, Block :%d, City :%s, State :%s \n",a.houseNo,a.block,a.city,a.state);
 } 