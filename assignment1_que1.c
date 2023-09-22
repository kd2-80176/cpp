#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date *ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}
void acceptDate(struct Date *ptrDate)
{
    printf("enter the date in day,month,year=");
    scanf("%d%d%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
}
void printDate(struct Date *ptrDate)
{
    printf("date is day=%d month=%d year=%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

int main()
{
    struct Date d1;
    int choice;
    char ch;
    do
    {
        struct Date d1;
        int choice;
        printf("1.DEFAULT DATE \n 2.TO ENTER DATE \n  0.EXIT \n");
        printf("ENTER YOUR CHOICE=");

        scanf("%d", &choice);

        switch (choice)
        {
        
        case 1:
            initDate(&d1);
            printDate(&d1);
            break;
        case 2:
            acceptDate(&d1);
            printDate(&d1);
            break;
        case 0:
            printf("INVALID CHOICE");
        }
        printf("Do you want to continue? enter 'y' for continue=");
        scanf("%s", &ch);
    } while (ch == 'y');
    return 0;
}