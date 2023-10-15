//wAP to show use of switch 
#include<stdio.h>
int main()
 {
    char day;
    printf("Enter like this m for monday \n t for tuesday \n w for wednesday \n T for thursday \n f for friday \n s for saturday \n S for sunday \n");
    printf("Enter first letter of day : ");
    scanf("%c",&day);
    switch(day)
     {
        case 'm' : printf("You have to go office \n");
                   break;
        case 't' : printf("You have metting at office \n");
                   break;
        case 'w' : printf("You have to sumbit project status today \n");
                   break;
        case 'T' : printf("Work on projects \n");
                   break;           
        case 'f' : printf("Work on projects \n");
                   break;
        case 's' : printf("You have to arrange project work load to submi \n");
                   break;
        case 'S' : printf("Chill, Today is your day \n");
                   break;
        default : printf("Enter valid input \n");                                 
      }
   return 0;   
 }