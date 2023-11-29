// Write a program to read student data like(roll,name,marks) which is stored in a text file.
#include<stdio.h>
int main()
 {
    FILE *ptr;
    int roll;
    char name[100];
    float marks;
    ptr=fopen("newfile.txt","r");
    fscanf(ptr,"%d",&roll);
    printf("ROLL : %d \t",roll);

    fscanf(ptr,"%s",name);
    printf("Nmae : %s \t",name);

    fscanf(ptr,"%f",&marks);
    printf("Marks :%.1f \t",marks);
    
    fclose(ptr);
    return 0;
 }