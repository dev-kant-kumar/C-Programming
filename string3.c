// Make a program that inputs user'sname & prints its length.
#include<stdio.h>
#include<string.h>
int lengthString(char str[],int *ptr);
int main()
 {
    char fullname[50];
    int space=0;
    printf("Enter your full name : ");
    fgets(fullname,50,stdin);
    //  printf("Length of string =%d \n",strlen(fullname)); // Using len function of string 
    printf("Length of string =%d including %d white space \n",lengthString(fullname,&space),space);
   
    return 0;
    
 }
 int lengthString(char str[],int *ptr)
  {
    int length=0;
    for(int i=0;str[i]!='\0';i++)
     {
        if(str[i]==' ')
         {
            (*ptr)++;
         }
        length++;
     }
   return length-1;  
  }