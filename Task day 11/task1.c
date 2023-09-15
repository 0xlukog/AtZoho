#include <stdio.h>

void printValue(int number)
{
    char ones[10][20] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    char tens[10][20] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    char others[10][20] = {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
    if (number <= 10)
    {
        printf("%s ", ones[number - 1]);
    }
    else if (number >= 20 && number < 100)
    {
        printf("%s ", others[(number / 10) - 1]);
        printValue(number % 10);
    }
    else if (number >= 100 && number < 1000)
    {
        printf("%s hundred ", ones[(number / 100) - 1]);
        printValue(number % 100);
    }
    else if (number >= 1000 && number < 10000)
    {
        printf("%s thousand ", ones[(number / 1000) - 1]);
        printValue(number % 1000);
    }
    else if (number >= 10000 && number < 100000)
    {
        if(number/1000 <=10 )
        {
            printf("%s thousand ", ones[(number / 1000) - 1]);
            printValue(number % 1000);
        }
        else if(number/1000<=20){
            printf("%s thousand ", tens[(number / 1000)-11]);
            printValue(number % 1000);
        }
        else{
            printf("%s thousand ", others[(number / 1000)-11]);
            printValue(number % 1000);
        }
    }
      else if (number >= 100000 && number < 1000000)
    {
        if(number/10000 <=10 )
        {
            printf("%s lakh ", ones[(number / 10000) - 1]);
            printValue(number % 10000);
        }
        else if(number/10000<=20){
            printf("%s lakh ", tens[(number / 10000)-11]);
            printValue(number % 10000);
        }
        else{
            printf("%s lakh ", others[(number / 10000)-11]);
            printValue(number % 10000);
        }
    }
               else if (number >= 1000000 && number < 10000000)
    {
        if(number/100000 <=10 )
        {
            printf("%s lakh ", ones[(number / 100000) - 1]);
            printValue(number % 100000);
        }
        else if(number/10000<=20){
            printf("%s lakh ", tens[(number / 100000)-11]);
            printValue(number % 100000);
        }
        else{
            printf("%s lakh ", others[(number / 100000)-11]);
            printValue(number % 100000);
        }
    }
}
void main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    printf("\n");

    printValue(n);
}