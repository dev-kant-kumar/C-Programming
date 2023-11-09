// Take a string input from user using %c
#include<stdio.h>
int main()
 {
   char name[10];
   int i=0;
   printf("Enter your name: ");
   for(i=0;i<10;i++)
    {
      scanf("%c",&name);
    }
 
 printf("Your name : ");
 for(i=0;name[i]!='\0';i++)
  {
   printf("%c",name[i]);
  }
  return 0;
 }