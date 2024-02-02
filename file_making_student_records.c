#if 0
This program show the use of file management in c language.
#endif

#include <stdio.h>
#include <string.h>
#include <windows.h>

void enter_record(FILE *fptr);
void check_record(FILE *fptr);

int main()
{
    int choice;

    system("cls");

    printf("This program store students details and show details when needed \n\n\n");

a:
    printf("Select from options below \n\n");

    printf("[1]-To enter new records {for first time entry} \n");
    printf("[2]-To add new records {for adding to existing records}\n");
    printf("[3]-To check records \n");
    printf("[4]-To exit \n\n");

    printf("Enter option no {like 1} : ");
    int n = scanf("%d", &choice);

    if (n != 1)
    {
        printf("\033[5;31m Invalid Input! Only no are allowed \033[0m\n\n");
        scanf("%*s");
    }

    if (choice == 1)
    {
        // To enter new records

        FILE *fptr;
        int no_of_students;

        fptr = fopen("file7.txt", "w");

        if (fptr != NULL)
        {
            printf("\n\n");
            printf("\033[1;32m File open successfully to enter new records \033[0m\n\n");

            printf("\033[5;44m Enter students details \033[0m\n\n\n");

            printf("Enter the number of students :");
            scanf("%d", &no_of_students);

            for (int i = 0; i < no_of_students; i++)
            {
                enter_record(fptr);
            }

            printf("\033[1;32m All data of %d students recorded successfully \033[0m\n\n", no_of_students);
            printf("--------------------------------------------------------------------------------------------------------\n\n\n");

            fclose(fptr);
        }
        else
        {
            printf("\033[5;31m Error opening the file \033[0m\n\n");
            printf("--------------------------------------------------------------------------------------------------------\n\n\n");
        }

        goto a;
    }

    else if (choice == 2)
    {
        // To add new records

        FILE *fptr;
        int no_of_new_students;

        fptr = fopen("file7.txt", "a");

        if (fptr != NULL)
        {
            printf("\n\n");
            printf("\033[1;32m File open successfully to add new records \033[0m\n\n");

            printf("\033[5;44m Enter students details \033[0m\n\n\n");

            printf("Enter the number of students :");
            scanf("%d", &no_of_new_students);

            for (int i = 0; i < no_of_new_students; i++)
            {
                enter_record(fptr);
            }

            printf("\033[1;32m All data of %d students recorded successfully \033[0m\n\n", no_of_new_students);
            printf("--------------------------------------------------------------------------------------------------------\n\n\n");

            fclose(fptr);
        }
        else
        {
            printf("\033[5;31m Error opening the file \033[0m\n\n");
            printf("--------------------------------------------------------------------------------------------------------\n\n\n");
        }

        goto a;
    }

    else if (choice == 3)
    {

        // To check records

        FILE *fptr;
        int no_of_records;

        fptr = fopen("file7.txt", "r");

        if (fptr != NULL)
        {
            printf("\n\n");
            printf("\033[1;32m File open successfully to read\\check records \033[0m\n\n");

            fseek(fptr, 0, SEEK_END);
            long fileSize = ftell(fptr);

            if (fileSize == 0)
            {
                printf("\033[5;31m File has no records, Enter records first to check it \033[0m\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n\n\n");
                goto a;
            }
            else
            {
                printf("Enter the no of records you want to check : ");
                scanf("%d", &no_of_records);
                printf("\n");

                printf("\033[5;44m We have these records \033[0m\n\n\n");
                printf("Name | City | Marks | Percentage \n");

                for (int i = 0; i < no_of_records; i++)
                {
                    check_record(fptr);
                }
                printf("\033[1;32 \\Records of %d students are fetched and displayed successfully \033[0m\n\n",no_of_records);
                printf("--------------------------------------------------------------------------------------------------------\n\n\n");
            }

            fclose(fptr);
        }
        else
        {
            printf("\033[5;31m File not fount! \033[0m\n\n");
            printf("--------------------------------------------------------------------------------------------------------\n\n\n");
        }

        goto a;
    }

    else if (choice == 4)
    {
        goto b;
    }
    else
    {
        printf("\033[5;31m Invalid option! Enter from {1,2,3,4} only \033[0m\n\n");
        goto a;
    }

b:
    return 0;
}

void enter_record(FILE *fptr)
{
    int marks;
    float percentage;
    char name[100];
    char city[50];

    printf("Enter your name : ");
    scanf(" %[^\n]s", name);
    fprintf(fptr, "%s \t", name);

    printf("Enter your city : ");
    scanf(" %[^\n]s", city);
    fprintf(fptr, "%s \t", city);

    printf("Enter your marks : ");
    scanf("%d", &marks);
    fprintf(fptr, "%d \t", marks);

    printf("Enter your percentage : ");
    scanf("%g", &percentage);
    fprintf(fptr, "%g \n", percentage);

    printf("\033[1;32m Data of %s recored \033[0m\n\n", name);
}

void check_record(FILE *fptr)
{
    // Fetching records from file
    int marks;
    float percentage;
    char name[100];
    char city[50];

    fscanf(fptr, " %[^\t]s", name);
    fscanf(fptr, " %[^\t]s", city);
    fscanf(fptr, "%d", &marks);
    fscanf(fptr, "%g", &percentage);

    printf("\033[1;34m %s | %s | %d | %g \033[0m\n", name, city, marks, percentage);
}