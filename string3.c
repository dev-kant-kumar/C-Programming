// Make a program that inputs user'sname & prints its length.
#include<stdio.h>
#include<string.h>
int lengthString(char str[]);
int main()
 {
    char fullname[50];
    printf("Enter your full name : ");
    fgets(fullname,50,stdin);
    //  printf("Length of string =%d \n",strlen(fullname)); // Using len function of string 
    printf("Length of string =%d \n",lengthString(fullname));
   
    return 0;
    
 }
 int lengthString(char str[])
  {
    int length=0;
    for(int i=0;str[i]!='\0';i++)
     {
        length++;
     }
   return length;  
  }