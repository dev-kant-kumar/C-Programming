// String using pointer
// If you are declearing string using pointer you can change its value later.
#include<stdio.h>
int main()
 {
    char *name ="Dev Kant Kumar";
    printf("Your name is %s \n",name);
    name="Dev Kumar";
    printf("Your name is %s \n",name);
    return 0;
 }