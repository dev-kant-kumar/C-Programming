// In this program exploring commonly used formate specifier in c and some basic things.
#include<stdio.h>
int main()
 {
    int num;
    float price;
    char name[100];
    int* ptr=&num;
    double number = 123456.789;

   
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Enter price :");
    scanf("%g",&price);

    printf("Enter your name :");
    scanf(" %[^\n]s",name);

    printf("Number is %d \n",num);
    printf("Price is ₹%g \n",price);
    printf("Price is $%g \n",price);
    printf("Name :%s \n",name);
    printf("Address of num :%d \n",ptr);
    printf("Address of num :%p \n",ptr);
    printf("Address of num :%x \n",ptr);
    printf("Address of num :%X \n",ptr);
    printf("Address of num :%u \n",ptr);
    printf("Address of num :%o \n",ptr);
     // Using %e for lowercase exponential notation
    printf("Lowercase exponential notation: %e\n", number);

    // Using %E for uppercase exponential notation
    printf("Uppercase exponential notation: %E\n", number);
    printf("You got :%d%% \n",98);
    printf("C program starts from \"main\" function \n");
    printf("C program starts from \'main\' function \n");
    printf("Choice C Language\\Python as begineer \n");
 }