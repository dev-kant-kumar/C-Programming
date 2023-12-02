// 2 numbers -a & b are written in file. Write a progarm to replace them with their sum.
#include<stdio.h>
void replace(int a,int b);
int main()
 {
    FILE *fptr;
    int a,b;
    fptr=fopen("file6.txt","r");
    fscanf(fptr,"%d",&a);
    printf("Value of a in file :%d \n",a);
    fscanf(fptr,"%d",&b);
    printf("Valube of b in file :%d \n",b);
    fclose(fptr);
    replace(a,b);
    return 0;
 }
void replace(int a, int b)
 {
    FILE *fptr;
    fptr=fopen("file6.txt","w");
    fprintf(fptr,"%d\t",a+b);
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
 } 