#include<stdio.h>
int main ()
{
        int x,y=0,z=0,count9=0;
    printf("Enter a number\n");
    scanf("%d",&x);

    z=x;
    for(;z>0;z--)
    {
        y=x%z;
        if(x==0)
        {
            count9+=1;
        }
    }

    if(count9==2)
    {
        printf("This is prime number.");
    }
    else
    {
        printf("This is not prime number");
    }
    printf("\n");

    return 0;
}
