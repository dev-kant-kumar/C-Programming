// Check if a given characters is present in string or not.
#include<stdio.h>
#include<string.h>
void charCheck(char str[]);
int main()
 {
    char str[100];
    printf("Enter your string : ");
    fgets(str,100,stdin);
    charCheck(str);
    return 0;
 }
void charCheck(char str[])
 {
    char ch;
    int count=0;
    printf("This program uses case sensitivity while checking characters \n");
    printf("Enter the charcter to check their presence in string : ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
     {
        if(str[i]==ch)
         {
            count++;
         }
     }
    count==0? printf("%c is not present in the input string \n",ch) : printf("%c is present in the string with %d occurrence \n",ch,count); 
    
 } 