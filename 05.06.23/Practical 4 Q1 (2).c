#include<stdio.h>
int main()
{
    int num;

    printf("Enter number :");
    scanf("%d",&num);

    switch(num%2)
    {
    case 0:
        printf(" %d is even number",num);
        break;

    case 1:
        printf("%d is odd number",num);
        break;
    }
    return 0;
}
