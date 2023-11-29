//Write a progrm to write 1 to 100 in text file and then read it and print it.
#include<stdio.h>
void writeinFile();      // This function write 1 to 100 in file
void printfromFile();    // This function reads from file and print it 

int main()
 {
    writeinFile();
    printfromFile();
    return 0;
 }
void writeinFile() 
 {
    
   FILE *ptr;
   ptr=fopen("file3.txt","w");
   for(int i=1;i<101;i++)
    {
        fprintf(ptr,"%d \n",i);
    }
    fclose(ptr);

 }
void printfromFile()
 {
    FILE *ptr;
    ptr=fopen("file3.txt","r");
    for(int i=0;i<101;i++)
     {
        int num;
        fscanf(ptr,"%d",&num);
        printf("%d \n",num);
     }
    fclose(ptr);
 } 