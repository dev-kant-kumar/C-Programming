#if 0
This is program on addition, subtraction, multiplication, division, modular division of two numbers via command line argument
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void main(int argc, char *argv[])
 {
    for(int i=0;i<argc;i++)
     {
        if(strcmp(argv[1],"add")==0)
         {
            printf("Sum is :%d \n", atoi(argv[2]) + atoi(argv[3]) );
            break;
         }
        else if(strcmp(argv[1],"diff")==0)
         {
            printf("Difference is : %d \n", atoi(argv[2]) - atoi(argv[3]) );
            break;
         } 
         else if(strcmp(argv[1],"div")==0)
         {
            printf("Division is : %d \n", atoi(argv[2]) / atoi(argv[3]) );
            break;
         } 
         else if(strcmp(argv[1],"mdiv")==0)
         {
            printf("Modular Division is : %d \n", atoi(argv[2]) % atoi(argv[3]) );
            break;
         }
         else if(strcmp(argv[1],"--version")==0)
          {
            printf("\033[33m Version :v0o1x01 \033[0m\n");
            break;
          }
         else if(strcmp(argv[1],"--help")==0) 
          {
            system("cls");
            printf("\033[1;34m Help Section: \033[0;33m Know how to use this software from following commands \033[0m\n\n");

            printf("[1] \033[1;32m  \'add number number\' \033[0m - To add two numbers \n");
            printf("\033[1;36m       Like: \'add 5 8\' \033[0m   - This will add 5 and 8 and give its sum \n\n");

            printf("[2] \033[1;32m  \'diff number number\' \033[0m - To find difference b/w two numbers \n");
            printf("\033[1;36m       Like: \'diff 5 8\' \033[0m   - This will subtract 8 from 5 and give its difference \n\n");

            printf("[3] \033[1;32m  \'div number number\' \033[0m - To divide two numbers \n");
            printf("\033[1;36m       Like: \'div 5 8\' \033[0m   - This will divide 5 and 8 and give its quotient \n\n");

            printf("[4] \033[1;32m  \'mdiv number number\' \033[0m - To perform modular division of two numbers \n");
            printf("\033[1;36m       Like: \'add 5 8\' \033[0m   - This will perform modular division of 5 and 8 and give its reminder \n\n");

            printf("[5] \033[1;32m  \'--help\' - \033[0m To see help \n\n");

            printf("[6] \033[1;32m  \'--version\' - \033[0m To check current version of this software \n\n\n\n");
            break;
            
          }
          else
           {
            printf("\033[1;31m %s : This is not recognised as any command! refer help section to see commands list \033[0m\n",argv[1]);
            printf("\033[1;31m run \"commandlinearg.exe --help\" to see help section \033[0m\n\n\n");
            Beep(1000,600);
            Beep(1000,600);
            Beep(1000,600);
            Beep(1000,600);
            break;
           }
     }


 }
