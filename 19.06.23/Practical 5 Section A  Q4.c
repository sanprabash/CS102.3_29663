#include<stdio.h>
int main()
{
        int x,y=0,tot=0;
    printf("Enter positive integer\n");
    scanf("%d",&x);

    if(x<0)
    {
        while(x<0)
        {
            printf("enter positive integer\n");
            scanf("%d",&x);
        }
    }

    while(x>0)
    {
        y=x%10;
        tot+=y;
        x/=10;
    }
    printf("sum of all the digits %d",tot);

    return 0;
}
