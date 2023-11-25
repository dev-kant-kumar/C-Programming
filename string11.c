// Write a program to print the highest frequency characters in a string.
#include<stdio.h>
#include<string.h>
void checkCharfrequency(char str[]);
int main()
 {
    char str[10];
    printf("Enter your string : "); 
    fgets(str,10,stdin);
    checkCharfrequency(str);
    return 0;
 }
void checkCharfrequency(char str[])
 {
    int count[10],i=0,maxcount=0;
    char ch[10];
    while(count[i<10])
     {
        count[i]=0;
        i++;
     }

    for(int i=0;str[i]!='\0';i++)
     {
        for(int j=0;str[j]!='\0';j++)
         {
            if(str[i]==str[j])
             {
                count[i]++;
                ch[i]=str[i];
             }
            else
             {
                count[i]=1;
                ch[i]=str[i];
             } 
         }
     }
    for(int i=0;i<10;i++)
     {
        for(int j=0;j<10;j++)
         {
           if(count[i]>count[j])
            {
                maxcount=count[i];
            }
           else
            {
                maxcount=count[j];
            } 
         }
     }
    for(int i=0;i<10;i++)
     {
        if(count[i]==maxcount)
         {
            printf("%c has highest frequency in input string which is %d times \n",ch[i],count[i]);
         }
     }   
 } 