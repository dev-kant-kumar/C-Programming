// This program takes inputs of students data and print their data back to them
#include<stdio.h>
struct student {
    int rollno;
    char name[50];
    float height;
};
void studentDataEntry( struct student *a);
void checkRecords(struct student a );


int main()
 {
    int noOfRecords;
    printf("How many records you want to enter :");
    scanf("%d",&noOfRecords);
    struct student records[noOfRecords];
    for(int i=0;i<noOfRecords;i++)
     {
        studentDataEntry(&records[i]);
     }
    printf("Students Records \n");
    for(int i=0;i<noOfRecords;i++)
     {
        checkRecords(records[i]);
     } 
 }
 void studentDataEntry( struct student *a)
  {
    printf("Enter your roll no :");
    scanf("%d",&a->rollno);
    printf("Enter your name :");
    scanf(" %[^\n]s",a->name);
    printf("Enter your height :");
    scanf("%f",&a->height);
  }
  void checkRecords(struct student a)
   {
    printf("Roll : %d , Student Name : %s ,Height : %f \n",a.rollno,a.name,a.height);
   }