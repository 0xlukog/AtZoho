#include<stdio.h>
void printMenu(){
 printf("\nEnter the month Number to proceed or Enter 13 to exit \t");
}
void main(){
    int month=0;
    printf("\nEnter the month Number : \t");
    scanf("%d",&month);
    while(month <= 12){
    switch (month)
    {
    case 2: printf("\nNumber of days : \t 28\n\n");
            break;
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 12:
    case 10: printf("\nNumber of days : \t 31\n\n");
            break;
    case 4: 
    case 6: 
    case 9: 
    case 11: printf("\nNumber of days : \t 30\n\n");
            break;

    default:
            printf("\ninvalid month");
        break;
    }
    printMenu();
    scanf("%d",&month);
    }
}