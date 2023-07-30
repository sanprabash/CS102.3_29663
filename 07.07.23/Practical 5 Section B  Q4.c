#include <stdio.h>

int main()
{
        int emno,ems,x,cou=0;
    printf("Enter the employee number and salary\n");
    for(x=0;x==0;)
    {
        scanf("%d %d",&emno,&ems);
        if(emno==-999)
        {
            x=1;
        }

        if(ems>=5000)
        {
            cou++;
        }
    }
    printf("The number of employees  Basic Salary >=5000 is %d",cou);


    return 0;
}
