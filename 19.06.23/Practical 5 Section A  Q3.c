#include<stdio.h>
int main()
{
    int number, i,factorial=1;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("Not calculable.\n");
    }
    else if(number == 0)
    {
        printf("Factorial of %d is %d\n",number,i);
    }
    else
    {
        for(i=1;i<=number;i++)
        {
            factorial *=i;
        }
        printf("Factorial of %d is:455%d\n",number,factorial);
    }
    return 0;
}
