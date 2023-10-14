// This program demonstrate ponter arithmetic
#include<stdio.h>
int main()
 {
    int age=22,age1=18,*ptr =&age,*ptrage1=&age1;
    float price=200.00,*ptr1=&price;
    char star="*",*ptr2=&star;
    printf("PTR %u \n",ptr);
    ptr++;
    printf("PTR %u \n",ptr);
    ptr--;
    printf("PTR %u \n",ptr);
    printf("\n\n");
    printf("PTR1 %u \n",ptr1);
    ptr1++;
    printf("PTR1 %u \n",ptr1);
    ptr1--;
    printf("PTR1 %u \n",ptr1);
    printf("\n\n");
    printf("PTR2 %u \n",ptr2);
    ptr2++;
    printf("PTR2 %u \n",ptr2);
    ptr2--;
    printf("PTR2 %u \n",ptr2);
    // Substraction of ponter 
    printf("Difference =%d \n",ptr-ptrage1);

    return 0;
 }