#include<stdio.h>
int main()
{
    int mnum;

    printf("Enter month number :");
    scanf("%d",&mnum);

    switch(mnum)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number %d month has 31 days",mnum);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number %d month has 30 days",mnum);
        break;
    case 2:
        printf("Number %d month has 28 days",mnum);
        break;
    default:
        printf("Invalid month number");

    }
    return 0;
}
