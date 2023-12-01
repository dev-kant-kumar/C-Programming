// Write a program to input student information from a user & enter it to a file.
#include<stdio.h>
typedef struct student
 {
    int roll;
    char name[100];
    int marks[5];
 }stu;
void input(stu *a);
void fileinput(stu *a);

int main()
 {
    int noOfstudent;
    printf("Enter number of students :");
    scanf("%d",&noOfstudent);
    stu stuData[noOfstudent];
    for(int i=0;i<noOfstudent;i++)
     {
        input(&stuData[i]);
        fileinput(&stuData[i]);
     }
    return 0;
 }
void input(stu *a)
 {
    printf("Enter roll :");
    scanf("%d",&a->roll);
    printf("Enter name : ");
    scanf(" %[^\n]s",a->name);
    printf("Enter marks of 5 subjects below \n");
    for(int i=0;i<5;i++)
     {
        printf("Enter marks of subject %d : ",i+1);
        scanf("%d",&a->marks[i]);
        if(a->marks[i]<0)
         {
            printf("Enter valid marks \n");
            printf("Enter marks of subject %d : ",i+1);
            scanf("%d",&a->marks[i]);
         }
     }
 } 
void fileinput(stu *a)
 {
    FILE *fptr;
    fptr=fopen("file4.txt","a");
    fprintf(fptr,"%d \t",a->roll);
    fprintf(fptr,"%s \t",a->name);
    for(int i=0;i<5;i++)
     {
        fprintf(fptr,"%d \t",a->marks[i]);
     }
    fprintf(fptr,"\n"); 
    printf("Data recorded in file successfully \n"); 
    fclose(fptr);
 } 
