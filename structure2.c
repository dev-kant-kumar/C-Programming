// Write a program to store the data of 3 students
#include<stdio.h>
struct student
 {
    int roll;
    char name[70];
    float CGPA;
 };
void dataEntry( struct student *a);
void checkData(struct student a);
int main()
 {
    struct student a[3];
    printf("Enter students data below \n");
    for(int i=0;i<3;i++)
     {
        dataEntry(&a[i]);
     }
    printf("We have these records \n\n"); 
    for(int i=0;i<3;i++)
     {
        checkData(a[i]);
     } 
 return 0;
 }
void dataEntry(struct student *a)
 {
    printf("Enter roll no : ");
    scanf("%d",&a->roll);
    printf("Enter name : ");
    scanf(" %[^\n]s",a->name);
    printf("Enter CGPA : ");
    scanf("%f",&a->CGPA);
 }
void checkData(struct student a)
 {
    printf("Roll: %d, Name : %s, CGPA :%.1f, \n",a.roll,a.name,a.CGPA);
    printf("\n");
 } 