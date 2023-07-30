#include<stdio.h>
int main()
{
    float bsalary,nsalary,increment;
    char ename[10];

    printf("Enter employee name and basic salary:");
    scanf("%s %f",&ename,&bsalary);


    if(bsalary<5000)
    {
        increment=bsalary*0.05;
    }
    else if(bsalary>=5000 && bsalary<10000)
    {
        increment=bsalary*0.10;
    }
    else
    {
        increment=bsalary*0.15;
    }

    nsalary=bsalary+increment;

    printf("%s your new salary is %.2f\n",ename,nsalary);

    return 0;
}
