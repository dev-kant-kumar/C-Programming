// Write a function to count the occurrence of vowels in a string.
#include<stdio.h>
#include<string.h>
void occurrence(char str[]);
int main()
 {
    char str[100];
    printf("Enter your string : ");
    fgets(str,100,stdin);
    occurrence(str);
    return 0;
 }
void occurrence(char str[])
 {
    int count=0;
    strlwr(str);
    for(int i=0;i<strlen(str);i++)
     {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
         {
            count++;
         }

     }
    printf("Entered string contains %d vowels \n",count); 
 } 