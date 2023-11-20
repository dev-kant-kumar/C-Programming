// Write a program to convert all lowercase vowels to uppercase in a string.
#include<stdio.h>
#include<string.h>
void uppercase(char str[]);
int main()
 {
    char str[100];
    printf("Enter your string :");
    fgets(str,100,stdin);
    uppercase(str);
    return 0;
 }
void uppercase(char str[])
 {
    char newstr[100];
    int i,j;
    for(i=0;str[i]!='\0';i++)
     {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
         {
           switch(str[i])
            {
                case 'a':newstr[i]='A';
                         break;
                case 'e':newstr[i]='E';
                         break;
                case 'i':newstr[i]='I';
                         break;
                case 'o':newstr[i]='O';
                         break;
                default: newstr[i]='U';                           
            }
         }
        else
         {
            newstr[i]=str[i];
         } 
       j=i;  
     }
    newstr[j]='\0';
    printf("New string with captalization of vowels in input string: %s \n",newstr); 
 } 