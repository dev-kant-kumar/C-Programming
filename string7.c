// Write a function named slice, which takes a string and returns a sliced string from n to m.
#include<stdio.h>
#include<string.h>
void slice(char str[],int index1,int index2); //index1=n,index2=m.
int main()
 {
    char a[17];
    int index1,index2;
    printf("Maximum length of string should not be exceed 16 characters \n");
    printf("Enter your string : ");
    fgets(a,50,stdin);
    printf("Enter starting index for slicing : ");
    scanf("%d",&index1);
    printf("Enter end index for slicing : ");
    scanf("%d",&index2);
    slice(a,index1,index2);
    return 0;
 }
void slice(char str[], int index1,int index2)
 {
    char sliced[17];
    int i,j=0;
    for(i=index1;i<=index2;i++,j++)
     {
       sliced[j]=str[i];
     }
    sliced[j]='\0';
    printf("Sliced string is as : %s \n",sliced);
 }
