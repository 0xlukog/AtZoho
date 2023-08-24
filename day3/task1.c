#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    int max = a > b ? a : b;
    int min = a > b ? b : a;
    return max - min;
}
int mul(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{
    if (b == 0)
    {
        printf("Divisor cant be zero");
        return 0;
    }
    else
        return a / b;
}
void disp_menu()
{
    printf("Menu\n1.\t ADD\n2.\tSUBTRACT\n3.\tMULTIPLY\n4.\tDIVIDE\n5.\tEXIT\n\nEnter choice :\t");
}
void cleardisp()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
void main()
{
    int a, b;
    int choice = 0;
    while (choice != 5)
    {
        cleardisp();
        disp_menu();
        scanf("%d", &choice);
        printf("Enter number one : ");
        scanf("%d", &a);
        printf("Enter number two : ");
        scanf("%d", &b);
        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d\t", a, b, add(a, b));
            printf("\nPress 5 to exit Press 6 to continue...");
            scanf("%d", &choice);
            if (choice == 5)
            {
                cleardisp();
                break;
            }
            else if (choice == 6)
            {
                cleardisp();
                break;
            }

        case 2:
            printf("Subtraction of %d and %d is %d\t", a, b, sub(a, b));
            printf("\nPress 5 to exit Press 6 to continue...");
            scanf("%d", &choice);
            if (choice == 5)
            {
                cleardisp();
                break;
            }
            else if (choice == 6)
            {
                cleardisp();
                break;
            }
        case 3:
            printf("Multiplication of %d and %d is %d\t", a, b, mul(a, b));
            printf("\nPress 5 to exit Press 6 to continue...");
            scanf("%d", &choice);
            if (choice == 5)
            {
                cleardisp();
                break;
            }
            else if (choice == 6)
            {
                cleardisp();
                break;
            }
        case 4:
            printf("Division of %d and %d is %d", a, b, add(a, b));
            printf("\nPress 5 to exit Press 6 to continue...");
            scanf("%d", &choice);
            if (choice == 5)
            {
                cleardisp();
                break;
            }
            else if (choice == 6)
            {
                cleardisp();
                break;
            }
        case 5:
            break;
        }
    }
}